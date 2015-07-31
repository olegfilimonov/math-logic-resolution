#include "stdafx.h"
#include <string>
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <codecvt>
#include <algorithm>
//
using namespace std;
using namespace System;
// ∧ ∨ = →


wstring opStep1_1(wstring inp);
wstring opStep1_2(wstring inp);
wstring opStep1_3(wstring inp);
wstring opStep2_1(wstring inp);
wstring opSimplify(wstring inp);
wstring opStep4_2(wstring inp);
void shift(wstring s, int n);
void spliteverything();
int opAmount(wstring s)
{
	int k = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] == L'∧') || (s[i] == L'∨') || (s[i] == L'=') || (s[i] == L'→') || (s[i] == L'∀') || (s[i] == L'∃'))
			k++;
	}
	return k;
}
std::wstring ReplaceString(std::wstring subject, const std::wstring& search,
	const std::wstring& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != std::wstring::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}
wstring opReplace(wstring inp)
{
	wifstream fin;
	fin.open("replace.txt", ios::in);
	fin.imbue(std::locale(std::locale::empty(), new std::codecvt_utf8<wchar_t>)); // перевод в utf8
	wstring s1, s2, in = inp;
	while (!fin.eof())
	{
		getline(fin, s1);
		s2 = s1.substr(s1.find_first_of(';') + 1, s1.length() - s1.find_first_of(';'));
		s1 = s1.substr(0, s1.find_first_of(';'));
		in = ReplaceString(in, s1, s2);
	}
	return in;
}
//L[ ∀x(∀y(P(y)→Q(x,y))→(∃zQ(z,x))) ]∧[∀x(∃y(P(y)∧R(x,y)))→(∀z¬Q(z,x)))]∧[∀y(P(y)→Q(a,y))]∧[S(b)∧(R(a,b)∨R(c,b))]∧[∀x(S(x)→P(x))]∧¬[R(c,b)]"
wstring opStep1(wstring inp)
{
	while (inp.find_first_of(L'→') != wstring::npos)
	{
		int mid = inp.find_first_of(L'→');
		int left = mid, right = mid, temp=1;
		while (temp>0)
		{
			left--;
			if (inp[left] == L')') temp++;
			if (inp[left] == L'(') temp--;
			if(inp[left] == L'[') break;
		}
		temp = 1;
		while (temp>0)
		{
			right++;
			if (inp[right] == L')') temp--;
			if (inp[right] == L'(') temp++;
			if (inp[right] == L']') break;
		}
		inp.replace(left+1, right-left-1 , opStep1_1(inp.substr(left+1,right-left-1)));
	}

	while (inp.find_first_of(L'⇔') != wstring::npos)
	{
		int mid = inp.find_first_of(L'⇔');
		int left = mid, right = mid, temp = 1;
		while (temp>0)
		{
			left--;
			if (inp[left] == L')') temp++;
			if (inp[left] == L'(') temp--;
			if (inp[left] == L'[') break;
		}
		temp = 1;
		while (temp>0)
		{
			right++;
			if (inp[right] == L')') temp--;
			if (inp[right] == L'(') temp++;
			if (inp[right] == L']') break;
		}
		inp.replace(left + 1, right - left - 1, opStep1_2(inp.substr(left + 1, right - left - 1)));
	}

	while (inp.find_first_of(L'⊕') != wstring::npos)
	{
		int mid = inp.find_first_of(L'⊕');
		int left = mid, right = mid, temp = 1;
		while (temp>0)
		{
			left--;
			if (inp[left] == L')') temp++;
			if (inp[left] == L'(') temp--;
			if (inp[left] == L'[') break;
		}
		temp = 1;
		while (temp>0)
		{
			right++;
			if (inp[right] == L')') temp--;
			if (inp[right] == L'(') temp++;
			if (inp[right] == L']') break;
		}
		inp.replace(left + 1, right - left - 1, opStep1_3(inp.substr(left + 1, right - left - 1)));
	}

	while (inp.find(L"¬¬") != wstring::npos)
	{
		inp = inp.replace(inp.find(L"¬¬"), 2, L"");
	}
	return inp;
}
wstring opStep1_1(wstring inp)
{
	wstring s1=inp, s2;
	s2 = s1.substr(s1.find_first_of(L'→') + 1, s1.length() - s1.find_first_of(L'→'));
	s1 = s1.substr(0, s1.find_first_of(L'→'));
	s1 = ((opAmount(s1) > 0) ? (L"¬(" + s1 + L")") : (L"¬" + s1)) + L"∨" +
		((opAmount(s2) > 0) ? (L"(" + s2 + L")") : (s2));
	return s1;
}
wstring opStep1_2(wstring inp)
{
	wstring s1 = inp, s2;
	s2 = s1.substr(s1.find_first_of(L'⇔') + 1, s1.length() - s1.find_first_of(L'→'));
	s1 = s1.substr(0, s1.find_first_of(L'⇔'));
	s1 = (L"("+(((opAmount(s1) > 0) ? (L"¬(" + s1 + L")") : (L"¬" + s1)) + L"∨" +
		((opAmount(s2) > 0) ? (L"(" + s2 + L")") : (s2))) + L")") + L"∧" + (L"("+(((opAmount(s1) > 0) ? (L"(" + s1 + L")") :  (s1)) + L"∨" +
		((opAmount(s2) > 0) ? (L"¬(" + s2 + L")") : (L"¬"+s2))) + L")");
	return s1;
}
wstring opStep1_3(wstring inp)
{
	wstring s1 = inp, s2;
	s2 = s1.substr(s1.find_first_of(L'⊕') + 1, s1.length() - s1.find_first_of(L'→'));
	s1 = s1.substr(0, s1.find_first_of(L'⊕'));
	s1 = (L"(" + (((opAmount(s1) > 0) ? (L"¬(" + s1 + L")") : (L"¬" + s1)) + L"∨" +
		((opAmount(s2) > 0) ? (L"¬(" + s2 + L")") : (L"¬"+s2))) + L")") + L"∧" + (L"(" + (((opAmount(s1) > 0) ? (L"(" + s1 + L")") : (s1)) + L"∨" +
		((opAmount(s2) > 0) ? (L"(" + s2 + L")") : ( s2))) + L")");
	return s1;
}

wstring opStep2(wstring inp)
{
	while (inp.find(L"¬(") != wstring::npos)
	{

		int left = inp.find(L"¬("), right = left + 1, temp = 1;

			while (temp>0)
			{
				right++;
				if (inp[right] == L')') temp--;
				if (inp[right] == L'(') temp++;
				if (inp[right] == L']') break;
			}
			inp.replace(left, right - left+1, opStep2_1(inp.substr(left, right - left+1)));
	}
	while (inp.find(L"¬¬") != wstring::npos)
	{
		inp = inp.replace(inp.find(L"¬¬"), 2, L"");
	}
	return opSimplify(inp);
}
wstring opSimplify(wstring inp)
{
	int k = 0, j = 0, am = 0,tm=0, lol = 0;
	for (int i = 0; i < inp.length(); i++)
	{
		if (inp[i] == L'(')
		{
			j = i;
			am = 0; tm = 0;
			k = 0; lol = 0;
			while (k>=0)
			{
				j++;
				if (inp[j] == L'(') k++;
				if (inp[j] == L')') k--;
				if ((((inp[j] <= L'Z') && (inp[j] >= L'A') || (inp[j] == L'∃') || (inp[j] == L'∀')))&&(k==0)) lol++;
				if ((inp[j] == L'∨')&&(k==0)) am++;
				if ((inp[j] <= L'z') && (inp[j] >= L'a')) tm++;
			}
			if (((am == 0)&&(lol!=0))||((am==0)&&(tm==0)&&(lol==0))) {
				inp.erase(i, 1); 
				inp.erase(j-1, 1); 
			}
		}

	}
	return inp;
}
wstring opSimplify2(wstring inp)
{
	int k = 0, j = 0, km = 0, dm=0,am=0;
	for (int i = 0; i < inp.length(); i++)
	{
		if (inp[i] == L'(')
		{
			j = i;
			km = 0; dm = 0; am = 0;
			k = 0;
			while (k >= 0)
			{
				j++;
				if (inp[j] == L'(') k++;
				if (inp[j] == L')') k--;
				if ((inp[j] == L'∨') 
					&& (k == 0)) dm++;
				if ((inp[j] == L'∧')
					&& (k == 0)) km++;
				if ((inp[j] <= L'Z') && (inp[j] >= L'A')
					&& (k == 0)) am++;
			}
			if ((am>0)&&((km == dm == 0) || (j == inp.length() - 1) && (i == 0) ||
				(!(((i>0) && (inp[i - 1] == L'∧')) || ((j < inp.length() - 1) && (inp[j + 1] == L'∧')))) ||
				(km==0)
				))
			{
				inp.erase(i, 1);
				inp.erase(j - 1, 1);
			}
		}
	}
	return inp;
}
wstring opStep2_1(wstring inp)
{
	//¬(P(y)∧R(x,y))
	inp = inp.substr(2, inp.length() - 3);
	switch (inp[0])
	{
	case L'∀': inp[0] = L'∃'; inp.insert(2, L"¬"); break;
	case L'∃': inp[0] = L'∀'; inp.insert(2, L"¬"); break;
	default: inp.insert(0, L"¬");
	}
	int k = 0;
	for (int i = 1; i < inp.length(); i++)
	{
		if (inp[i] == L'(') k++;
		if (inp[i] == L')') k--;
		if ((inp[i] == L'∧') && (k == 0)) inp.replace(i, 1, L"∨¬"); else
		if ((inp[i] == L'∨')&&(k==0)) inp.replace(i, 1, L"∧¬");
	}
	while (inp.find(L"¬¬") != wstring::npos)
	{
		inp = inp.replace(inp.find(L"¬¬"), 2, L"");
	}
	while (inp.find(L"¬∀") != wstring::npos)
	{
		inp.insert(inp.find(L"¬∀") + 3, L"¬");
		inp = inp.replace(inp.find(L"¬∀"), 2, L"∃" );
	}
	while (inp.find(L"¬∃") != wstring::npos)
	{
		inp.insert(inp.find(L"¬∃") + 3, L"¬");
		inp = inp.replace(inp.find(L"¬∃"), 2, L"∀");
	}
	inp.insert(0, L"("); inp.insert(inp.length()-1,L")");
	return inp;
}
/*
∀x(∃yP(y)∧¬Q(x,y)∨∃∃zQ(z,x))∧ ∃
∀x(∀y(¬P(y)∨¬R(x,y))∨∀z¬Q(z,x))∧
∀y(¬P(y)∨Q(a,y))∧
S(b)∧(R(a,b)∨R(c,b))∧
∀x(¬S(x)∨P(x))∧
¬R(c,b)

Ошибка 1:
∃x∀y∃z∀t(¬(¬(P(z)∨Q(f(y)))∨R(x,t)))
на шаге 4. (не 4_1)
*/
wstring opStep3(wstring inp)
{

	wstring buf = L"";
	int a[L'z' + 1];
	for (int i = L'a'; i <= L'z'; i++)
		a[i] = 1;
	int i = 0;
	int temp = 0, pemp = 0;
	while (temp != wstring::npos)
	{
		temp = inp.find(10, pemp+1);
		wstring pimp;
		if (temp == -1) { pimp = inp.substr(pemp,inp.length()-pemp); } else
		pimp = inp.substr(pemp, temp - pemp);
		i = 0;
		while (i < pimp.length())
		{

			if (pimp[i] == L'∃')
			{
				//buf = L"";
				for (int j = 0; j < i; j++)
				{
					if (pimp[j] == L'∀') buf += pimp[j + 1];
				}
				for (int j = i + 2; j < pimp.length(); j++)
				{
					if (pimp[j] == pimp[i + 1])
					{
						switch (buf.length())
						{
						case 0: pimp.replace(j, 1, L"a"); pimp.insert(j + 1, 1, L'0' + a[L'a']); break;
						case 1: pimp.replace(j, 1, L"f"); pimp.insert(j + 1, 1, (L'0' + a[L'f'])); pimp.insert(j + 2, 1, L'('); pimp.insert(j + 3, 1, buf[0]); pimp.insert(j + 4, 1, L')'); break;
						default: pimp.replace(j, 1, L"f"); pimp.insert(j + 1, 1, (L'0' + a[L'f']));
							pimp.insert(j + 2, 1, L'('); pimp.insert(j + 3, 1, buf[0]);
							for (int i = 1; i < buf.length(); i++)
							{
								pimp.insert(j + 3 + i, 1, L','); pimp.insert(j + 4 + i, 1, buf[i]);
							}
							pimp.insert(j + 4 + i + 1, 1, L')'); break;
						}
					}
				}
				a[L'f']++;
				buf = L"";
				//i--;?

			}
			//sdasdasdasd

			i++;
		}
		inp.replace(pemp, temp - pemp, pimp);
		pemp += pimp.length();
	}
	i = 0;

	while (i < inp.length())
	{
		if (inp[i] == L'∀')
		{
			buf += inp[i + 1]; buf += (L'0' + a[inp[i + 1]]); a[inp[i + 1]]++;  //i--;?
			int k = i + 3;
			while ((!((inp[k] == L'∀') && (inp[k + 1] == inp[i + 1])))
				&& (k < inp.length()))
			{
				for (int j = 0; j < buf.length(); j += 2)
				{
					if (
						(inp[k] == buf[j])&&
						((inp[k-1]==L',')||(inp[k-1]==L'('))&&
						((inp[k+1] == L',') || (inp[k+1] == L')'))
					) 
						inp.insert(k + 1, 1, buf[j + 1]);
				}
				k++;
			}
			for (int j = 0; j < buf.length(); j += 2)
			{
				if (inp[i + 1] == buf[j]) buf.erase(j, 2);
			}
			inp.erase(i, 2);
		}
		//sdasdasdasd

		i++;
	}
	while (inp.find(L'∃') != -1)
	{
		inp.erase(inp.find(L'∃'), 2);
	}
	//inp = opSimplify(inp);
	return inp;
}
wstring cons[10000];
int cou=0;
int oldcou;
wstring curUni;
wstring allUni;
void opStep4_1(wstring inp)
{
	while (inp.find(10) != -1) { inp.erase(inp.find(10), 1); }
	int right = 0, k = 0;
	while (right < inp.length())
	{
		
		if (inp[right] == L'(') k++;
		if (inp[right] == L')') k--;
		if ((k == 0) && (inp[right] == L'∧'))
		{
			
			if (inp.substr(0, right).find(L'∧') != wstring::npos) { opStep4_1(inp.substr(0, right));}
			else
			{
				cons[cou] = inp.substr(0, right);
				cou++;
			}
				inp.erase(0, right + 1);
				right = -1;
		}
		right++;
	}
	cons[cou] = inp;
	cou++;
	for (int i = 0; i < cou; i++)
	{
		cons[i] = opSimplify2(cons[i]);
	}
	k = 0;
	
	
}
void shift(wstring s, int n)
{
	
	for (int i = cou-1; i > n; i--)
	{
		cons[i + 1] = cons[i];
	}
	cou++;
	cons[n + 1] = s;
}
wstring opStep4_2(wstring inp)
{ // a and b or c or b => (a or c or b)and(b or c or b)
 // c or a and b => (a or c)(a or b)
 // (a or b) and c 

	//(P(y)∧¬Q(x,y)∨Q(z,x)
		int left=0;
		int k = 0;
		int orcount(0), andcount(0);
		//P(f1(x1))∧¬Q(x1, f1(x1))∨Q(f2(x1), x1) -> (P(f1(x1))∨Q(f2(x1), x1))∧
		if(inp.find(L'∧') != wstring::npos)
		while (1)
		{
			while (1)
			{
				if (inp[left] == L'(') k++;
				if (inp[left] == L')') k--;
				if ((inp[left] == L'∧') && (k == 0)) break;
				if (left++ >= inp.length()) break;
			}
			if (left < inp.length()) break; else { k--; left = 0; }
		}
		int temp = left;
		k = 0;
		while (1)
		{
			if (inp[temp] == L'(') k++;
			if (inp[temp] == L')') k--;
			if ((inp[temp] == L'∨') && (k == 0)){ temp--; break; }
			if ((inp[temp] == L')') && (k == -1)){ temp--; break; }
			if (++temp >= inp.length()) break;
		}
		//left = середина, temp - правая граница
		k = 0;
		while (1)
		{
			if (inp[left] == L')') k++;
			if (inp[left] == L'(') k--;
			if ((inp[left] == L'∨') && (k == 0)){ left++; break; }
			if ((inp[left] == L'(') && (k == -1)){ left++; break; }
			if (--left < 0) break;
		}
		if(left<0) left++;
		wstring tAnd = inp.substr(left, temp - left+1);
		int tleft = left;
		inp.erase(left, temp - left + 1);
		k = 0;
		temp = left;
		while (1)
		{
			if (inp[left] == L')') k++;
			if (inp[left] == L'(') k--;
			if ((inp[left] == L'(') && (k == -1)){ left++; break; }
			if (--left < 0) break;
		}
		if (left<0) left++;
		while (1)
		{
			if (inp[temp] == L'(') k++;
			if (inp[temp] == L')') k--;
			if ((inp[temp] == L')') && (k == -1)){ temp--; break; }
			if (++temp >= inp.length()) {
				temp--; break;
			}
		}
		wstring tElse = inp.substr(left, temp - left + 1);
		wstring out;
		while (tAnd.find(L'∧') != wstring::npos)
		{
			tElse.insert(tleft, tAnd.substr(0, tAnd.find(L'∧')));
			out = out + L'(' + tElse +L")∧";
			tElse.erase(tleft, tAnd.substr(0, tAnd.find(L'∧')).length());
			tAnd.erase(0, tAnd.find(L'∧')+1);
		}
		tElse.insert(tleft, tAnd);
		out = out + L'(' + tElse + L")";
		return out;
}
void spliteverything()
{
	for (int i = 0; i < cou; i++)
	{
		wstring temp = cons[i];
		while(cons[i].find(L'∧') != wstring::npos)
		{

			int k = 0, left = 0;

			while (1)
			{
				if (temp[left] == L'(') k++;
				if (temp[left] == L')') k--;
				if ((temp[left] == L'∧') && (k == 0)) break;
				if (left++ >= temp.length()) break;
			}
			if (left < temp.length())
			{
				shift(temp.substr(left + 1, temp.length() - left + 1), i);
				cons[i].erase(left, temp.length() - left + 1);
			}
		}
	}
}
//P1(x)andP2(x)orP3(x)orP4(x)andP5(x)andP6(x)orP7(x)
wstring opStep4()
{
	wstring out;
	int k = 0;
	
	for (int i = 0; i < cou; i++)
	{
			cons[i] = opStep4_2(cons[i]);
			wstring inp = cons[i];
			int right = 0, k = 0;
			while (right < inp.length())
			{

				if (inp[right] == L'(') k++;
				if (inp[right] == L')') k--;
				if ((k == 0) && (inp[right] == L'∧'))
				{

					if (inp.substr(0, right).find(L'∧') != wstring::npos) { opStep4_1(inp.substr(0, right)); }
					else
					{
						cons[cou] = inp.substr(0, right);
						cou++;
					}
					inp.erase(0, right + 1);
					right = -1;
				}
				right++;
			}
			cons[i] = inp;
			for (int i = 0; i < cou; i++)
			{
				cons[i] = opSimplify2(cons[i]);
			}
			k = 0;
			if (cons[i].find(L'∧') != wstring::npos) i--;
	}
	
	for (int i = 0; i < cou; i++)
	{
		out += L"C"; out += (L'1' + i); out += L": "; out += cons[i]; out += L'\r\n';
	}
	return out;
}
//На вход: K..(x,f(y)) K...(x,z)
wstring unif(wstring s1, wstring s2)
{
	wstring o = L"";
	while (s1 != s2)
	{
		int i = 0;
		int n = min(s1.length(), s2.length());
		while ((s1[i] == s2[i]) && (i < n))
		{
			i++;
		}
		//if (i == n - 1) return 1;
		int st = i;
		while (!((s1[st - 1] == '(') || (s1[st - 1] == ','))) st--;
		int k = 0;
		while (!((k == 0) && ((s1[i] == ')') || (s1[i] == ',')))) { if (s1[i] == '(') k++; if (s1[i] == ')') k--; i++; }
		int en1 = i;
		i = st;
		while (!((k == 0) && ((s2[i] == ')') || (s2[i] == ',')))) { if (s2[i] == '(') k++; if (s2[i] == ')') k--; i++; }
		int en2 = i;

		wstring t1 = s1.substr(st, en1 - st);
		wstring t2 = s2.substr(st, en2 - st);

		if (((t1[0] == L'x') || (t1[0] == L'y') || (t1[0] == L'z')) && (t1[1] <L'9') && (t1[1]>L'0'))
		{
			//t1 - переменная
			if (t2.find(t1) != wstring::npos) { o = L"-1"; return o; }
			else
			{
				o = o + t1 + L"=" + t2 + L";";
				while (s1.find(t1) != wstring::npos) s1.replace(s1.find(t1), t1.length(), t2);
				while (s2.find(t1) != wstring::npos) s2.replace(s2.find(t1), t1.length(), t2);
			}
		}
		else
		{
			if (((t2[0] == L'x') || (t2[0] == L'y') || (t2[0] == L'z')) && (t2[1] <L'9') && (t2[1]>L'0')) 
			{
				//t2-переменная
				if (t1.find(t2) != wstring::npos) { o = L"-1"; return o; }
				else
				{
					o = o + t2 + L"=" + t1 + L";";
					while (s2.find(t2) != wstring::npos) s2.replace(s2.find(t2), t2.length(), t1);
					while (s1.find(t2) != wstring::npos) s1.replace(s1.find(t2), t2.length(), t1);

				}
			} else
			{
				//2 функции или константы
				o = L"-1"; return o;
			}
		} 

	}
	return o;
}
wstring getName(wstring s)
{
	int i = 0;
	if (s[0] == L'¬') i = 1;
	int j = i;
	while ((s[j] != '(') && (j < s.length()))
	{
		j++;
	}
	return s.substr(i, j - i);
}
wstring unireplace(wstring s, wstring rep)
{
	while (rep.find(L'=') != wstring::npos)
	{
		wstring repwhat = rep.substr(0, rep.find(L'=')), repto = rep.substr(rep.find(L'=') + 1, rep.find(L';') - rep.find(L'=')-1);
		while (s.find(repwhat) != wstring::npos) {
			s.replace(s.find(repwhat), repwhat.length(), repto);
		}
		rep = rep.substr(rep.find(L';') + 1, rep.length() - rep.find(L';') - 1);
	}
	return s;
}
wstring fact(wstring s)
{
	wstring s2 = s;
	wstring tmp[20];
	int cnt = 0;
	while (s2.find(L'∨') != wstring::npos)
	{
		tmp[cnt] = s2.substr(0, s2.find(L'∨'));
		s2 = s2.substr(s2.find(L'∨') + 1, s2.length() - s2.find(L'∨') -1);
		cnt++;
	}
	tmp[cnt] = s2;
	cnt++;
	for (int i = 0; i < cnt-1; i++)
		for (int j = i+1; j < cnt; j++)
		{
			if (getName(tmp[i]) == getName(tmp[j])) 
			{
				if ((tmp[j][0] == tmp[i][0]) && (tmp[i][0] == L'¬') || (tmp[j][0] != L'¬') && (tmp[i][0] != L'¬'))
				{//одинаковые термы
					if (unif(tmp[i], tmp[j]) != L"-1")
					{
						wstring temptemp = unif(tmp[i], tmp[j]);
						curUni += temptemp;
						for (int i = 0; i < cnt; i++)
						{
							tmp[i]=unireplace(tmp[i],temptemp);
						}
						tmp[j] = L"-1";
					}
				}
				else
				{//разные термы
					wstring tmp1 = (tmp[i][0] == L'¬') ? (tmp[i].substr(1)) : (tmp[i]);
					wstring tmp2 = (tmp[j][0] == L'¬') ? (tmp[j].substr(1)) : (tmp[j]);
					if (unif(tmp1,tmp2) != L"-1") tmp[j] = L"1";
				}
			}
		}
	s2 = L"";
	for (int i = 0; i < cnt; i++)
	{
		if (tmp[i] == L"1") {
			s2 = L"1"; break;
		} else
			if (tmp[i] == L"-1")
			{
				continue;
			}
			else
			{
				s2 += (s2 != L"") ? (L"∨" + tmp[i]) : (tmp[i]);
			}
	}
	return s2;
}
/*
C1:¬Loves(x1,f1(x1))∨Loves(f2(x1),x1)
C2:¬Animal(y1)∨¬Kills(x2,y1)∨¬Loves(z1,x2)
C3:¬Animal(y2)∨Loves(jack,y2)
C4:Cat(tuna)
C5:Kills(jack,tuna)∨Kills(curiosity2,tuna)
C6:¬Cat(x3)∨Animal(x3)
C7:¬Kills(curiosity2,tuna)
C8:Animal(f1(x1))∨Loves(f2(x1),x1)
Если существует переменная и терм, не содержащий эту переменную, то не унифицируемо
*/
wstring rez(wstring s1, wstring s2)
{
	wstring tmp1[20];
	int cnt1 = 0;
	while (s1.find(L'∨') != wstring::npos)
	{
		tmp1[cnt1] = s1.substr(0, s1.find(L'∨'));
		s1 = s1.substr(s1.find(L'∨') + 1, s1.length() - s1.find(L'∨') - 1);
		cnt1++;
	}
	tmp1[cnt1] = s1;
	cnt1++;
	wstring tmp2[20];
	int cnt2 = 0;
	while (s2.find(L'∨') != wstring::npos)
	{
		tmp2[cnt2] = s2.substr(0, s2.find(L'∨'));
		s2 = s2.substr(s2.find(L'∨') + 1, s2.length() - s2.find(L'∨') - 1);
		cnt2++;
	}
	tmp2[cnt2] = s2;
	cnt2++;
	bool f = 0;
	//сформировали множества высказываний tmp1 и tmp2
	for (int i = 0; i < cnt1; i++)
	{
		if (f) break;
		for (int j = 0; j < cnt2; j++)
		{
			if ((getName(tmp1[i]) == getName(tmp2[j])) && (tmp1[i] != L"1"))
			{
				if ((tmp1[i][0] != tmp2[j][0]) && ((tmp1[i][0] == L'¬') || (tmp2[j][0] == L'¬')))
				{
					wstring temp1 = (tmp1[i][0] == L'¬') ? (tmp1[i].substr(1)) : (tmp1[i]);
					wstring temp2 = (tmp2[j][0] == L'¬') ? (tmp2[j].substr(1)) : (tmp2[j]);
					if (unif(temp1, temp2) != L"-1")
					{//найдена резольвента
						f = 1;
						wstring temp = unif(temp1, temp2);
						tmp1[i] = L"-1";
						tmp2[j] = L"-1";
						//КУРЮНИ
						curUni = temp;
						for (int i1 = 0; i1 < cnt1; i1++)
						{
							tmp1[i1] = unireplace(tmp1[i1], temp);
						}
						for (int j1 = 0; j1 < cnt2; j1++)
						{
							tmp2[j1] = unireplace(tmp2[j1], temp);
						}
					}
				}
			}
		}
	}
	wstring out = L"";
	if (f)
	{
	
		for (int i = 0; i < cnt1; i++)
		{
			if (tmp1[i] == L"-1")
			{
				continue;
			}
			else
			{
				out += (out != L"") ? (L"∨" + tmp1[i]) : (tmp1[i]);
			}
		}
		for (int i = 0; i < cnt2; i++)
		{
			if (tmp2[i] == L"-1")
			{
				continue;
			}
			else
			{
				out += (out != L"") ? (L"∨" + tmp2[i]) : (tmp2[i]);
			}
		}
		if (out == L"") out = L"FALSE";
	}
	else
	{
		out = L"-1";
	}
	return out;
}
//¬Loves(x1,f1(x1))∨Loves(f2(x1),x1)
//¬Animal(y1)∨¬Kills(x2,y1)∨¬Loves(z1,x2)
int link[10000][2];
#define num(i) context.marshal_as<std::wstring>(Convert::ToString(i + 1))
wstring gout(int k)
{
	msclr::interop::marshal_context context;
	if (k < oldcou) return L"";
	return (gout(link[k][0]) + gout(link[k][1]) + L"[" + num(link[k][0]) + L"рез" + num(link[k][1]) + L"]" + L"C" + num(k) + L": " + cons[k] + L'\r\n');
}
bool thesame(wstring s1, wstring s2)
{
	if (s1 == s2) return 1;
	if (s1.length() != s2.length()) return 0;
	int orC2 = 0, orC1 = 0;
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == L'∨') orC1++;
		if (s2[i] == L'∨') orC2++;
	}
	if (orC1 != orC2) return 0; else
	{
		wstring tmp1[20];
		int cnt1 = 0;
		while (s1.find(L'∨') != wstring::npos)
		{
			tmp1[cnt1] = s1.substr(0, s1.find(L'∨'));
			s1 = s1.substr(s1.find(L'∨') + 1, s1.length() - s1.find(L'∨') - 1);
			cnt1++;
		}
		tmp1[cnt1] = s1;
		wstring s3 = s2;
		cnt1 ++ ;
		bool f = 1;
		for (int i = 0; i < cnt1; i++)
		{
			if (s3.find(tmp1[i]) == wstring::npos) {
				f = 0;
				
			}
			else
			{
				s3 = s3.replace(s3.find(tmp1[i]), tmp1[i].length(), L"");
			}
		}
		return f;
	}
}
wstring opStep5()
{
	oldcou = cou;
	wstring out;
	
	for (int i = 0; i < cou; i++)
	{
		cons[i] = fact(cons[i]);
	}
	bool kek = 0;
	for (int i = 0; (i < cou)&&(i<10000); i++)
	{//резольвенты
		for (int j = 0; (j < cou)&&(j<10000); j++)
		{
			if (i == j) j++;
			if (rez(cons[i], cons[j]) != L"-1")
			{
				link[cou][0] = i; link[cou][1] = j;
				cons[cou] = fact(rez(cons[i], cons[j])); 
				if (curUni != L"")
				{
					if (allUni.find(curUni) == wstring::npos) { allUni += curUni; }
					for (int z = 0; z < cou; z++)
					{
						cons[z] = unireplace(cons[z], curUni);
					}
				}
				bool tf = 0;
				for (int k = 0; k < cou; k++)
				{
					tf = thesame(cons[k], cons[cou]);
					if (tf) break;
				}
				if ((cons[cou] != L"1") && (tf == 0)) cou++;
				if (cons[cou - 1] == L"FALSE") kek = 1;
			}
			if (kek) break;
		}
		if (kek) break;
	}
	allUni;
	msclr::interop::marshal_context context;
	for (int i = 0; i < oldcou; i++)
	{
		out += L"C"; out += num(i); out += L':'; out += cons[i]; out += L'\r\n';
	}
	out += gout(cou-1);
	out += L"Унификатор: {" + allUni + L"}";
	return out;
}
wstring show()
{
	wstring out;
	msclr::interop::marshal_context context;
	for (int i = 0; i < cou; i++)
	{
		if (i >= oldcou) out += L"[" + num(link[i][0]) + L"рез" + num(link[i][1]) + L"]" + L"C" + num(i) + L": " + cons[i] + L'\r\n'; else
		{
			out += L"C"; out += num(i); out += L": "; out += cons[i]; out += L'\r\n';
		}
	}
	return out;
}
void clear()
{
	oldcou = 0;
	cou = 0;
}
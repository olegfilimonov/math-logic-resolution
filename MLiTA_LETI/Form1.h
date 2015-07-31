#pragma once
#include <string.h>
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <locale>
#include <codecvt>
#include <fstream>
#include <iostream>
#include <io.h>

int opAmount(std::string s);
void clear();
std::wstring opReplace(std::wstring inp);
std::wstring opStep1(std::wstring inp);
std::wstring opStep2(std::wstring inp);
std::wstring opStep3(std::wstring inp);
std::wstring opStep4();
std::wstring opStep5();
std::wstring opStep4_2(std::wstring inp);
void opStep4_1(std::wstring inp);
std::wstring unif(std::wstring s1, std::wstring s2);
std::wstring fact(std::wstring s);
std::wstring getName(std::wstring s);
std::wstring unireplace(std::wstring s, std::wstring rep);
std::wstring rez(std::wstring s1, std::wstring s2);
bool thesame(std::wstring s1, std::wstring s2);
std::wstring show();
namespace Template {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	bool f = 0;
	long k = 0;
	int all = 0;
	int curWin = 1;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox4;
	protected:
	private: System::Windows::Forms::RichTextBox^  showBox;
	private: System::Windows::Forms::LinkLabel^  linkLabel1;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox3;


	private: System::Windows::Forms::RichTextBox^  zak1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RichTextBox^  pos5;

	private: System::Windows::Forms::RichTextBox^  pos4;

	private: System::Windows::Forms::RichTextBox^  pos3;

	private: System::Windows::Forms::RichTextBox^  pos2;

	private: System::Windows::Forms::RichTextBox^  pos1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::RichTextBox^  step1Box;

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  step2Box;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::RichTextBox^  step3Box;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::RichTextBox^  step4Box;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Timer^  timer3;


	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::RichTextBox^  step5Box;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;



	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->step5Box = (gcnew System::Windows::Forms::RichTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->step4Box = (gcnew System::Windows::Forms::RichTextBox());
			this->step3Box = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->step2Box = (gcnew System::Windows::Forms::RichTextBox());
			this->step1Box = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->showBox = (gcnew System::Windows::Forms::RichTextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->zak1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pos5 = (gcnew System::Windows::Forms::RichTextBox());
			this->pos4 = (gcnew System::Windows::Forms::RichTextBox());
			this->pos3 = (gcnew System::Windows::Forms::RichTextBox());
			this->pos2 = (gcnew System::Windows::Forms::RichTextBox());
			this->pos1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Controls->Add(this->label10);
			this->groupBox4->Controls->Add(this->label11);
			this->groupBox4->Controls->Add(this->step5Box);
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->label3);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Controls->Add(this->step4Box);
			this->groupBox4->Controls->Add(this->step3Box);
			this->groupBox4->Controls->Add(this->label2);
			this->groupBox4->Controls->Add(this->step2Box);
			this->groupBox4->Controls->Add(this->step1Box);
			this->groupBox4->Controls->Add(this->button3);
			this->groupBox4->Controls->Add(this->button2);
			this->groupBox4->ForeColor = System::Drawing::SystemColors::Control;
			this->groupBox4->Location = System::Drawing::Point(610, 0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(892, 619);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Метод резолюции";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 8, System::Drawing::FontStyle::Bold));
			this->checkBox1->Location = System::Drawing::Point(123, 572);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(202, 21);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Показать все высказывания";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Visible = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(3850, 74);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(290, 20);
			this->label10->TabIndex = 8;
			this->label10->Text = L"Завершающий шаг: резольвенты";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(3926, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(169, 55);
			this->label11->TabIndex = 6;
			this->label11->Text = L"ШАГ 5";
			// 
			// step5Box
			// 
			this->step5Box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->step5Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->step5Box->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->step5Box->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->step5Box->Location = System::Drawing::Point(3565, 99);
			this->step5Box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->step5Box->Name = L"step5Box";
			this->step5Box->Size = System::Drawing::Size(870, 446);
			this->step5Box->TabIndex = 7;
			this->step5Box->Text = L"1\n2\n3\n4\n5\n6";
			this->step5Box->TextChanged += gcnew System::EventHandler(this, &Form1::step5Box_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(2997, 74);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(218, 20);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Получаем высказывания";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(2100, 74);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(239, 20);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Избавляемся от квантеров";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(1162, 74);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(348, 20);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Вносим отрицание в скобки и упрощаем";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(253, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(390, 20);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Избавляемся от эквиваленции и импликации";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(3038, 19);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(169, 55);
			this->label8->TabIndex = 0;
			this->label8->Text = L"ШАГ 4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(2140, 19);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(169, 55);
			this->label6->TabIndex = 0;
			this->label6->Text = L"ШАГ 3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(1252, 19);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(169, 55);
			this->label4->TabIndex = 0;
			this->label4->Text = L"ШАГ 2";
			// 
			// step4Box
			// 
			this->step4Box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->step4Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->step4Box->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 22.2F));
			this->step4Box->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->step4Box->Location = System::Drawing::Point(2677, 99);
			this->step4Box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->step4Box->Name = L"step4Box";
			this->step4Box->Size = System::Drawing::Size(870, 446);
			this->step4Box->TabIndex = 0;
			this->step4Box->Text = L"";
			this->step4Box->TextChanged += gcnew System::EventHandler(this, &Form1::step4Box_TextChanged);
			// 
			// step3Box
			// 
			this->step3Box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->step3Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->step3Box->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 22.2F));
			this->step3Box->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->step3Box->Location = System::Drawing::Point(1789, 99);
			this->step3Box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->step3Box->Name = L"step3Box";
			this->step3Box->Size = System::Drawing::Size(870, 446);
			this->step3Box->TabIndex = 0;
			this->step3Box->Text = L"";
			this->step3Box->TextChanged += gcnew System::EventHandler(this, &Form1::step3Box_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 28.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(364, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 55);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ШАГ 1";
			// 
			// step2Box
			// 
			this->step2Box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->step2Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->step2Box->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 22.2F));
			this->step2Box->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->step2Box->Location = System::Drawing::Point(901, 99);
			this->step2Box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->step2Box->Name = L"step2Box";
			this->step2Box->Size = System::Drawing::Size(870, 446);
			this->step2Box->TabIndex = 0;
			this->step2Box->Text = L"";
			this->step2Box->TextChanged += gcnew System::EventHandler(this, &Form1::step2Box_TextChanged);
			// 
			// step1Box
			// 
			this->step1Box->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->step1Box->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->step1Box->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->step1Box->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->step1Box->Location = System::Drawing::Point(13, 99);
			this->step1Box->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->step1Box->Name = L"step1Box";
			this->step1Box->Size = System::Drawing::Size(870, 446);
			this->step1Box->TabIndex = 0;
			this->step1Box->Text = L"";
			this->step1Box->TextChanged += gcnew System::EventHandler(this, &Form1::step1Box_TextChanged);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(13, 555);
			this->button3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 51);
			this->button3->TabIndex = 3;
			this->button3->Text = L"НАЗАД";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(780, 555);
			this->button2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(103, 51);
			this->button2->TabIndex = 3;
			this->button2->Text = L"ДАЛЕЕ";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(454, 623);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 9;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click_1);
			// 
			// showBox
			// 
			this->showBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->showBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->showBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->showBox->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->showBox->Location = System::Drawing::Point(14, 349);
			this->showBox->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->showBox->Name = L"showBox";
			this->showBox->Size = System::Drawing::Size(584, 197);
			this->showBox->TabIndex = 0;
			this->showBox->Text = L"";
			this->showBox->TextChanged += gcnew System::EventHandler(this, &Form1::showBox_TextChanged);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->LinkColor = System::Drawing::Color::White;
			this->linkLabel1->Location = System::Drawing::Point(451, 622);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(141, 17);
			this->linkLabel1->TabIndex = 5;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Закрыть окно ввода";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Blue;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->showBox);
			this->groupBox1->Controls->Add(this->linkLabel1);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button6);
			this->groupBox1->Controls->Add(this->button5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(-1, -1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(612, 620);
			this->groupBox1->TabIndex = 8;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Входные данные";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(6, 327);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 17);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Исходное выражение";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->groupBox3->Controls->Add(this->zak1);
			this->groupBox3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox3->Location = System::Drawing::Point(0, 247);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(612, 77);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Заключение";
			// 
			// zak1
			// 
			this->zak1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->zak1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->zak1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->zak1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->zak1->Location = System::Drawing::Point(15, 25);
			this->zak1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->zak1->Multiline = false;
			this->zak1->Name = L"zak1";
			this->zak1->Size = System::Drawing::Size(583, 35);
			this->zak1->TabIndex = 0;
			this->zak1->Text = L"";
			this->zak1->TextChanged += gcnew System::EventHandler(this, &Form1::zak1_TextChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->groupBox2->Controls->Add(this->pos5);
			this->groupBox2->Controls->Add(this->pos4);
			this->groupBox2->Controls->Add(this->pos3);
			this->groupBox2->Controls->Add(this->pos2);
			this->groupBox2->Controls->Add(this->pos1);
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(612, 248);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Посылы";
			// 
			// pos5
			// 
			this->pos5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->pos5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pos5->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pos5->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->pos5->Location = System::Drawing::Point(12, 200);
			this->pos5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pos5->Multiline = false;
			this->pos5->Name = L"pos5";
			this->pos5->Size = System::Drawing::Size(586, 35);
			this->pos5->TabIndex = 0;
			this->pos5->Text = L"";
			this->pos5->TextChanged += gcnew System::EventHandler(this, &Form1::pos5_TextChanged);
			// 
			// pos4
			// 
			this->pos4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->pos4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pos4->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pos4->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->pos4->Location = System::Drawing::Point(12, 155);
			this->pos4->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pos4->Multiline = false;
			this->pos4->Name = L"pos4";
			this->pos4->Size = System::Drawing::Size(586, 35);
			this->pos4->TabIndex = 0;
			this->pos4->Text = L"";
			this->pos4->TextChanged += gcnew System::EventHandler(this, &Form1::pos4_TextChanged);
			// 
			// pos3
			// 
			this->pos3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->pos3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pos3->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pos3->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->pos3->Location = System::Drawing::Point(12, 110);
			this->pos3->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pos3->Multiline = false;
			this->pos3->Name = L"pos3";
			this->pos3->Size = System::Drawing::Size(586, 35);
			this->pos3->TabIndex = 0;
			this->pos3->Text = L"";
			this->pos3->TextChanged += gcnew System::EventHandler(this, &Form1::pos3_TextChanged);
			// 
			// pos2
			// 
			this->pos2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->pos2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pos2->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pos2->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->pos2->Location = System::Drawing::Point(12, 65);
			this->pos2->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pos2->Multiline = false;
			this->pos2->Name = L"pos2";
			this->pos2->Size = System::Drawing::Size(586, 35);
			this->pos2->TabIndex = 0;
			this->pos2->Text = L"";
			this->pos2->TextChanged += gcnew System::EventHandler(this, &Form1::pos2_TextChanged);
			// 
			// pos1
			// 
			this->pos1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(95)), static_cast<System::Int32>(static_cast<System::Byte>(95)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->pos1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pos1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pos1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->pos1->Location = System::Drawing::Point(12, 20);
			this->pos1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pos1->Multiline = false;
			this->pos1->Name = L"pos1";
			this->pos1->Size = System::Drawing::Size(586, 35);
			this->pos1->TabIndex = 0;
			this->pos1->Text = L"";
			this->pos1->TextChanged += gcnew System::EventHandler(this, &Form1::pos1_TextChanged);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri Light", 7));
			this->button7->Location = System::Drawing::Point(15, 584);
			this->button7->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 24);
			this->button7->TabIndex = 3;
			this->button7->Text = L"ЗАГРУЗИТЬ";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri Light", 7));
			this->button6->Location = System::Drawing::Point(15, 556);
			this->button6->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 24);
			this->button6->TabIndex = 3;
			this->button6->Text = L"СОХРАНИТЬ";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri Light", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(478, 556);
			this->button5->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 51);
			this->button5->TabIndex = 3;
			this->button5->Text = L"ОЧИСТИТЬ";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(144, 556);
			this->button1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(326, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ПРИМЕНИТЬ МЕТОД РЕЗОЛЮЦИИ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click_1);
			// 
			// timer1
			// 
			this->timer1->Interval = 30;
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 20;
			this->timer2->Tick += gcnew System::EventHandler(this, &Form1::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 20;
			this->timer3->Tick += gcnew System::EventHandler(this, &Form1::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &Form1::timer4_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 617);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Метод резолюции";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
#define toChar(s) (char*)(void*)Marshal::StringToHGlobalAnsi(s)
#define debug(s) MessageBox::Show(Convert::ToString(s));
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		// ∧ ∨ = → ∃
	} 
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{

	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
	}
private: System::Void showBox_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	msclr::interop::marshal_context context;
	int k = showBox->SelectionStart;
	int dif = showBox->Text->Length;
	std::wstring hi = context.marshal_as<std::wstring>(showBox->Text);
	showBox->Text = gcnew String(((opReplace(hi)).c_str()));
	dif -= showBox->Text->Length;
	showBox->SelectionStart = k - dif;
}
private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	if (f) this->Width -= k; else this->Width += k;
	all += k;
	k -= 2;
	const int off = 668;
	if (all >= off)
	{
		if (f) this->Width += all-off; else this->Width -= all-off;
		all = 0;
		timer1->Enabled = 0;
		f = !f;
	}
	
}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
{
	k = 55;
	timer1->Enabled = true;
}
private: System::Void pos1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	msclr::interop::marshal_context context;
	int k = pos1->SelectionStart;
	int dif = pos1->Text->Length;
	std::wstring hi = context.marshal_as<std::wstring>(pos1->Text);
	pos1->Text = gcnew String(((opReplace(hi)).c_str()));
	dif -= pos1->Text->Length;
	pos1->SelectionStart = k - dif;
	makeshift();
}
private: System::Void richTextBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void linkLabel1_LinkClicked_1(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) 
{

}
private: System::Void pos2_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	
	int k = pos2->SelectionStart;
	int dif = pos2->Text->Length;
	msclr::interop::marshal_context context;
	std::wstring hi = context.marshal_as<std::wstring>(pos2->Text);
	pos2->Text = gcnew String(((opReplace(hi)).c_str()));
	dif -= pos2->Text->Length;
	pos2->SelectionStart = k - dif;
	makeshift();
}
private: System::Void pos3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	int k = pos3->SelectionStart;
	int dif = pos3->Text->Length;
	std::wstring hi = context.marshal_as<std::wstring>(pos3->Text);
	pos3->Text = gcnew String(((opReplace(hi)).c_str()));
	dif -= pos3->Text->Length;
	pos3->SelectionStart = k - dif;
	makeshift();
}
private: System::Void pos4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	int k = pos4->SelectionStart;
	int dif = pos4->Text->Length;
	std::wstring hi = context.marshal_as<std::wstring>(pos4->Text);
	pos4->Text = gcnew String(((opReplace(hi)).c_str()));
	dif -= pos4->Text->Length;
	pos4->SelectionStart = k - dif;
	makeshift();
}
private: System::Void pos5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	msclr::interop::marshal_context context;
	int k = pos5->SelectionStart;
	int dif = pos5->Text->Length;
	std::wstring hi = context.marshal_as<std::wstring>(pos5->Text);
	pos5->Text = gcnew String(((opReplace(hi)).c_str()));
	dif -= pos5->Text->Length;
	pos5->SelectionStart = k - dif;
	makeshift();
}
private: System::Void zak1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		msclr::interop::marshal_context context;
		int k = zak1->SelectionStart;
		int dif = zak1->Text->Length;
		std::wstring hi = context.marshal_as<std::wstring>(zak1->Text);
		zak1->Text = gcnew String(((opReplace(hi)).c_str()));
		dif -= zak1->Text->Length;
		zak1->SelectionStart = k - dif;
		makeshift();
	}
void makeshift()
{
	showBox->Text = "[" + ((pos1->Text != "") ? (pos1->Text + "]") : "") +
		((pos2->Text != "") ? (L"∧[" + pos2->Text + "]") : "") +
		((pos3->Text != "") ? (L"∧[" + pos3->Text + "]") : "") +
		((pos4->Text != "") ? (L"∧[" + pos4->Text + "]") : "") +
		((pos5->Text != "") ? (L"∧[" + pos5->Text + "]") : "") +
		L"∧¬[" + zak1->Text + "]";
}
//КНОПКА ГОУ
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) 
{
	msclr::interop::marshal_context context;
	std::wstring hi = context.marshal_as<std::wstring>(showBox->Text);
	String^ s = gcnew String(opStep1(hi).c_str());
	while (s->IndexOf(L"∧[") > 0)
	{
		s = s->Replace(L"∧[", L"∧\r\n(");
	}
	while (s->IndexOf(L"∧¬[") > 0)
	{
		s = s->Replace(L"∧¬[", L"∧\r\n¬(");
	}
	while (s->IndexOf(L"]") > 0)
	{
		s = s->Replace(L"]", L")");
	}
	while (s->IndexOf(L"[") >= 0)
	{
		s = s->Replace(L"[", L"(");
	}
	step1Box->Text = s;
	hi = context.marshal_as<std::wstring>(step1Box->Text);
	step2Box->Text = gcnew String(opStep2(hi).c_str());
	hi = opStep2(hi);
	step3Box->Text = gcnew String(opStep3(hi).c_str());
	hi = opStep3(hi);
	opStep4_1(hi);
	//∃x∀y∃z∀t(¬(¬(P(z)∨Q(f(y)))∨R(x,t)))
	step4Box->Text = gcnew String(opStep4().c_str());
	step5Box->Text = gcnew String(opStep5().c_str());
	//showBox->Text = Convert::ToString(this->Height); ¬(∀y(¬P(y)∨Q(x,y)))
	//step1Box->Text = Convert::ToString(this->Height);

	//TODO void reset(); <= обнулить cons и прочее
	k = 55;
	timer1->Enabled = true;
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (curWin == 4) checkBox1->Visible = 1; else checkBox1->Visible = 0;
	if (curWin < 5)
	{
		k = 55;
		timer2->Enabled = 1;
		curWin++;
	}

}
		 void move(int k)
		 {
			 step1Box->Location = Point(step1Box->Location.X+k, step1Box->Location.Y);
			 step2Box->Location = Point(step2Box->Location.X + k, step1Box->Location.Y);
			 step3Box->Location = Point(step3Box->Location.X + k, step1Box->Location.Y);
			 step4Box->Location = Point(step4Box->Location.X + k, step1Box->Location.Y);
			 step5Box->Location = Point(step5Box->Location.X + k, step1Box->Location.Y);
			 label2->Location = Point(label2->Location.X + k, label2->Location.Y);
			 label3->Location = Point(label3->Location.X + k, label3->Location.Y);
			 label4->Location = Point(label4->Location.X + k, label4->Location.Y);
			 label5->Location = Point(label5->Location.X + k, label5->Location.Y);
			 label6->Location = Point(label6->Location.X + k, label6->Location.Y);
			 label7->Location = Point(label7->Location.X + k, label7->Location.Y);
			 label8->Location = Point(label8->Location.X + k, label8->Location.Y);
			 label9->Location = Point(label9->Location.X + k, label9->Location.Y);
			 label10->Location = Point(label10->Location.X + k, label10->Location.Y);
			 label11->Location = Point(label11->Location.X + k, label11->Location.Y);
		 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	move(-k);
	all += k;
	k -= 2;
	const int off = 666;
	if (all >= off)
	{
		move(all-off);		
		all = 0;
		timer2->Enabled = 0;
	}
}

private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (curWin == 4) checkBox1->Visible = 1; else checkBox1->Visible = 0;
	if (curWin > 1)
	{
		k = 55;
		timer3->Enabled = 1;
		curWin--;
	}

}
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) 
{
	move(k);
	all += k;	k -= 2;
	const int off = 666;
	if (all >= off)
	{
		move(off-all);
		all = 0;
		timer3->Enabled = 0;
	}
}

private: System::Void step1Box_TextChanged(System::Object^  sender, System::EventArgs^  e) 
{
	int k = 20;
	for (int i = 0; i < step1Box->Text->Length; i++)
	{
		if ((step1Box->Text[i] <= '9') && (step1Box->Text[i] >= '0'))
		{
			step1Box->SelectionStart = i;
			step1Box->SelectionLength = 1; //End of first word
			step1Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10));
		}
		else
		{
			if ((step1Box->Text[i] == '(') && (k>14)) k -= 2;
			if (step1Box->Text[i] == ')') k += 2;
			step1Box->SelectionStart = i;
			step1Box->SelectionLength = 1; //End of first word
			step1Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", k));

		}
	}
}
private: System::Void step2Box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int k = 20;
	for (int i = 0; i < step2Box->Text->Length; i++)
	{
		if ((step2Box->Text[i] <= '9') && (step2Box->Text[i] >= '0'))
		{
			step2Box->SelectionStart = i;
			step2Box->SelectionLength = 1; //End of first word
			step2Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10));
		}
		else
		{
			if ((step2Box->Text[i] == '(') && (k>14)) k -= 3;
			if (step2Box->Text[i] == ')') k += 3;
			step2Box->SelectionStart = i;
			step2Box->SelectionLength = 1; //End of first word
			step2Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", k));

		}
	}
}
private: System::Void step3Box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int k = 20;
	for (int i = 0; i < step3Box->Text->Length; i++)
	{
		if ((step3Box->Text[i] <= '9') && (step3Box->Text[i] >= '0'))
		{
			step3Box->SelectionStart = i;
			step3Box->SelectionLength = 1; //End of first word
			step3Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10));
		}
		else
		{
			if ((step3Box->Text[i] == '(')&&(k>14)) k -= 2;
			if (step3Box->Text[i] == ')') k += 2;
				step3Box->SelectionStart = i;
				step3Box->SelectionLength = 1; //End of first word
				step3Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", k));
		
		}
	}
}
private: System::Void step4Box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int k = 20;
	for (int i = 0; i < step4Box->Text->Length; i++)
	{
		if ((step4Box->Text[i] <= '9') && (step4Box->Text[i] >= '0'))
		{
			step4Box->SelectionStart = i;
			step4Box->SelectionLength = 1; //End of first word
			step4Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10));
		}
		else
		{
			if ((step4Box->Text[i] == '(') && (k>14)) k -= 2;
			if (step4Box->Text[i] == ')') k += 2;
			step4Box->SelectionStart = i;
			step4Box->SelectionLength = 1; //End of first word
			step4Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", k));

		}
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	this->label7->Location = System::Drawing::Point(label7->Location.X+2 , 74);
	showBox->Text = Convert::ToString(label7->Location.X);
}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
msclr::interop::marshal_context context;
	std::wstring hi = context.marshal_as<std::wstring>(showBox->Text);
	std::wstring hi2 = context.marshal_as<std::wstring>(zak1->Text);
	//MessageBox::Show(gcnew String(fact(hi).c_str()));
	MessageBox::Show(Convert::ToString(thesame(hi,hi2)));
	//MessageBox::Show(gcnew String(unireplace(L"Loves(x1,y1,f(x1,y1))", L"x1=c;").c_str()));
}
private: System::Void step5Box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	int k = 16;
	for (int i = 0; i < step5Box->Text->Length; i++)
	{
		if ((step5Box->Text[i] <= '9') && (step5Box->Text[i] >= '0'))
		{
			step5Box->SelectionStart = i;
			step5Box->SelectionLength = 1; //End of first word
			step5Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10));
		}
		else
		{
			if ((step5Box->Text[i] == '(') && (k>14)) k -= 2;
			if (step5Box->Text[i] == ')') k += 2;
			if ((step5Box->Text[i] == '[') && (k>14)) k =8;
			step5Box->SelectionStart = i;
			step5Box->SelectionLength = 1; //End of first word
			step5Box->SelectionFont = (gcnew System::Drawing::Font(L"Arial Unicode MS", k));
			if ((step5Box->Text[i] == ']')) k = 18;

		}
	}
}
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) 
{
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) 
{
	if(checkBox1->Checked) step5Box->Text = gcnew String(show().c_str());
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	clear();
	step1Box->Text = "";
	step2Box->Text = "";
	step3Box->Text = "";
	step4Box->Text = "";
	step5Box->Text = "";
	zak1->Text = "";
	pos1->Text = "";
	pos2->Text = "";
	pos3->Text = "";
	pos4->Text = "";
	pos5->Text = "";
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) 
{
	saveFileDialog1->ShowDialog();
	String^ s = saveFileDialog1->FileName;
	String^ s2;
	s2 = pos1->Text + "/" + pos2->Text + "/" + pos3->Text + "/" + pos4->Text + "/" + pos5->Text + ";" + zak1->Text;
	msclr::interop::marshal_context context;
	const std::locale utf8_locale = std::locale(std::locale(), new std::codecvt_utf8<wchar_t>());
	std::wofstream file(context.marshal_as<std::wstring>(s));
	file.imbue(utf8_locale);
	file << context.marshal_as<std::wstring>(s2);
	file.close();
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
{
	openFileDialog1->ShowDialog();
	msclr::interop::marshal_context context;
	const std::locale utf8_locale = std::locale(std::locale(), new std::codecvt_utf8<wchar_t>());
	String^ s = openFileDialog1->FileName;
	std::wfstream file(context.marshal_as<std::wstring>(s),std::ios::in);
	file.imbue(utf8_locale);
	std::wstring s2;
	file >> s2;//5;zak
	pos1->Text = gcnew String((s2.substr(0,s2.find(L'/'))).c_str());
	s2 = s2.substr(s2.find(L'/')+1);
	pos2->Text = gcnew String((s2.substr(0, s2.find(L'/'))).c_str());
	s2 = s2.substr(s2.find(L'/') + 1);
	pos3->Text = gcnew String((s2.substr(0, s2.find(L'/'))).c_str());
	s2 = s2.substr(s2.find(L'/') + 1);
	pos4->Text = gcnew String((s2.substr(0, s2.find(L'/'))).c_str());
	s2 = s2.substr(s2.find(L'/') + 1);
	pos5->Text = gcnew String((s2.substr(0, s2.find(L';'))).c_str());
	s2 = s2.substr(s2.find(L';') + 1);
	zak1->Text = gcnew String(s2.c_str());
	file.close();
}
};
}


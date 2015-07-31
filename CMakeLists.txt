cmake_minimum_required(VERSION 3.2)
project(____)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    MLiTA_LETI/rapidxml-1.13/rapidxml.hpp
    MLiTA_LETI/rapidxml-1.13/rapidxml_iterators.hpp
    MLiTA_LETI/rapidxml-1.13/rapidxml_print.hpp
    MLiTA_LETI/rapidxml-1.13/rapidxml_utils.hpp
    MLiTA_LETI/Wolfram/WAEngine.cpp
    MLiTA_LETI/Wolfram/WAEngine.h
    MLiTA_LETI/Wolfram/WAImage.cpp
    MLiTA_LETI/Wolfram/WAImage.h
    MLiTA_LETI/Wolfram/WAPod.cpp
    MLiTA_LETI/Wolfram/WAPod.h
    MLiTA_LETI/Wolfram/WAPodState.cpp
    MLiTA_LETI/Wolfram/WAPodState.h
    MLiTA_LETI/Wolfram/WAQuery.cpp
    MLiTA_LETI/Wolfram/WAQuery.h
    MLiTA_LETI/Wolfram/WASubpod.cpp
    MLiTA_LETI/Wolfram/WASubpod.h
    MLiTA_LETI/Alphabet.h
    MLiTA_LETI/AssemblyInfo.cpp
    MLiTA_LETI/Form1.h
    MLiTA_LETI/resource.h
    MLiTA_LETI/Semantics.cpp
    MLiTA_LETI/stdafx.cpp
    MLiTA_LETI/stdafx.h
    MLiTA_LETI/Template.cpp)

add_executable(____ ${SOURCE_FILES})
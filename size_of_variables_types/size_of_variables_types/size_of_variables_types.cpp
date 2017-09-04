// size_of_variables_types.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdint>

int main()
{
	/* // Learning the size allocated for the different variable types
	std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << std::endl;
	std::cout << "char:\t\t" << sizeof(char) << " bytes" << std::endl;
	std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << std::endl;
	std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << std::endl; // C++11, may not be supported by your compiler
	std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << std::endl; // C++11, may not be supported by your compiler
	std::cout << "short:\t\t" << sizeof(short) << " bytes" << std::endl;
	std::cout << "int:\t\t" << sizeof(int) << " bytes" << std::endl;
	std::cout << "long:\t\t" << sizeof(long) << " bytes" << std::endl;
	std::cout << "long long:\t" << sizeof(long long) << " bytes" << std::endl; // C++11, may not be supported by your compiler
	std::cout << "float:\t\t" << sizeof(float) << " bytes" << std::endl;
	std::cout << "double:\t\t" << sizeof(double) << " bytes" << std::endl;
	std::cout << "long double:\t" << sizeof(long double) << " bytes" << std::endl;
	*/

	/* What happens when a variable overflow
	unsigned short x = 65535; // largest 16-bit unsigned value possible
	std::cout << "x was: " << x << std::endl;
	x = x + 1; // 65536 is out of our range -- we get overflow because x can't hold 17 bits
	std::cout << "x is now: " << x << std::endl;
	*/

	std::int16_t x{ 65 };
	std::int8_t i{ 65 };
	std::cout << x << " , " << i << std::endl;
	
	
	
	return 0;

}
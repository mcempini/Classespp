// literals.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "constants.h"

int main()
{
	/*
	double dValue = .100000000000000;
	float fValue = .100000000000000f;
	std::cout << std::setprecision(17);
	std::cout << dValue << std::endl;
	std::cout << fValue << std::endl;

	int x_dec = 12;
	int x_oct = 012;
	int x_hex = 0x12;
	std::cout << "'12' in octal means " << x_oct << " in decimal\n";
	std::cout << "'12' in hex means " << x_hex << "in decimal\n";

	char char_dec = 97;
	char char_oct = '\97';
	char char_hex = '\x97';
	std::cout << "97(10) is ASCII character " << char_dec << ", 97(8) is " << char_oct
		<< ", 97(16) is " << char_hex << "\n";
	*/

	/*
	// Using #define for symbolic constants. Often used in older programs
#define MAX_STUDENTS_PER_CLASS 30 // preprocessor will replace the purple string with the yellow one, whenever
	int numClassrooms;
	std::cout << "Number of classrooms? ";
	std::cin >> numClassrooms;
	int max_students = numClassrooms * MAX_STUDENTS_PER_CLASS;
	std::cout << "Max students number is " << max_students << std::endl;
	// However, as a cons, the MAX_STUDENTS_PER_CLASS will show up in the debugger, instead of 30
	// More importantly, the #defined constants lives only inside its *.cpp, then vanishes and must be redefined
	*/



	return 0;
}


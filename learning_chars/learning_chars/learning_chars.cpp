// learning_chars.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdint>


int main()
{
	bool cont(true);

	/*// Exploring ASCII table
	do{
		std::cout << "Input a keyboard character: ";
		char ch;
		std::cin >> ch;
		std::cout << "\'" << ch << "\'" << " has ASCII code " << static_cast<int>(ch) << std::endl;

		std::cout << "Do you want to continue (0/1)? ";
		std::cin >> cont;
	} while (cont);
	*/

	do{
		std::cout << "Input an integer number (b/w 0 and 255): ";
		unsigned long identifier;
		std::cin >> identifier;

		char ch(identifier);
		
		std::cout << identifier << " is ASCII symbol \'" << ch << "\'" << std::endl;

		std::cout << "Do you want to continue (0/1)? ";
		std::cin >> cont;
	} while (cont);

	return 0;
}


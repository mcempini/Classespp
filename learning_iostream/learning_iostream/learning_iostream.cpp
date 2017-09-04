// learning_iostream.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int x = 4;
	std::cout << "x is equal to: " << x << std::endl << "New line is coming" << std::endl;

	std::cout << "Enter a number: ";
	std::cin >> x;
	std::cout << "You entered: " << x << std::endl;

	return 0;
}
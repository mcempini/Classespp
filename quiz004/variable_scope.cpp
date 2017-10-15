// quiz004.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	int valueMin; // global scope
	int valueMax; // global scope

	std::cout << "Enter an integer value: ";
	std::cin >> valueMin;
	std::cout << "Enter a bigger integer value: ";
	std::cin >> valueMax;

	if (valueMin > valueMax)
	{
		std::cout << "Swapping values..\n";
		int valueTemp(valueMin); // local scope
		valueMin = valueMax;
		valueMax = valueTemp;
	} // valueTemp is destroyed here

	std::cout << "The largest value is " << valueMax << "\n";
	std::cout << "The smallest is " << valueMin << "\n";
	
	return 0;
}


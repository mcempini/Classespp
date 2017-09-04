#include "stdafx.h"
#include <iostream>
#include <string>

int readNumber(std::string scope)
{
	int x;
	std::cout << scope;
	std::cin >> x;
	return x;
}

void writeAnswer(int result)
{
	std::cout << "The result is: " << result << std::endl;
}
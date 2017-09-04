// learning_floats_doubles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


int main()
{
	std::cout << std::setprecision(16);
	float fValue(3.3333333333333333333333333333333333333f);
	std::cout << fValue << std::endl;
	double dValue(3.3333333333333333333333333333333333333);
	std::cout << dValue << std::endl;
	
	return 0;
}


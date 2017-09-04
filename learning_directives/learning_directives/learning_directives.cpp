// learning_directives.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <iostream>
#include "square.h"

int main()
{
	std::cout << "a square has " << getSquareSides() << " sides" << std::endl;
	std::cout << "a square of length 5 has perimeter length " << getSquarePerimeter(5) << std::endl;
	return 0;
}


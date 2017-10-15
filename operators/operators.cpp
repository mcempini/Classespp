// operators.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int x(0);
	int y(x); // two equal integers, starting from 0
	std::cout << "Pre-increment: " << ++x << " , post-increment: " << y++ << "\n";
	std::cout << "New values: " << x << " , " << y << "\n"; // Both have been incremented, but the return value differs

	return 0;
}


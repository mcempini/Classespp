// quiz002.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "constants.h"
#include <iomanip>

// Best practice: each function does 1 and only 1 thing
double getInitialHeight()
{
	double height_0;
	std::cout << "Enter starting height for the grave [meters]: ";
	std::cin >> height_0;
	return height_0;
}

double currentHeight(double time, double height_0)
{
	double height = height_0 - 0.5*myConstants::g*time*time;
	if (height < 0)
	{
		height = 0;
	}
	return height;

}

void printHeight(double time, double height)
{
	if (height > 0)
	{
		std::cout << "At " << time << " seconds, the grave is at " << height << " meters.\n";
	}
	else
	{
		std::cout << "At " << time << " seconds, the grave is on the ground.\n";
	}
		
}

void calculateAndPrintHeight(double time, double height_0)
{
	double height = currentHeight(time, height_0);
	printHeight(time, height);
}

int main()
{
	double height_0 = getInitialHeight();
	std::cout << std::setprecision(4);
	
	calculateAndPrintHeight(0, height_0);
	calculateAndPrintHeight(1, height_0);
	calculateAndPrintHeight(2, height_0);
	calculateAndPrintHeight(3, height_0);
	calculateAndPrintHeight(4, height_0);
	calculateAndPrintHeight(5, height_0);
	
	return 0;
}


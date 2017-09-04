// learning_functions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

/*
// This is a function prototype, or function FORWARD DECLARATION
// Even if add() is defined in another file, the main.cpp will successfully compile and run
// Don't need to manually compile add.cpp, as it is already inside the project. But if you do not forward-declare it, it won't work
int add(int, int);
*/
// An alternative is to use a header file:

# include "add.h"

void printValues(int x1, int x2)
{
	std::cout << x1 << std::endl;
	std::cout << x2 << std::endl;
}

int multiply(int x1, int x2)
{
	return x1*x2;
}

int getValueFromUser()
{
	std::cout << "Enter an integer value: ";
	int x;
	std::cin >> x;

	return x;
}

int main()
{
	//Experiment with reusing functions
	int x = getValueFromUser();
	int y = getValueFromUser();
	std::cout << "Sum of entered values: " << x << " + " << y << " = " << add(x,y) << std::endl;
	
	
	/* // Caller passes arguments 6 and 7 as parameters to the function call
	printValues(6, 7);
	*/
	
	/*
	// This is not "nesting", it's just allowes since anytome a function is called, the caller only sees its returned value
	std::cout << add(4, 5) << std::endl; // within add(), x=4, y=5, so x+y=9
	std::cout << multiply(2, 3) << std::endl; // within multiply(), z=2, w=3, so z*w=6
	// We can pass the value of expressions
	std::cout << add(1 + 2, 3 * 4) << std::endl; // within add(), x=3, y=12, so x+y=15
	// We can pass the value of variables
	int a = 5;
	std::cout << add(a, a) << std::endl; // evaluates (5 + 5)
	// We can pass returned values, as long as they match the parameter types
	std::cout << add(1, multiply(2, 3)) << std::endl; // evaluates 1 + (2 * 3)
	std::cout << add(1, add(2, 3)) << std::endl; // evaluates 1 + (2 + 3)
	*/

	/*
	// Asking name and value of an user-defined variable
	std::cout << "Enter the name of your variable: ";
	std::string name;
	std::cin >> name; // alternatively, std::getline(std::cin, name);
	std::cout << "Enter the value of your variable: ";
	int value;
	std::cin >> value;
	std::cout << name << " = " << value << std::endl;
	*/

	return 0;
}


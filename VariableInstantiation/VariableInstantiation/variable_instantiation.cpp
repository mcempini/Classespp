// VariableInstantiation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

void doNothing(const int &x)
{
}

int main()
{
	int x; // variable defined w/o being initialized
	
	doNothing(x); // tricks the compiler: I'm suing the variable. It's just a placeholder
	// without the doNothing(), whatever use of x you attempt (e.g. any expression using x), compiler stops pointing out that
	// "error C4700: uninitialized local variable used"
	// Are functions the only objection to this behavior?

	std::cout << x << std::endl;;

	return 0;
}
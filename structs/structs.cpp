// structs.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

struct Employee
{
	short id;
	int age;
	double wage;
};

void printEmployee(Employee employee)
{
	std::cout << "Employer ID: " << employee.id << " , age: " << employee.age << " , wage: " << employee.wage << std::endl;
}

int main()
{
	Employee joe; // declaration with non-initialized fields
	// printEmployee(joe); // if uncommented, this will return an error "error C4700: uninitialized local variable 'joe' used"
	// field-by-flied initialization
	joe.id = 14;
	joe.age = 32;
	joe.wage = 24.15;
	printEmployee(joe);

	Employee frank {15, 28, 18.27};
	printEmployee(frank);

	int totalAge = joe.age + frank.age;
	
	// Frank got a promotion
	frank.wage += 2.50;

	// Today is Joe's birthday
	++joe.age; // use pre-increment to increment Joe's age by 1
	printEmployee(joe);
	printEmployee(frank);

	return 0;
}


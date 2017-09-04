// quiz001.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "io.h"

int main()
{
	int numberAddendums = readNumber("How many number do you need to add? ");
	int cnt = 0;
	int result = 0;
	do
	{
		result = result + readNumber("Enter the number to add: ");
		cnt++;
	} while (cnt < numberAddendums);
	writeAnswer(result);

	return 0;
}


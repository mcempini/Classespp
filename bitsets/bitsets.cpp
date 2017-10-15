// bitsets.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <bitset>
#include <iostream>


int main()
{
	// Bitset are an applications of bit flags: usefult for many objects with same set of properties to be toggled/verified
	std::bitset<8> bits(0xF); // 8 bits, starting with 0000'1111
	bits.set(5); // set 6th bit to 1			(0010'1111)
	bits.flip(6); // negate values in 7th bit	(0110'1111)
	bits.reset(0); // reset to 0 the 1st bit	(0110'1110)
	std::cout << "4th bit has value " << bits.test(3) << '\n';
	std::cout << "5th bit has value " << bits.test(4) << '\n';
	std::cout << "All the bits: " << bits << '\n';
	

	// Bitmasks: shortcuts to operates on multiple bits at once
	const unsigned int reds =		0xFF000000; // Rgb-alpha
	const unsigned int greens =		0x00FF0000; // rGb-alpha
	const unsigned int blues =		0x0000FF00; // rgB-alpha
	const unsigned int alphas =	0x000000FF; // rgb-ALPHA
	
	std::cout << "Enter a 32-bit RGB_ALpha code for a color, in hexadecimal (e.g. F79A03G1): ";
	unsigned int pixel;
	std::cin >> std::hex >> pixel; // std::hex allows the terminal to interpret the input as an hexdecimal

	unsigned char red = (pixel & reds) >> 24;
	unsigned char green = (pixel & greens) >> 16;
	unsigned char blue = (pixel & blues) >> 8;
	unsigned char alpha = (pixel & alphas);

	std::cout << "Your color contains:\n";
	std::cout << static_cast<int>(red) << " of 255 red\n";
	std::cout << static_cast<int>(green) << " of 255 green\n";
	std::cout << static_cast<int>(blue) << " of 255 blue\n";
	std::cout << static_cast<int>(alpha) << " of 255 alpha\n";


	return 0;
}


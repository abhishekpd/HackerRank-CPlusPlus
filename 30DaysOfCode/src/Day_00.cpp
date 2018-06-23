#include <iostream>
#include <limits>
#include "../header/Day_00.h"

void Day_0::HelloWorld()
{
	// Declare a variable named 'input_string' to hold our input.
	std::string input_string;

	// Read a full line of input from stdin (cin) and save it to our variable, input_string.
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Please enter the input string\t" << std::endl;
	std::getline(std::cin, input_string);

	// Print a string literal saying "Hello, World." to stdout using cout.
	std::cout << "Hello, World." << std::endl;
	// TODO: Write a line of code here that prints the contents of input_string to stdout.
	std::cout << input_string << std::endl;
}



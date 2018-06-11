#include "../header/Problmes_0-6.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <limits>

void CodeChallengesOf30Days::HelloWorld()
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

void CodeChallengesOf30Days::DataTypes()
{
		int i = 4;
	    double d = 4.0;
	    std::string s = "HackerRank ";
		int m_Int;
	    double m_Double;
	    std::string m_InpString;
	    std::cin >> m_Int;
	    std::cin >> m_Double;
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    std::getline(std::cin, m_InpString);

	    std::cout << (m_Int + i ) << std::endl;
	    std::cout << std::fixed << std::setprecision(1) << (m_Double + d ) << std::endl;
	    std::cout << (s + m_InpString) << std::endl;
}

void CodeChallengesOf30Days::Operators()
{
	double meal_cost;
	 std::cin >> meal_cost;
	 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	int tip_percent;
	std::cin >> tip_percent;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	 int tax_percent;
	 std::cin >> tax_percent;
	 std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	 float tip = meal_cost * (float)(tip_percent/(float)100);
	 float tax = meal_cost * (float)(tax_percent/(float)100);
	 double totalCost = meal_cost + tip + tax;

	 (totalCost  > ((long int)totalCost ) + .5)  ?( totalCost = (long int)totalCost +1 ): (totalCost = (long int)totalCost );

	 std::cout << "The total meal cost is " << totalCost  << " dollars."<< std::endl;

}


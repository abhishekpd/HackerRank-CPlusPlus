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

void CodeChallengesOf30Days::IntroToConditionalStatements()
{
    int N;
    std::cin >> N;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if(	N %2 == 1 )
    	std::cout << "Weird" << std::endl;
    else if( (N %2 == 0) && (N>=2 && N <= 5))
    	std::cout << "Not Weird" << std::endl;
    else if( (N %2 == 0) && (N>=6 && N <= 20))
        	std::cout << "Weird" << std::endl;
    else if( (N %2 == 0) && (N>20))
        	std::cout << "Not Weird" << std::endl;
}

CodeChallengesOf30Days::Person4::Person4(int initialAge){
        // Add some more code to run some checks on initialAge
		if(initialAge < 0)
		{
			std::cout << "Age is not valid, setting age to 0." << std::endl;
			this->age = 0;
		}
		else
			this->age =initialAge;
    }

 void CodeChallengesOf30Days::Person4::amIOld()
 {
        // Do some computations in here and print out the correct statement to the console
	 if(this->age < 13)
		 std::cout << "You are young." << std::endl;
	 else if (this->age >= 13 && this->age <18 )
		 std::cout << "You are a teenager." << std::endl;
	 else if (this->age >= 18)
		 std::cout << "You are old." << std::endl;
 }

 void CodeChallengesOf30Days::Person4::yearPasses()
 {
        // Increment the age of the person in here
	 this->age = this->age+1;
}

void CodeChallengesOf30Days::ClassesVsInstances()
{
	int t;
	int age;
	std::cin >> t;
	for(int i=0; i < t; i++) {
		std::cin >> age;
		Person4 p(age);
		p.amIOld();
		for(int j=0; j < 3; j++) {
			p.yearPasses();
		}
		p.amIOld();

		std::cout << '\n';
	}
}


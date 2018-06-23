#include <iostream>
#include <limits>

#include "../header/Day_03.h"

void Day_3::IntroToConditionalStatements()
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

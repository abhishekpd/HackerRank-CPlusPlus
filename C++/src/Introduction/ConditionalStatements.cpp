#include <iostream>
#include <limits>
#include "../../header/Introduction/ConditionalStatements.h"

void ConditionalStatements::ConditionalStatements()
{
	int n;
		std::cin >> n;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		if(n==1)
			std::cout << "one" <<std::endl;
		else if(n==2)
				std::cout << "two" <<std::endl;
		else if(n==3)
				std::cout << "three" <<std::endl;
		else if(n==4)
				std::cout << "four" <<std::endl;
		else if(n==5)
				std::cout << "five" <<std::endl;
		else if(n==6)
				std::cout << "six" <<std::endl;
		else if(n==7)
				std::cout << "seven" <<std::endl;
		else if(n==8)
				std::cout << "eight" <<std::endl;
		else if(n==9)
				std::cout << "nine" <<std::endl;
		else if(n > 9)
				std::cout << "Greater than 9" <<std::endl;
}

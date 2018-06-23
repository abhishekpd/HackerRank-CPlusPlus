#include <iostream>
#include <limits>

#include "../header/Day_05.h"

void Day_5::Loops()
{
	int n;
	std::cin >> n;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	for(int i=1;i<11;i++)
	{
		std::cout << n <<" x " <<  i <<  " = " << (n*i) << std::endl;
	}

}

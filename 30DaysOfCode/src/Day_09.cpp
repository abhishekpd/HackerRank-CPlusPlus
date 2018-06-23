#include <iostream>
#include <limits>
#include "../header/Day_09.h"

void Day_9::Recursion()
{
	int n;
	std::cout << "\nPlease input number for factorial\t";
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    int result = Day_9::RecursionFactorial(n);
    std::cout << result << "\n";

}

int Day_9::RecursionFactorial(int number)
{
	if(number >= 1)
		return (number  * Day_9::RecursionFactorial(number-1) ) ;
	else
		return 1;
}

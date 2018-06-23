#include <iostream>
#include <limits>
#include <string>

#include "../header/Day_02.h"

void Day_2::Operators()
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

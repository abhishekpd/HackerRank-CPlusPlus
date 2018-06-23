#include <iostream>
#include <string>
#include <limits>
#include <vector>

#include "../header/Day_06.h"

void Day_6::LetsReview()
{
	int n;
	std::vector<std::string> m_stringArray;
	std::cin >> n;


	for(int i=0;i<n;i++){
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> m_stringArray.at(i);
	}

	for(int i=0;i<n;i++){
		std::cout << m_stringArray.at(i);
	}
}

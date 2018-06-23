#include <iostream>
#include <limits>
#include <iomanip>

#include "../header/Day_01.h"

void Day_1::DataTypes()
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

#include "../../header/Introduction/BasicDataTypes.h"
#include <iostream>
#include <iomanip>

void BasicDataTypes::BasicDataTypes()
{
	int m_intInput;
	float m_floatInput;
	char m_CharInput;
	long m_longInput;
	double m_doubleInput;

	std::cout << "Please Input Integer, Long, Character, Float and Double Separated by space in mentioned order" << std::endl;
	std::cin >> m_intInput >> m_longInput >> m_CharInput >> m_floatInput >> m_doubleInput;

	std::cout << m_intInput << std::endl;
	std::cout << m_longInput << std::endl;
	std::cout << m_CharInput << std::endl;
	std::cout << std::fixed << std::setprecision(3) <<m_floatInput << std::endl;
	std::cout << std::fixed << std::setprecision(9) << m_doubleInput << std::endl;
}

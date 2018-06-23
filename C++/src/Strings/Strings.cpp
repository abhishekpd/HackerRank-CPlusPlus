#include <iostream>
#include <string>
#include <limits>
#include "../../header/Strings/Strings.h"

void Strings::Strings()
{
	std::cout << "Please input 2 Strings separated by enter" << std::endl;
	std::string m_stringOne, m_stringTwo;
	std::cin >> m_stringOne;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin >> m_stringTwo;

	std::cout << "\nLength of First String -->   "<<  m_stringOne.length() <<  "\tLength of 2 String -->   " <<  m_stringTwo.length() <<std::endl;
	std::cout << "\nConcatenation of 2 Strings  -->   " <<  ( m_stringOne+m_stringTwo ) <<std::endl;

	char m_temp = m_stringOne[0];
	m_stringOne[0] = m_stringTwo[0];
	m_stringTwo[0] = m_temp;
	std::cout << "\nFirst String after swap -->   "<<  m_stringOne <<  "\tSecond String after swap -->   " <<  m_stringTwo <<std::endl;

}

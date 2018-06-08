#include "../header/Strings.h"
#include <iostream>
#include <string>
#include <limits>
#include <sstream>
#include <vector>

void StringChallenges::ProblemsMenu()
{
	int m_choice;
	system("clear");
	std::cout << "1) Strings" << std::endl;
	std::cout << "2) StringStream" << std::endl;
	std::cout << "3) String Parser" << std::endl;
	std::cin >> m_choice;

	switch(m_choice)
	{
		case 1:
			StringChallenges::Strings();
			break;
		case 2:
			StringChallenges::StringStream();
			break;
		case 3:
			StringChallenges::AttributeParser();
			break;
		default:
			break;
	}
}

void StringChallenges::Strings()
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


void StringChallenges::StringStream()
{
	std::string m_stringOne;
	std::vector<int> m_ResultVector;
	std::vector<int> m_RVector;
	std::cout << "Please input input Strings of number separated by comma " << std::endl;
	std::cin >> m_stringOne;
	int m_ParsedInteger;
	std::string m_PraseIntegerString;

	std::stringstream m_stringStream(m_stringOne);
	std::istringstream  m_parseString(m_stringOne);

	while(std::getline(m_parseString, m_PraseIntegerString, ',') )
	{
		m_RVector.push_back(std::stoi( m_PraseIntegerString ));
		 //std::cout << m_PraseIntegerString << '\n';
	}

	std::cout << "Resultant vector One is as follows"  << std::endl;
	for (unsigned long int i=0; i< m_RVector.size(); i++)
		std::cout << m_RVector.at(i)<<std::endl;

	while(m_stringStream >> m_ParsedInteger)
	{
		m_ResultVector.push_back(m_ParsedInteger);
		 if (m_stringStream.peek() == ',')
			 m_stringStream.ignore();
	}

	std::cout << "Resultant vector Two is as follows"  << std::endl;
	for (unsigned long int i=0; i< m_ResultVector.size(); i++)
		std::cout << m_ResultVector.at(i)<<std::endl;
}

void StringChallenges::AttributeParser()
{

}

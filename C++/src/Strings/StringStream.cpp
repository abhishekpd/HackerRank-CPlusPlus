#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <vector>
#include "../../header/Strings/StringStream.h"

void StringStream::StringStream()
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

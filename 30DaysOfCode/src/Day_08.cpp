#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <map>
#include "../header/Day_08.h"

void Day_8::DictionariesAndMaps()
{
	std::map<std::string,long int> m_TelephoneDictonary;
	std::string m_Name,m_InputString;
	long int m_Entries,m_Number;

	std::cout << "\nPlease enter no of entries in the Telephone Dictionary\t";
	std::cin >> m_Entries;
	for(int i=0;i<m_Entries;i++)
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> m_Name >> m_Number;
		m_TelephoneDictonary.insert( std::pair<std::string,long int>(m_Name,m_Number));
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::map<std::string,long int>::iterator m_iterator;
	std::cout << "\nPlease input key to search in the Telephone Dictionary\t";

	while((std::cin >> m_InputString))
	{
			m_iterator = m_TelephoneDictonary.find(m_InputString);
			if(m_iterator == m_TelephoneDictonary.end())
			{
				std::cout << "Not found" << std::endl;
			}
			else
			{
				std::cout << m_iterator->first << "=" << m_iterator->second << std::endl;
			}
	}
}


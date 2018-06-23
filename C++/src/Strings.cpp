#include "../header/Strings.h"
#include "../header/Strings/Strings.h"
#include "../header/Strings/StringStream.h"
#include <iostream>

void StringChallenges::ProblemsMenu()
{
	int m_choice;
	system("clear");
	std::cout << "1) Strings" << std::endl;
	std::cout << "2) StringStream" << std::endl;
	std::cout << "3) Attribute Parser" << std::endl;
	std::cin >> m_choice;

	switch(m_choice)
	{
		case 1:
			Strings::Strings();
			break;
		case 2:
			StringStream::StringStream();
			break;
		case 3:
			//Attribute Parser::AttributeParser();
			break;
		default:
			break;
	}
}


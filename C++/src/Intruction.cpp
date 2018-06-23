#include "../header/Introduction.h"
#include "../header/Introduction/Helloworld.h"
#include "../header/Introduction/InputandOutput.h"
#include "../header/Introduction/BasicDataTypes.h"
#include "../header/Introduction/ConditionalStatements.h"
#include "../header/Introduction/VariableSizedArrays.h"

#include <iostream>
#include <vector>
#include <iomanip>
#include <bits/stdc++.h>
#include <limits>

void IntroductionChallenges::ProblemsMenu()
{
	int m_choice;
	system("clear");
	std::cout << "1) Hello World" << std::endl;
	std::cout << "2) Input and Output" << std::endl;
	std::cout << "3) Basic Data Types" << std::endl;
	std::cout << "4) Conditional Statements" << std::endl;
	std::cout << "5) For Loop" << std::endl;
	std::cout << "6) Functions" << std::endl;
	std::cout << "7) Pointer" << std::endl;
	std::cout << "8) Array Introduction" << std::endl;
	std::cout << "9) Variable Sized Arrays" << std::endl;
	std::cout << "Input your choice\t";
	std::cin >> m_choice;

	switch(m_choice)
	{
		case 1:
			HelloWorld::HelloWorld();
			break;
		case 2:
			InputandOutput::InputandOutput();
			break;
		case 3:
			BasicDataTypes::BasicDataTypes();
			break;
		case 4:
			ConditionalStatements::ConditionalStatements();
			break;
		case 9:
			VariableSizedArrays::VariableSizedArrays();
			break;
		default:
			break;
	}
}

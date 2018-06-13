#include <iostream>
#include "../header/Problmes_0-6.h"
#include "../header/Problems_7-12.h"
#include "../header/Problems_13-18.h"
#include <cstdlib>
#include <limits>
#include <iomanip>

int main()
{
	int m_choice;
	do
	{
		std::cin.clear();
		std::cout << "\n 30 Days of Code Challenges" << std::endl;
		std::cout << "Day 0 : Hello, World" << std::endl;
		std::cout << "Day 1: Data Types" << std::endl;
		std::cout << "Day 2: Operators" << std::endl;
		std::cout << "Day 3: Intro to Conditional Statements" << std::endl;
		std::cout << "Day 4: Class vs. Instance" << std::endl;
		std::cout << "Day 5: Loops" << std::endl;
		std::cout << "Day 6: Let's Review" << std::endl;
		std::cout << "Day 7: Arrays" << std::endl;
		std::cout << "Day 8: Dictionaries and Maps" << std::endl;
		std::cout << "Day 9: Recursion" << std::endl;
		std::cout << "Day 10: Binary Numbers" << std::endl;
		std::cout << "Day 11: 2D Arrays" << std::endl;
		std::cout << "Day 12: Inheritance" << std::endl;
		std::cout << "Day 13: Abstract Classes" << std::endl;
		std::cout << "Day 14: Scope" << std::endl;
		std::cout << "Day 15: Linked List" << std::endl;
		std::cout << "Day 16: Exceptions - String to Integer" << std::endl;
		std::cout << "\nPlease enter the Input \t";
		std::cin >> m_choice;
		switch(m_choice)
		{
			case 0:
				CodeChallengesOf30Days::HelloWorld();
				break;
			case 1:
				CodeChallengesOf30Days::DataTypes();
				break;
			case 2:
				CodeChallengesOf30Days::Operators();
				break;
			case 3:
				CodeChallengesOf30Days::IntroToConditionalStatements();
				break;
			case 4:
				CodeChallengesOf30Days::ClassesVsInstances();
				break;
			case 5:
				CodeChallengesOf30Days::Loops();
				break;
			case 6:
				CodeChallengesOf30Days::LetsReview();
				break;
			case 7:
				CodeChallengesOf30Days::Arrays();
				break;
			case 8:
				CodeChallengesOf30Days::DictionariesAndMaps();
				break;
			case 9:
				CodeChallengesOf30Days::Recursion();
				break;
			case 10:
				CodeChallengesOf30Days::BinaryNumbers();
				break;
			case 11:
				CodeChallengesOf30Days::TwoDArrays();
				break;
			case 12:
				CodeChallengesOf30Days::Inheritance();
				break;
			case 13:
				CodeChallengesOf30Days::AbstractClasses();
				break;
			case 14:
				CodeChallengesOf30Days::Scope();
				break;
			case 15:
				CodeChallengesOf30Days::LinkedList();
				break;
			default:
				break;
		}
	}while(m_choice != 99);
	return 0;
}


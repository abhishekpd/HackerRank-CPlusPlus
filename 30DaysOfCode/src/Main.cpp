#include <iostream>

#include "../header/Problems_13-18.h"
#include <cstdlib>
#include <limits>
#include <iomanip>

#include "../header/Day_00.h"
#include "../header/Day_01.h"
#include "../header/Day_02.h"
#include "../header/Day_03.h"
#include "../header/Day_04.h"
#include "../header/Day_05.h"
#include "../header/Day_06.h"
#include "../header/Day_07.h"
#include "../header/Day_08.h"
#include "../header/Day_09.h"
#include "../header/Day_10.h"
#include "../header/Day_11.h"
#include "../header/Day_12.h"
#include "../header/Day_13.h"
#include "../header/Day_14.h"
#include "../header/Day_15.h"
#include "../header/Day_16.h"
#include "../header/Day_17.h"
#include "../header/Day_18.h"

int main()
{
	int m_choice;
	do
	{
		m_choice = -1,
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
		std::cout << "Day 17: More Exceptions" << std::endl;
		std::cout << "Day 18: Queues and Stacks" <<std::endl;
		std::cout << "\nPlease enter the Input \t";
		std::cin >> m_choice;
		switch(m_choice)
		{
			case 0:
				Day_0::HelloWorld();
				break;
			case 1:
				Day_1::DataTypes();
				break;
			case 2:
				Day_2::Operators();
				break;
			case 3:
				Day_3::IntroToConditionalStatements();
				break;
			case 4:
				Day_4::ClassesVsInstances();
				break;
			case 5:
				Day_5::Loops();
				break;
			case 6:
				Day_6::LetsReview();
				break;
			case 7:
				Day_7::Arrays();
				break;
			case 8:
				Day_8::DictionariesAndMaps();
				break;
			case 9:
				Day_9::Recursion();
				break;
			case 10:
				Day_10::BinaryNumbers();
				break;
			case 11:
				Day_11::TwoDArrays();
				break;
			case 12:
				Day_12::Inheritance();
				break;
			case 13:
				Day_13::AbstractClasses();
				break;
			case 14:
				Day_14::Scope();
				break;
			case 15:
				Day_15::LinkedList();
				break;
			case 16:
				Day_16::ExceptionsStringToInteger();
				break;
			case 17:
				Day_17::MoreExceptions();
				break;
			case 18:
				Day_18::QueuesandStacks();
				break;
			default:
				break;
		}
	}while(m_choice != 99);
	return 0;
}


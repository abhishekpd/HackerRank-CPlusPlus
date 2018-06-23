#include <stdio.h>
#include <iostream>
#include "../header/Introduction.h"
#include  "../header/Strings.h"
#include "../header/Classes.h"

int main()
{
	int choice=0;
	do
	{
		std::cout << ":: Welcome to C++ Practice ::" << std::endl;
		std::cout << "Choose one of the sub-domains" << std::endl;
		std::cout << "1) Introduction Challenges" << std::endl;
		std::cout << "2) Strings Challenges" << std::endl;
		std::cout << "3) Classes" << std::endl;
		std::cout << "4) STL" << std::endl;
		std::cout << "5) Inheritance" << std::endl;
		std::cout << "6) OtherConcepts" << std::endl;
		std::cout << "9) Exit" << std::endl;

		std::cin >> choice;

		switch(choice)
		{
			case 1:
				IntroductionChallenges::ProblemsMenu();
				break;
			case 2:
				StringChallenges::ProblemsMenu();
				break;
			case 3:
				ClassesChallenges::ProblemsMenu();
				break;
			default:
				std::cout << "\n:: Enter Correct Choice ::" << std::endl;
				break;
		}
	}while(choice != 9);

	return 0;
}

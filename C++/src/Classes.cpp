#include "../header/Classes.h"
#include "../header/Classes/ClassesandObjects.h"
#include "../header/Classes/Structs.h"
#include "../header/Classes/Class.h"
#include "../header/Classes/VirtualFunctions.h"
#include "../header/Classes/BoxIt.h"
#include "../header/Classes/InheritedCode.h"

void ClassesChallenges::ProblemsMenu()
{
	int m_choice;
	system("clear");
	std::cout << "1) Structs" << std::endl;
	std::cout << "2) Class" << std::endl;
	std::cout << "3) Classes and Objects" << std::endl;
	std::cout << "4) Virtual Functions" <<std::endl;
	std::cout << "5) Box It!" <<std::endl;
	std::cout << "6) Inherited Code" <<std::endl;
	std::cin >> m_choice;

	switch(m_choice)
	{
		case 1:
			Structs::Problem();
			break;
		case 2:
			Class::Problem();
			break;
		case 3:
			ClassesandObjects::Problem();
			break;
		case 4:
			VirtualFunctions::Problem();
			break;
		case 5:
			BoxIt::Problem();
			break;
		case 6:
			InheritedCode::Problem();
			break;
		default:
			break;
	}
}

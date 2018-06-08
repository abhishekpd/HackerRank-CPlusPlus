#include "../header/Introduction.h"
#include <iostream>
#include <vector>
#include <iomanip>

void IntroductionChallenges::ProblemsMenu()
{
	int m_choice;
	system("clear");
	std::cout << "1) Hello World" << std::endl;
	std::cout << "2) Input and Output" << std::endl;
	std::cout << "3) Basic Data Types" << std::endl;
	std::cout << "4) Conditional Statements" << std::endl;
	std::cout << "5) For Loop" << std::endl;
	std::cout << "9) For Loop" << std::endl;
	std::cout << "Input your choice\t";
	std::cin >> m_choice;

	switch(m_choice)
	{
		case 1:
			IntroductionChallenges::HelloWorld();
			break;
		case 2:
			IntroductionChallenges::InputandOutput();
			break;
		case 3:
			IntroductionChallenges::BasicDataTypes();
			break;
		case 9:
			IntroductionChallenges::VariableSizedArrays();
			break;
		default:
			break;
	}
}

void IntroductionChallenges::BasicDataTypes()
{
	int m_intInput;
	float m_floatInput;
	char m_CharInput;
	long m_longInput;
	double m_doubleInput;

	std::cout << "Please Input Integer, Long, Character, Float and Double Separated by space in mentioned order" << std::endl;
	std::cin >> m_intInput >> m_longInput >> m_CharInput >> m_floatInput >> m_doubleInput;

	std::cout << m_intInput << std::endl;
	std::cout << m_longInput << std::endl;
	std::cout << m_CharInput << std::endl;
	std::cout << std::fixed << std::setprecision(3) <<m_floatInput << std::endl;
	std::cout << std::fixed << std::setprecision(9) << m_doubleInput << std::endl;
}


void IntroductionChallenges::HelloWorld()
{
	std::cout << "Hello, World!" << std::endl;
}

void IntroductionChallenges::InputandOutput()
{
	long int m_one,m_two,m_three;
	std::cin >> m_one >> m_two >> m_three;
	std::cout << (m_one + m_two + m_three);
}

void IntroductionChallenges::VariableSizedArrays()
{
	long int m_NoOfVariableSizeArray,m_size,m_input;
	int m_NoOfQueries,arrayIndex,elementIndex;
	std::cout << "Please Input number of variable array size and number of Queries" << std::endl;
	std::cin >> m_NoOfVariableSizeArray >> m_NoOfQueries;
	std::cout << " No of variable size array -->   " << m_NoOfVariableSizeArray <<  "\tNumber of Queries -->  " << m_NoOfQueries << std::endl;

	std::vector<int> m_vector[m_NoOfVariableSizeArray];

	for(int i=0;i < m_NoOfVariableSizeArray;i++){
		std::cout << "Please Input variable first array size" << std::endl;
		std::cin >> m_size;
		for(int j=0;j<m_size;j++){
			std::cin >> m_input;
			m_vector[i].push_back(m_input);
		}
	}

	std::cout << "Start Queries" << std::endl;
	for(int k=0;k<m_NoOfQueries;k++){
		std::cout << "Please input array index and Element Index for Query" << std::endl;
		std::cin >> arrayIndex >> elementIndex;
		std::cout << "Element present in   " << arrayIndex <<  "array at location   " <<  elementIndex <<  " is  -->  " << m_vector[arrayIndex].at(elementIndex) << std::endl;
	}
}

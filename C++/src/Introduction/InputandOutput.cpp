#include "../../header/Introduction/InputandOutput.h"
#include <iostream>

void InputandOutput::InputandOutput()
{
	long int m_one,m_two,m_three;
	std::cin >> m_one >> m_two >> m_three;
	std::cout << (m_one + m_two + m_three);
}

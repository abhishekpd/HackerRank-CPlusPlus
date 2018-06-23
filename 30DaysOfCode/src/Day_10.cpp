#include "../header/Day_10.h"
#include <iostream>
#include <limits>
#include <vector>

void Day_10::BinaryNumbers()
{
	int n;
	int i,one_count,max_count;
	std::cout << "\nPlease input decimal number\t";
	std::cin >> n;
	std::vector<int> m_BinaryNumber;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	i=one_count=max_count=0;

	while(n>0)
	{
		m_BinaryNumber.push_back((n%2));
		n=n/2;
		i++;
	}

	for(unsigned int j=0; j < m_BinaryNumber.size();j++)
	{
		if(m_BinaryNumber.at(j) == 1)
		{
			one_count++;
			if(one_count > max_count)
				max_count = one_count;
		}
		else
			one_count =0;
	}
	std::cout << max_count << std::endl;
}

#include <iostream>
#include <vector>
#include <limits>
#include "../header/Day_11.h"

void Day_11::TwoDArrays()
{
	std::vector< std::vector<int> > m_HourGlassMatrix(6);
	int m_MaxSum, m_CurrentSum;
	m_MaxSum = m_CurrentSum= -1000;


	for (int i = 0; i < 6; i++) {
	    	m_HourGlassMatrix[i].resize(6);
	        for (int j = 0; j < 6; j++) {
	            std::cin >> m_HourGlassMatrix[i][j];
	        }
	        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	for(unsigned int i=0;i<(m_HourGlassMatrix.size()-2);i++)
	{
		for(unsigned int j=0;j<(m_HourGlassMatrix[i].size()-2);j++)
		{
			m_CurrentSum = (m_HourGlassMatrix[i][j] + m_HourGlassMatrix[i][j+1] +  m_HourGlassMatrix[i][j+2]) +
												(m_HourGlassMatrix[i+1][j+1]) +
												(m_HourGlassMatrix[i+2][j] + m_HourGlassMatrix[i+2][j+1] +  m_HourGlassMatrix[i+2][j+2]) ;

			(m_CurrentSum > m_MaxSum) ? (m_MaxSum = m_CurrentSum ) : (m_MaxSum);

		}
	}
	std::cout << "\nMax Sum in given 2D Array is -- \t"  <<  m_MaxSum<< std::endl;
}

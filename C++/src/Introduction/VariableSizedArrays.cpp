#include <iostream>
#include <vector>
#include <limits>
#include "../../header/Introduction/VariableSizedArrays.h"

void VariableSizedArrays::VariableSizedArrays()
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

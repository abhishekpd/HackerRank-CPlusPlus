#include "../header/Day_14.h"

Day_14::Difference::Difference(std::vector<int> m_elements)
	: elements(m_elements)
{
}
void Day_14::Difference::computeDifference()
{
	int m_SmallestElemet = this->elements.at(0);
	int m_HighestElemet = this->elements.at(0);
	for(unsigned int i=1;i<this->elements.size();i++)
	{
		if(this->elements.at(i) >= m_HighestElemet)
			m_HighestElemet = this->elements.at(i) ;

		if(this->elements.at(i) <= m_SmallestElemet)
			m_SmallestElemet = this->elements.at(i);
	}
	this->maximumDifference = m_HighestElemet -m_SmallestElemet ;
}




void Day_14::Scope()
{
	 int N;
	 std::cin >> N;
	 std::vector<int> a;

	 for (int i = 0; i < N; i++) {
	        int e;
	        std::cin >> e;
	        a.push_back(e);
	 }

	Difference d(a);
	d.computeDifference();
	std::cout << "Maximum Difference is  \t" ;
	std::cout << d.maximumDifference;
}

#ifndef HEADER_DAY_14_H_
#define HEADER_DAY_14_H_
#include <iostream>
#include <vector>

namespace Day_14{


class Difference {
    private:
    std::vector<int> elements;
  	public:
    Difference(std::vector<int> m_elements);
  	int maximumDifference;
  	void computeDifference();
};
	void Scope();
}



#endif /* HEADER_DAY_14_H_ */

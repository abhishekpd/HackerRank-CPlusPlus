#ifndef HEADER_DAY_17_H_
#define HEADER_DAY_17_H_

#include <iostream>
#include <exception>

namespace 	Day_17{

	class Calculator : public std::exception {
	public:
		int power(int n,int p);
	};

	class customException : public std::exception
	{
		virtual const char* what() const throw();
	};

	void MoreExceptions();
}



#endif /* HEADER_DAY_17_H_ */

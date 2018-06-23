#ifndef HEADER_CLASSES_INHERITEDCODE_H_
#define HEADER_CLASSES_INHERITEDCODE_H_
#include <iostream>
#include <string>
#include <sstream>
#include <exception>

namespace InheritedCode{
	class BadLengthException : public std::exception {
	public:
		BadLengthException(int length);
		virtual const int what();
		virtual ~BadLengthException();

private:
    int m_length=0;
};


	void Problem();
	bool checkUsername(std::string username);
}




#endif /* HEADER_CLASSES_INHERITEDCODE_H_ */

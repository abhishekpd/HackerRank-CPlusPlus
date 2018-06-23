#include "../../header/Classes/InheritedCode.h"

InheritedCode::BadLengthException::BadLengthException(int length) :
	m_length(length)
{
}

 const int InheritedCode::BadLengthException::what()
{
	return this->m_length;
}

InheritedCode::BadLengthException::~BadLengthException()
{
	std::cout << "\nObject destoyed" << std::endl;
}

bool InheritedCode::checkUsername(std::string username){
	bool isValid = true;
	int n = username.length();
	if(n < 5) {
		throw InheritedCode::BadLengthException(n);
	}
	for(int i = 0; i < n-1; i++) {
		if(username[i] == 'w' && username[i+1] == 'w') {
				isValid = false;
		}
	}
	return isValid;
}



void InheritedCode::Problem()
{
	int T;
	std::cin >> T;
	while(T--) {
			std::string username;
			std::cin >> username;
			try {
				bool isValid = checkUsername(username);
				if(isValid) {
					std::cout << "Valid" << '\n';
				} else {
					std::cout << "Invalid" << '\n';
				}
			} catch (BadLengthException e) {
				std::cout << "Too short: " << e.what() << '\n';
			}
		}
}

#include "../header/Day_16.h"



 void Day_16::ExceptionsStringToInteger()
 {
 	int n;
 	std::string S;
 	std::cin >> S;

 	try{
 		n=std::stoi(S);
 		std::cout << n;
 	}
 	catch(...){
 		std::cout << "Bad String";
 	}

 }


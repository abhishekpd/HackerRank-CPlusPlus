#pragma once
#ifndef HEADER_CLASSES_STRUCTS_H_
#define HEADER_CLASSES_STRUCTS_H_

#include <iostream>
#include <string>

namespace Structs
{
	typedef struct Student{
		int age;
		std::string first_name;
		std::string last_name;
		int standard;
	}Student;

	void Problem();
}




#endif /* HEADER_CLASSES_STRUCTS_H_ */

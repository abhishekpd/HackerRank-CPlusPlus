#pragma once
#ifndef HEADER_CLASSES_CLASS_H_
#define HEADER_CLASSES_CLASS_H_
#include <iostream>

namespace Class
{
	class Student
	{
	private:
		int m_age,m_standard;
		std::string m_first_name,m_last_name;
	public:
		void set_age(int age);
		void set_standard(int standard);
		void set_first_name(std::string firstName);
		void set_last_name(std::string lastName);

		int get_age();
		std::string get_last_name();
		std::string get_first_name();
		int get_standard();
		std::string to_string();
	};


	void Problem();
}




#endif /* HEADER_CLASSES_CLASS_H_ */

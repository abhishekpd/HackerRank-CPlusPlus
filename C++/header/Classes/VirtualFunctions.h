#pragma once
#ifndef HEADER_VIRTUALFUNCTIONS_H_
#define HEADER_VIRTUALFUNCTIONS_H_
#include <iostream>
#include <string>

namespace VirtualFunctions
{
	class Person{
		protected:
			int age;
			std::string name;
		public:
			virtual void getdata();
			virtual void putdata();

			virtual ~Person();
	};
	class Professor : public Person{

		private:
			int publication;
			int id;

		public:
			static int cur_id;
			virtual void getdata();
			virtual void putdata();
			virtual ~Professor();
	};

	class Student : public Person{

		private:
			int id;
			int marks[6];

		public:
			static int cur_id;
			virtual void getdata();
			virtual void putdata();
			virtual ~Student();
	};

	void Problem();
}

#endif /* HEADER_VIRTUALFUNCTIONS_H_ */

#pragma once
#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <stdio.h>
#include <string>
#include <sstream>

namespace ClassesChallenges
{
	void ProblemsMenu();
	void Structs();
	void Class();
};


typedef struct Student{
	int age;
	std::string first_name;
	std::string last_name;
	int standard;
}Student;

class Student2
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

class Person{
	public:
		int age;
		std::string name;
		virtual void getdata();
		virtual void putdata();

		virtual ~Person();
};
class Professor : public Person{

	private:
		static int cur_id;
		int publication;

	public:
		virtual ~Professor();
};

class StudentClass : public Person{

	private:
		static int cur_id;
		int marks[6];

	public:
		virtual ~StudentClass();
};

#endif

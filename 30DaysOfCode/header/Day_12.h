#ifndef HEADER_DAY_12_H_
#define HEADER_DAY_12_H_
#include <iostream>
#include <string>
#include <vector>

namespace Day_12{

class Person{
		protected:
			std::string firstName;
			std::string lastName;
			int id;
		public:
			Person(std::string firstName,std::string lastName, int identification);
			void printPerson();
	};

	class Student :  public Person{
		private:
			std::vector<int> testScores;
		public:
	        /*
	        *   Class Constructor
	        *
	        *   Parameters:
	        *   firstName - A string denoting the Person's first name.
	        *   lastName - A string denoting the Person's last name.
	        *   id - An integer denoting the Person's ID number.
	        *   scores - An array of integers denoting the Person's test scores.
	        */
	        // Write your constructor here

	        /*
	        *   Function Name: calculate
	        *   Return: A character denoting the grade.
	        */
	        // Write your function here
			Student(std::string firstName,std::string lastName, int identification,std::vector<int> scores);
			char calculate();
	};
	void Inheritance();
}

#endif /* HEADER_DAY_12_H_ */

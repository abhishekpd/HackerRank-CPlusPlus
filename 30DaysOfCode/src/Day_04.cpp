#include <iostream>
#include "../header/Day_04.h"

Day_4::Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
		if(initialAge < 0)
		{
			std::cout << "Age is not valid, setting age to 0." << std::endl;
			this->age = 0;
		}
		else
			this->age =initialAge;
    }

 void Day_4::Person::amIOld()
 {
        // Do some computations in here and print out the correct statement to the console
	 if(this->age < 13)
		 std::cout << "You are young." << std::endl;
	 else if (this->age >= 13 && this->age <18 )
		 std::cout << "You are a teenager." << std::endl;
	 else if (this->age >= 18)
		 std::cout << "You are old." << std::endl;
 }

 void Day_4::Person::yearPasses()
 {
        // Increment the age of the person in here
	 this->age = this->age+1;
}


void Day_4::ClassesVsInstances()
{
	int t;
	int age;
	std::cin >> t;
	for(int i=0; i < t; i++) {
		std::cin >> age;
		Person p(age);
		p.amIOld();
		for(int j=0; j < 3; j++) {
			p.yearPasses();
		}
		p.amIOld();

		std::cout << '\n';
	}
}

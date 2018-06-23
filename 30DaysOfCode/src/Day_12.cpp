#include "../header/Day_12.h"
#include <limits>

void Day_12::Inheritance()
{
	std::string firstName;
  	std::string lastName;
	int id;
  	int numScores;
  	std::cout << "\nPlease input first name, lastName, id and Number of Scores\t";
	std::cin >> firstName >> lastName >> id >> numScores;
  	std::vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	std::cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	std::cout << "Grade: " << s->calculate() << "\n";
}

Day_12::Person::Person(std::string firstName, std::string lastName, int identification)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = identification;
}

Day_12::Student::Student(std::string firstName, std::string lastName, int identification,std::vector<int> scores)
					: Person(firstName,lastName,identification), testScores(scores)
{

}

void Day_12::Person::printPerson()
{
	std::cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
}

char Day_12::Student::calculate()
{
	long int total = 0;
	for(unsigned int i = 0; i < this->testScores.size(); i++){
		total = total + testScores.at(i);
	}

	int average = total / testScores.size();

	if(average >= 90)
		return 'O';
	else if (average < 90 && average >= 80)
		return 'E';
	else if (average < 80 && average >= 70)
		return 'A';
	else if (average < 70 && average >= 55)
		return 'P';
	else if (average < 55 && average >= 40)
		return 'D';
	else if (average < 40)
		return 'T';
}



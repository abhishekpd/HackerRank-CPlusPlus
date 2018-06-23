#include <iostream>
#include "../../header/Classes/ClassesandObjects.h"

void ClassesandObjects::Student::input()
{
	for (int i=0;i<5;i++)
		std::cin >> this->m_scores[i];
}

int ClassesandObjects::Student::calculateTotalScore()
{
	int total = 0;
	for(int i=0;i<5;i++)
		total = total + this->m_scores[i];

	return total;
}

void ClassesandObjects::Problem()
{
	int n; // number of students
	std::cin >> n;
	Student *s = new Student[n]; // an array of n students

	for(int i = 0; i < n; i++){
		s[i].input();
	}

	// calculate kristen's score
	int kristen_score = s[0].calculateTotalScore();

	// determine how many students scored higher than kristen
	int count = 0;
	for(int i = 1; i < n; i++){
		int total = s[i].calculateTotalScore();
		if(total > kristen_score){
			count++;
		}
	}

	// print result
	std::cout << count;
}


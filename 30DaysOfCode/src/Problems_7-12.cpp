#include "../header/Problems_7-12.h"
#include <iostream>
#include <vector>
#include <map>
#include <limits>
#include <string>
#include <algorithm>


std::vector<std::string> CodeChallengesOf30Days::split_string(std::string input_string) {
    std::string::iterator new_end = std::unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    std::vector<std::string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != std::string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, std::min(pos, input_string.length()) - i + 1));

    return splits;
}


void CodeChallengesOf30Days::Arrays()
{
	int n;
	std::cin >> n;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	std::string arr_temp_temp;
	std::getline(std::cin, arr_temp_temp);

	std::vector<std::string> arr_temp = CodeChallengesOf30Days::split_string(arr_temp_temp);

	std::vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		int arr_item = stoi(arr_temp[i]);
		arr[i] = arr_item;
	}

	for(int j=arr.size();j>0;j--)
		std::cout << arr.at(j-1) << " ";
}
void CodeChallengesOf30Days::DictionariesAndMaps()
{
	std::map<std::string,long int> m_TelephoneDictonary;
	std::string m_Name,m_InputString;
	long int m_Entries,m_Number;

	std::cout << "\nPlease enter no of entries in the Telephone Dictionary\t";
	std::cin >> m_Entries;
	for(int i=0;i<m_Entries;i++)
	{
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cin >> m_Name >> m_Number;
		m_TelephoneDictonary.insert( std::pair<std::string,long int>(m_Name,m_Number));
	}

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::map<std::string,long int>::iterator m_iterator;
	std::cout << "\nPlease input key to search in the Telephone Dictionary\t";

	while((std::cin >> m_InputString))
	{
			m_iterator = m_TelephoneDictonary.find(m_InputString);
			if(m_iterator == m_TelephoneDictonary.end())
			{
				std::cout << "Not found" << std::endl;
			}
			else
			{
				std::cout << m_iterator->first << "=" << m_iterator->second << std::endl;
			}
	}
}

void CodeChallengesOf30Days::Recursion()
{
	int n;
	std::cout << "\nPlease input number for factorial\t";
    std::cin >> n;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    int result = CodeChallengesOf30Days::RecursionFactorial(n);
    std::cout << result << "\n";

}

int CodeChallengesOf30Days::RecursionFactorial(int number)
{
	if(number >= 1)
		return (number  * CodeChallengesOf30Days::RecursionFactorial(number-1) ) ;
	else
		return 1;
}

void CodeChallengesOf30Days::BinaryNumbers()
{
	int n;
	int i,one_count,max_count;
	std::cout << "\nPlease input decimal number\t";
	std::cin >> n;
	std::vector<int> m_BinaryNumber;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	i=one_count=max_count=0;

	while(n>0)
	{
		m_BinaryNumber.push_back((n%2));
		n=n/2;
		i++;
	}

	for(unsigned int j=0; j < m_BinaryNumber.size();j++)
	{
		if(m_BinaryNumber.at(j) == 1)
		{
			one_count++;
			if(one_count > max_count)
				max_count = one_count;
		}
		else
			one_count =0;
	}
	std::cout << max_count << std::endl;
}

void CodeChallengesOf30Days::TwoDArrays()
{
	std::vector<std::vector<int>> m_HourGlassMatrix(6);
	int m_MaxSum, m_CurrentSum;
	m_MaxSum = m_CurrentSum= -1000;


	for (int i = 0; i < 6; i++) {
	    	m_HourGlassMatrix[i].resize(6);
	        for (int j = 0; j < 6; j++) {
	            std::cin >> m_HourGlassMatrix[i][j];
	        }
	        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}

	for(unsigned int i=0;i<(m_HourGlassMatrix.size()-2);i++)
	{
		for(unsigned int j=0;j<(m_HourGlassMatrix[i].size()-2);j++)
		{
			m_CurrentSum = (m_HourGlassMatrix[i][j] + m_HourGlassMatrix[i][j+1] +  m_HourGlassMatrix[i][j+2]) +
												(m_HourGlassMatrix[i+1][j+1]) +
												(m_HourGlassMatrix[i+2][j] + m_HourGlassMatrix[i+2][j+1] +  m_HourGlassMatrix[i+2][j+2]) ;

			(m_CurrentSum > m_MaxSum) ? (m_MaxSum = m_CurrentSum ) : (m_MaxSum);

		}
	}
	std::cout << "\nMax Sum in given 2D Array is -- \t"  <<  m_MaxSum<< std::endl;
}

void CodeChallengesOf30Days::Inheritance()
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

CodeChallengesOf30Days::Person::Person(std::string firstName, std::string lastName, int identification)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->id = identification;
}

CodeChallengesOf30Days::Student::Student(std::string firstName, std::string lastName, int identification,std::vector<int> scores)
					: Person(firstName,lastName,identification), testScores(scores)
{

}

void CodeChallengesOf30Days::Person::printPerson()
{
	std::cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
}

char CodeChallengesOf30Days::Student::calculate()
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



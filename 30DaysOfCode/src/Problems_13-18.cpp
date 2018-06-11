#include "../header/Problems_13-18.h"
#include <limits>
#include <iostream>
#include <vector>

CodeChallengesOf30Days::MyBook::MyBook(std::string m_title,std::string m_author,int price) :
									Book(m_title,m_author), m_price(price)
{
}

void CodeChallengesOf30Days::MyBook::display()
{
	std::cout << "Title: " << this->title << std::endl;
	std::cout << "Author: " << this->author << std::endl;
	std::cout << "Price: " << this->m_price << std::endl;
}

CodeChallengesOf30Days::MyBook::~MyBook()
{
	std::cout << "Object Virtual Destructor for my Book" << std::endl;
}

CodeChallengesOf30Days::Book::~Book()
{
	std::cout << "Object Virtual Destructor for Book" << std::endl;
}

void CodeChallengesOf30Days::AbstractClasses()
{
		std::string title,author;
	    int price;
	    std::cout << "\nPlease enter title, author and price \t";
	    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    std::getline(std::cin,title);
	    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    std::getline(std::cin,author);
	    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	    std::cin>>price;
	    MyBook novel(title,author,price);
	    novel.display();
}

CodeChallengesOf30Days::Difference::Difference(std::vector<int> m_elements)
	: elements(m_elements)
{
}
void CodeChallengesOf30Days::Difference::computeDifference()
{
	std::cout << "Array Elements are \t";
	for(int i=0;i<this->elements.size();i++)
		std::cout << "\t" << this->elements.at(i);

	this->maximumDifference = 200;
}

void CodeChallengesOf30Days::Scope()
{
	 int N;
	 std::cin >> N;
	 std::vector<int> a;

	 for (int i = 0; i < N; i++) {
	        int e;
	        std::cin >> e;
	        a.push_back(e);
	 }

	Difference d(a);
	d.computeDifference();
	std::cout << "Maximum Difference is  \t" ;
	std::cout << d.maximumDifference;
}

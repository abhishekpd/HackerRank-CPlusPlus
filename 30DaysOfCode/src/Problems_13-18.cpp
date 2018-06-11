#include "../header/Problems_13-18.h"
#include <limits>
#include <iostream>

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

void CodeChallengesOf30Days::Scope()
{

}

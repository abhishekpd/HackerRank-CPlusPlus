#include "../header/Day_13.h"
#include <limits>


Day_13::MyBook::MyBook(std::string m_title,std::string m_author,int price) :
									Book(m_title,m_author), m_price(price)
{
}

void Day_13::MyBook::display()
{
	std::cout << "Title: " << this->title << std::endl;
	std::cout << "Author: " << this->author << std::endl;
	std::cout << "Price: " << this->m_price << std::endl;
}

Day_13::MyBook::~MyBook()
{
	std::cout << "Object Virtual Destructor for my Book" << std::endl;
}

Day_13::Book::~Book()
{
	std::cout << "Object Virtual Destructor for Book" << std::endl;
}

void Day_13::AbstractClasses()
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

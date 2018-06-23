#ifndef HEADER_DAY_13_H_
#define HEADER_DAY_13_H_
#include <iostream>
#include <string>

namespace Day_13{

class Book{
    	protected:
        	std::string title;
        	std::string author;
    public:
        	Book(std::string t,std::string a){
        	title=t;
        	author=a;
       }
        virtual void display()=0;
        virtual ~Book();
	};

	class MyBook : Book
	{
		private:
			int m_price;
		public :
			MyBook(std::string m_title,std::string m_author,int price);
			virtual void display();
			virtual ~MyBook();
	};

		void AbstractClasses();
}



#endif /* HEADER_DAY_13_H_ */

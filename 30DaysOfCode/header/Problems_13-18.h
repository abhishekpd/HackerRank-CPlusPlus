#pragma once
#ifndef HEADER_PROBLEMS_13_18_H_
#define HEADER_PROBLEMS_13_18_H_
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <limits>

namespace CodeChallengesOf30Days
{
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

	class Difference {
	    private:
	    std::vector<int> elements;
	  	public:
	    Difference(std::vector<int> m_elements);
	  	int maximumDifference;
	  	void computeDifference();
	};
	class Node
	{
	    public:
	        int data;
	        Node *next;
	        Node(int d);
	};
	class Solution{
	    public:
		 	 Node* insert(Node *head,int data);
			void display(Node *head);
	};

	void AbstractClasses();
	void Scope();
	void LinkedList();
}




#endif /* HEADER_PROBLEMS_13_18_H_ */

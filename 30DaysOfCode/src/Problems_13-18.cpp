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
	int m_SmallestElemet = this->elements.at(0);
	int m_HighestElemet = this->elements.at(0);
	for(unsigned int i=1;i<this->elements.size();i++)
	{
		if(this->elements.at(i) >= m_HighestElemet)
			m_HighestElemet = this->elements.at(i) ;

		if(this->elements.at(i) <= m_SmallestElemet)
			m_SmallestElemet = this->elements.at(i);
	}
	this->maximumDifference = m_HighestElemet -m_SmallestElemet ;
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


CodeChallengesOf30Days::Node::Node(int m_data)
			: data(m_data), next(nullptr)
{
}

CodeChallengesOf30Days::Node* CodeChallengesOf30Days::Solution::insert(CodeChallengesOf30Days::Node* m_head, int m_data)
{
	CodeChallengesOf30Days::Node* t_head;
	t_head = m_head;
	CodeChallengesOf30Days::Node *new_Node = new Node(m_data);
	if(t_head ==  nullptr)
	{
		t_head = new_Node;
		m_head = t_head;
	}
	else
	{
		  while(t_head->next != nullptr)
		  {
			  t_head=t_head->next;
		  }
		  t_head->next = new_Node;
	}
	return m_head;
}


void CodeChallengesOf30Days::Solution::display(Node *head)
{
	Node *start=head;
	while(start)
	{
	  std::cout<<start->data<<" ";
	  start=start->next;
	}
}

void CodeChallengesOf30Days::LinkedList()
{
	Node* head=NULL;
	Solution mylist;
	int T,data;
	std::cin>>T;
	while(T-->0){
		std::cin>>data;
		head=mylist.insert(head,data);
	}
	mylist.display(head);
}

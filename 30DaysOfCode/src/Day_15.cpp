#include <iostream>
#include <string>
#include <limits>
#include "../header/Day_15.h"

Day_15::Node::Node(int m_data)
			: data(m_data), next(nullptr)
{
}

Day_15::Node* Day_15::Solution::insert(Day_15::Node* m_head, int m_data)
{
	Day_15::Node* t_head;
	t_head = m_head;
	Day_15::Node *new_Node = new Node(m_data);
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


void Day_15::Solution::display(Node *head)
{
	Node *start=head;
	while(start)
	{
	  std::cout<<start->data<<" ";
	  start=start->next;
	}
}

void Day_15::LinkedList()
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

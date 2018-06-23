#ifndef HEADER_DAY_15_H_
#define HEADER_DAY_15_H_

namespace Day_15{

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

	void LinkedList();
}



#endif /* HEADER_DAY_15_H_ */

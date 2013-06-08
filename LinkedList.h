#pragma once

class LinkedList
{
	private:
		class Node
		{
			public:
				int data;
				Node * next;
		};
		typedef Node * nodeptr;
		int size;
		nodeptr first;

	public:
		//Constructor
		LinkedList();
		//Destructor
		~LinkedList();
		//Find if the list is empty
		bool empty() const;
		//Insert at the begining
		void addBeg(int val);
		//Delete a value
		void deleteElement(int val);
		//Display the elements
		void showlist() const;
};

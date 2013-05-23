#include <iostream>
#include "LinkedList.h"
using namespace std;


LinkedList::LinkedList()
{
	first = 0;
	size = 0;
}

LinkedList::~LinkedList()
{
	nodeptr ptr;
	ptr = first;
	while(ptr != 0)
	{
		nodeptr temp = ptr->next;
		delete ptr;
		ptr = temp;
	}
}

bool LinkedList::empty() const
{
	return (first == 0);
}

void LinkedList::addBeg(int val)
{
	nodeptr newptr;
	newptr = new Node;
	newptr->data = val;
	newptr->next = first;
	first = newptr;
}

void LinkedList::showlist() const
{
	nodeptr ptr;
	ptr = first;
	while (ptr != 0)
	{
		cout << ptr->data << " ";
		ptr = ptr->next;
	}
	cout << endl;
}

void LinkedList::deleteElement(int val)
{
	nodeptr ptr, prevptr;
	ptr = first;
	prevptr = 0;
	while( ptr != 0 )
	{
		if(ptr->data == val)
		{
			cout << ptr->data << " " << ptr->next << endl;
				if(prevptr != 0)
				{
				prevptr->next = ptr->next;
				delete ptr;
				ptr = 0;	
				}
				else
				{
					first = ptr->next;
					delete ptr;
					ptr = 0;
				}
		}
		else
		{
			prevptr = ptr;
			ptr = ptr->next;
		}
	}
}

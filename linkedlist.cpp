#include <iostream>
#include "LinkedList.h"
using namespace std;


LinkedList::LinkedList()
{
	first = 0;
	size = 0;
}


bool LinkedList::empty() const
{
	return (first == 0);
}



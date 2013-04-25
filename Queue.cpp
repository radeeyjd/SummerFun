#include <iostream>
#include <string>
#include "Queue.h"

using namespace std;

Queue::Queue()
{
	q_front = 0;
	q_end = 0;
	q_size = 0;
}

bool Queue::empty() const
{ 
	return (q_size == 0);
}

void Queue::addQ(queue_type q_item)
{
	int newend;
	newend = ( q_end + 1) % queue_Capacity;
	if( newend == q_front )
		cerr << "Queue is Full ";
	else
	{
	queue[q_end] = q_item;
	q_end = newend;
	q_size++;
	}
}

queue_type Queue::frontQ() const
{ 
	return queue[q_front];
}

void Queue::removeQ()
{
	if( q_size == 0)
		cerr << "Queue is empty";
	else
	{
		q_front = (q_front + 1) % queue_Capacity;
		q_size--;	
	}
}

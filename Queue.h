#pragma once

const int queue_Capacity = 100;
typedef int queue_type;

class Queue
{
	private:
		queue_type queue[queue_Capacity];
		int q_front
			,q_end
			,q_size;

	public:
		Queue();
		bool empty() const;	
		void addQ(queue_type q_item);
		queue_type frontQ() const;
		void removeQ();
};

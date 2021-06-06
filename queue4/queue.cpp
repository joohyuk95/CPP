#include <cassert>
#include "queue.h"

const int Queue::QUEUESIZE = 100;

Queue::Queue(int size)
: arr_(size), front_(0), rear_(0)
{

}

void Queue::push(int data)
{
	assert( !isFull());
	
	arr_[rear_] = data;
	++rear_;
}

int Queue::pop()
{
	assert( !isEmpty());
	
	int tmp = front_;
	++front_;
	
	return arr_[tmp];
}

bool Queue::isFull() const
{
	return (rear_ == arr_.size());
}

bool Queue::isEmpty() const
{
	return (front_ == rear_);
}

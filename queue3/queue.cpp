#include <cassert>
#include "queue.h"

const int Queue::QUEUESIZE = 100;

Queue::Queue(int size)
: pArr_(new int[size]), size_(size), front_(0), rear_(0)
{
	assert(this->pArr_ );
}

Queue::~Queue()
{
	delete [] this->pArr_;
}

void Queue::push(int data)
{
	assert( !isFull());
	
	this->pArr_[this->rear_] = data;
	++this->rear_;
}

int Queue::pop()
{
	assert( !isEmpty());
	
	int tmp = this->front_;
	++this->front_;
	
	return this->pArr_[tmp];
}

bool Queue::isFull() const
{
	return (this->rear_ == this->size_);
}

bool Queue::isEmpty() const
{
	return (this->front_ == this->rear_);
}

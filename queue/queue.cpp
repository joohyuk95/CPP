#include <cassert>
#include "queue.h"

Queue::Queue(int size)
{
	this->pArr = new int[size];
	assert(this->pArr );
	
	this->size = size;
	this->rear = 0;
	this->front = 0;
}

Queue::~Queue()
{
	delete [] this->pArr;
}

void Queue::push(int data)
{
	assert(this->rear != this->size);
	this->pArr[this->rear] = data;
	++this->rear;
}

int Queue::pop()
{
	assert(this->rear != 0);
	int tmp = this->front;
	++this->front;
	
	return this->pArr[tmp];
}

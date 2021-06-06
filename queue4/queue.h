#ifndef STACK_H
#define STACK_H
#include "array.h"

class Queue {
private:
	static const int QUEUESIZE;

	//int *pArr_;
	//int size_;
	Array arr_;
	int front_;
	int rear_;
	
	Queue(const Queue& rhs);
	Queue& operator=(const Queue& rhs);

public:
	explicit Queue(int size = QUEUESIZE);
	
	void push(int data);
	int pop();
	
	bool isFull() const;
	bool isEmpty() const;
};

#endif

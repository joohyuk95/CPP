#ifndef STACK_H
#define STACK_H
#include "array.h"

class Stack {
private:
	static const int STACKSIZE;

	//int *pArr_;
	//int size_;
	Array arr_;		// "has-a"
	int tos_;	

	Stack(const Stack& rhs);
	Stack operator=(const Stack& rhs);

public:
	// Stack* operator&();
	// const Stack* operator&() cosnt;
	
	//Stack();	default constructor is not generated because there is other constructor
	explicit Stack(int size = STACKSIZE);
	
	void push(int data);
	int pop();

	bool isFull() const;
	bool isEmpty() const;
};

#endif

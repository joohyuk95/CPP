#ifndef STACK_H
#define STACK_H

class Queue {
private:
	static const int QUEUESIZE;

	int *pArr_;
	int size_;
	int front_;
	int rear_;
	
	Queue(const Queue& rhs);
	Queue& operator=(const Queue& rhs);

public:
	explicit Queue(int size = QUEUESIZE);
	~Queue();
	
	void push(int data);
	int pop();
	
	bool isFull() const;
	bool isEmpty() const;
};

#endif

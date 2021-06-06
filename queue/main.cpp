#include <iostream>
#include "queue.h"

int main(void)
{
	Queue q1(10), q2(100);
	
	q1.push(100);
	q1.push(200);
	q1.push(300);
	
	q2.push(700);
	q2.push(800);
	q2.push(900);

	std::cout << "q1 1st pop() : " << q1.pop() << std::endl;
	std::cout << "q1 2nd pop() : " << q1.pop() << std::endl;
	std::cout << "q1 3rd pop() : " << q1.pop() << std::endl;
	
	std::cout << "q1 1st pop() : " << q2.pop() << std::endl;
	std::cout << "q2 2nd pop() : " << q2.pop() << std::endl;
	std::cout << "q2 3rd pop() : " << q2.pop() << std::endl;

	return 0;
}
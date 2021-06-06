#include <iostream>
#include "stack.h"

int main()
{
	Stack s1;		// Stack S1(100);
	Stack s2(10);		// Stack s2 = 10; x ---> explit
	//Stack s3(s2); this is not ordinary for stack
	//s1 = s2; same as copy constructor
	
	s1.push(100);
	s1.push(200);
	s1.push(300);
	
	while ( !s1.isEmpty()) {
		std::cout << "s1 pop() : " << s1.pop() << std::endl;
	}	
	return 0;
}

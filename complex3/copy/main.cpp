#include <iostream>
#include "complex.h"

int main()
{
	Complex c1;
	Complex c2(1.1, 2.2);
	
	Complex c3(c1);
	
	c2.operator=(c3);
	
	Complex c4;
	
	c4 = c3 = c2;
	
	++c4;
	c4++;


	return 0;
}

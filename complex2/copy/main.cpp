#include <iostream>
#include "complex.h"

int main()
{
	Complex c1;			// default constructor
	Complex c2(1.1);		// conversion constructor
	Complex c3(1.1, 2.2);
	
	Complex c4 = c3;		// copy constructor
	
	Complex c5;
	c1 = 3.0;
	
	c5 = c4 = c3; // daisy-chain
	
	Complex c6, c7;
	
	c6 = c1 + c3;
	c7 = c1 - c3;
	
	std::cout << "c1 : (" << c1.real() << ", " << c1.imag() << "i)" << std::endl;
	std::cout << "c2 : (" << c2.real() << ", " << c2.imag() << "i)" << std::endl;
	std::cout << "c3 : (" << c3.real() << ", " << c3.imag() << "i)" << std::endl;
	std::cout << "c4 : (" << c4.real() << ", " << c4.imag() << "i)" << std::endl;
	std::cout << "c5 : (" << c5.real() << ", " << c5.imag() << "i)" << std::endl;
	std::cout << "c6 : (" << c6.real() << ", " << c6.imag() << "i)" << std::endl;
	std::cout << "c7 : (" << c7.real() << ", " << c7.imag() << "i)" << std::endl;
	
	if (c1 == c3)
		std::cout << "c1 and c3 are equal" << std::endl;
	else
		std::cout << "c1 and c3 are not equal" << std::endl;
	

	return 0;
}

#include <iostream>

int main()
{
	std::cout << "hello, world" << std::endl;
	// compiler search global or local function is
	//std::cout << "hello, world";
	//std::cout.operator<<("hello, world");
	::operator<<(std::cout, "hello, world"); // in front of function name the symbol (::) means that this function is global function

	//std::cout << std:endl;
	std::cout.operator<<(std::endl);
	//operator<<(std::cout, std::endl);
	
	::operator<<(std::cout, "hello, world").operator<<(std::endl); // compiler change 5 line to this code
	
	return 0;
}

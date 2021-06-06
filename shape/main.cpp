#include <iostream>
#include <typeinfo>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"

void printArea(const Shape *ps)
{
	if (typeid(*ps) == typeid(Rectangle)) {// this is not function but operator	
		std::cout << "rectangle ";				// RTTI : RunTime Type Identification
		
		// Rectangle *pRec = (Rectangle *)ps;
		const Rectangle *pRec = dynamic_cast<const Rectangle *>(ps);		
			
	} else if (typeid(*ps) == typeid(Circle)) {
		std::cout << "circle ";
		
		// Rectangle *pCir = (Circle *)ps;
		const Circle *pCir = dynamic_cast<const Circle *>(ps);
		
	} else {// for expansion
		;
	}
		
	std::cout << "area: " << ps->area() << std::endl;
}

int main()
{
	// polymorphism
	Shape* shapes[5];
	shapes[0] = new Rectangle(50, 50, 100, 50);
	shapes[1] = new Rectangle(50, 100, 10, 30);
	shapes[2] = new Circle(50, 50, 3);
	shapes[3] = new Rectangle(100, 200, 50, 10);
	shapes[4] = new Circle(100, 100, 10);
	
	for (int i = 0; i < 5; ++i)
		printArea(shapes[i]);
	
	for (int i = 0; i < 5; ++i)
		delete shapes[i];
	
	return 0;
}

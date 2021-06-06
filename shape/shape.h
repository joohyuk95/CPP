#ifndef SHAPE_H
#define SHAPE_H

class Shape {			// Abstract Base Class (ABC)
//private:	
protected:
	int x_;
	int y_;
	
public:
	// Shape();						// cannot used, is not generated
	// Shape(const Shape& rhs);	// cannot used
	// Shape& operator=(const Shaep& rhs);
	// &
	
	Shape(int x, int y);	
	virtual ~Shape() {}	// function can be defined in class
	
	void move(int x, int y);
	//double area() const;
	virtual double area() const = 0; // pure virtual function
};

#endif

#include "rectangle.h"

Rectangle::Rectangle(int x, int y, int width, int height)
: Shape(x, y), width_(width), height_(height)	// initialization list only in constructor
{

}

double Rectangle::area() const
{
	return this->width_ * this->height_;
}

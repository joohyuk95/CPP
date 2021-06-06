#include <cassert>
#include "safeArray.h"

SafeArray::SafeArray(int size)
: Array(size)
{

}

SafeArray::SafeArray(const int *pArr, int size)
: Array(pArr, size)
{

}

SafeArray::SafeArray(const SafeArray& rhs)
: Array( (Array)rhs)	// slicing
{

}

SafeArray::~SafeArray()
{

}

SafeArray& SafeArray:: operator=(const SafeArray& rhs)
{
	return (SafeArray& )this->Array::operator=( (Array)rhs);
}

bool SafeArray::operator==(const SafeArray& rhs) const
{
	return this->Array::operator==( (Array)rhs);
}

int& SafeArray::operator[](int index)
{
	// +alpha : boudnary check!
	//assert(index >= 0 && index < oooooithis->Array::size());
	assert(index >= 0 && index < this->Array::size_);
	
	return this->Array::operator[](index);
}

const int& SafeArray::operator[](int index) const
{
	//assert(index >= 0 && index < this->Array::size());
	assert(index >= 0 && index < this->Array::size_);
	
	return this->Array::operator[](index);
}

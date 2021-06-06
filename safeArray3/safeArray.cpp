#include <cassert>
#include "safeArray.h"
#include "invalidIndex.h"

SafeArray::SafeArray(int size)
: Array(size)
{

}

SafeArray::SafeArray(const int *pArr, int size)
: Array(pArr, size)
{

}

SafeArray::SafeArray(const SafeArray& rhs)
: Array( static_cast<Array>(rhs))
{

}

SafeArray::~SafeArray()
{

}

SafeArray& SafeArray::operator=(const SafeArray& rhs)
{
	return static_cast<SafeArray& >(this->Array::operator=( static_cast<Array>(rhs)) );
}

bool SafeArray::operator==(const SafeArray& rhs) const
{
	return this->Array::operator==( static_cast<Array>(rhs));
}

int& SafeArray::operator[](int index)
{
	//assert(index >= 0 && index < this->Array::size_);
	if (index < 0 || index >= this->Array::size_)
		throw InvalidIndex(index);
	
	return this->Array::operator[](index);
}

const int& SafeArray::operator[](int index) const
{
	//assert(index >= 0 && index < this->Array::size_);
	if (index < 0 || index >= this->Array::size_)
		throw InvalidIndex(index);
	
	return this->Array::operator[](index);
}

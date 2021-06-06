#include <cassert>
#include "array.h"

const int ARRAYSIZE = 100;

Array::Array(int size)
: pArr_(new int[size]), size_(size) 
{
	assert(pArr_ );
}

Array::Array(int *pArr, int size)
: pArr_(new int[size]), size_(size)
{
	assert(pArr_ );
	for (int i = 0; i < size;++i)
		pArr_[i] = pArr[i];
}

Array::Array(const Array& rhs)
: pArr_(new int[rhs.size_]), size_(rhs.size_)
{
	assert(pArr_ );
	for (int i = 0; i < rhs.size_; ++i)
		pArr_[i] = rhs.pArr_[i];
}

Array::~Array()
{
	delete [] pArr_;
}

Array& operator=(const Array& rhs)
{
	if (this != &rhs) {
		for (int i = 0; i < rhs.size_; ++i)
			pArr_[i] = rhs.pArr_[i];
	
		size_ = rhs.size_;
	}
	return this;
}

bool operator==(const Array& rhs) const
{
	
}

int& operator[](int index)
{

}

const int& operator[](int index) const
{

}

int size() const
{

}

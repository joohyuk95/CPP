#include <cassert>
#include "array.h"

const int Array::ARRAYSIZE = 100; // type checking  //static member
/*
Array::Array()
{
	this->pArr_ = new int[100];
	assert(this-> pArr_ );
	this->size_ = 100;
}
*/
Array::Array(int size)
: pArr_(new int[size]), size_(size)			// constructor initialization list
{
	//this->pArr_ = new int[size];
	assert(this->pArr_ );
	//this->size_ = size;
}

Array::Array(const int *pArr, int size)
: pArr_(new int[size]), size_(size)
{
//	this->pArr_ = new int[size];
	assert(this->pArr_ );
	for (int i = 0; i < size; ++i)
		this->pArr_[i] = pArr[i];
	
//	this->size_ = size;
}

Array::Array(const Array& rhs)
: pArr_(new int[rhs.size_]), size_(rhs.size_)
{
//	this->pArr_ = new int[rhs.size_];
	assert(this->pArr_ );
	for (int i = 0; i < rhs.size_; ++i)
		this->pArr_[i] = rhs.pArr_[i];
	
//	this->size_ = rhs.size_;
}

Array::~Array()
{
	delete [] this->pArr_;

}

Array& Array::operator=(const Array& rhs)
{
	if (this != &rhs) {
		delete [] this->pArr_;
		this->pArr_ = new int[rhs.size_];
		assert(this->pArr_ );
		for (int i = 0; i < rhs.size_; ++i)
			this->pArr_[i] = rhs.pArr_[i];
		
		this->size_ = rhs.size_;
	}
	
	return *this;
}

bool Array::operator==(const Array& rhs) const
{
	if (this->size_ != rhs.size_)
		return false;
	
	int i;
	for (i = 0; i < this->size_; ++i) {
		if (this->pArr_[i] != rhs.pArr_[i])
			break;
	}
	
	return (i == this->size_);
}

int Array::size() const
{
	return this->size_;
}

int& Array::operator[](int index)
{
	return this->pArr_[index];
}

const int& Array::operator[](int index) const
{
	return this->pArr_[index];
}

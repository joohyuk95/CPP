#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"
// 'is a' ( SafeArray is a Array )
class SafeArray : public Array { // public inheritance, all member comes
private:

public:
	// SafeArray* operator&();
	// const SafeArray* operator&() const;

	//SafeArray();
	//explicit SafeArray(int size = SafeArray::Array::getArraySize() );
	explicit SafeArray(int size = SafeArray::Array::ARRAYSIZE);
	SafeArray(const int *pArr, int size);
	SafeArray(const SafeArray& rhs);
	virtual ~SafeArray();
	
	SafeArray& operator=(const SafeArray& rhs);
	bool operator==(const SafeArray& rhs) const;
	
	virtual int& operator[](int index);		// overriding (name, return type, param) is same
	virtual const int& operator[](int index) const;
};

#endif

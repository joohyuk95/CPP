#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
	int *pArr_;
	int size_;
	static const int ARRAYSIZE;
	
public:
	// Array() {}
	// Array(const Array& rhs)
	// ~Array()
	// Array& operator=(const Array& rhs)
	// Array* operator&()
	// const Array* opeartor&() const
	
	explicit Array(int size = Array::ARRAYSIZE);
	Array(int *pArr, int size);
	Array(const Array& rhs);
	~Array();
	
	Array& operator=(const Array& rhs);
	bool operator==(const Array& rhs) const;
	
	int& operator[](int index);
	const int& operator[](int index) const;
	
	int size() const;
};

#endif

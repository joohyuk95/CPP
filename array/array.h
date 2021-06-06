#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:	
	int *pArr_;

protected:
	static const int ARRAYSIZE;
	int size_;
	
public:
	static int getArraySize();
	
	//Array& operator=(const Array& rhs);
	//Array* operator&();
	//const Array* operator&() const;
	
	//Array();
	explicit Array(int size = Array::ARRAYSIZE); // prevent implicit type casting
	Array(const int *pArr, int size);
	Array(const Array& rhs);
	~Array();
	
	Array& operator=(const Array& rhs);
	
	bool operator==(const Array& rhs) const;
	
	int& operator[](int index); // to use l-value
	const int& operator[](int index) const; // no use l-value so const
	
	int size() const;
};

#endif

#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100

class Array {
private:
	static const int ARRAYSIZE;

	int *pArr_;
	int size_;
	
public:
	// Array();
	// Array(const Array& rhs);
	// ~Array();
	// Array& operator=(const Array& rhs);
	// Array* operator&();
	// const Array* operaotr&() const;
	
	//Array();
	explicit Array(int size = ARRAYSIZE);
	Array(const int *pArr, int size);
	Array(const Array& rhs);
	~Array();
	
	Array& operator=(const Array& rhs);
	
	bool operator==(const Array& rhs) const;
	
	int& operator[](int index); 		// if return used in left value this have to be variable
	const int& operator[](int index) const;
	
	int size() const;
	
};

#endif

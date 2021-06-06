#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double re;
	double im;
	
public:
	//Complex();	// default constructor
	//Complex(double re);		// conversion constructor
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex &rhs); // construct class with itself as argument (copy constructor)
	~Complex();

	Complex& operator=(const Complex &rhs);
	
	bool operator==(const Complex &rhs);

	Complex operator+(const Complex& rhs);
	Complex operator-(const Complex& rhs);

	void real(double re);
	void imag(double im);

	double real();
	double imag();
};

#endif

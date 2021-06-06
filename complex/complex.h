#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double re;	// real part
	double im;	// imaginary part
	
public:
	Complex();							// default constructor
	Complex(double re);					// conversion constructor
	Complex(double re, double im);	// ordinary constructor
	~Complex();							// destructor
	
	// set
	void real(double re);
	void imag(double im);
	
	// get
	double real();
	double imag();
};

#endif

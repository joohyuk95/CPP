#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double re;
	double im;

public:
	// Complex() {}
	// Complex(const Complex& rhs);
	// ~Complex() {}
	// Complex& operator=(const Complex& rhs);
	// Complex* operator&(const Complex& rhs);
	// const Complex* operator&(const Complex& rhs) const;
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex& rhs);
	~Complex();
	
	Complex& operator=(const Complex& rhs);
	
	bool operator==(const Complex& rhs) const;
	
	Complex operator+(const Complex& rhs) const;
	complex operator-(const Complex& rhs) const;
	
	void real(double re);
	void imag(double im);
	
	double real();
	double imag();
	
};

#endif

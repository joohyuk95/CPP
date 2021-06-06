#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private:
	int n;
	int d;

public:
	//Rational();
	//Rational(int num);
	Rational(int num = 0, int den = 1);
	~Rational();
	
	Rational &operator=(const Rational &rhs);
	bool operator==(const Rational &rhs);
	
	void num(int num);
	void den(int den);
	
	int num();
	int den();

};

#endif

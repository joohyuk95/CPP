#ifndef RATIONAL_H
#define RATIONAL_H

class Rational {
private:
	int n;
	int d;

public:
	Rational();
	Rational(int num);
	Rational(int num, int den);
	~Rational();
	
	void num(int num);
	void den(int den);
	
	int num();
	int den();

};

#endif

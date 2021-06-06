#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

//class Rational;

class Rational {
friend std::ostream& operator<<(std::ostream& out, const Rational& rhs);

friend Rational operator*(const Rational& lhs, const Rational& rhs);
friend Rational operator/(const Rational& lhs, const Rational& rhs);

private:
	int n;
	int d;

public:
	Rational(int num = 0, int den = 1);
	~Rational();
	Rational(const Rational& rhs);
	
	Rational& operator=(const Rational& rhs);
	bool operator==(const Rational& rhs) const;
	
	//Rational operator*(const Rational& rhs);
	//Rational operator/(const Rational& rhs);
	
	int num() const;
	int den() const;
	
	void num(int num);
	void den(int den);
};

#endif

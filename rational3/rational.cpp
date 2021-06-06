#include <iostream>
#include "rational.h"

std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
	out << rhs.n << "/" << rhs.d;
	
	return out;
}

Rational operator*(const Rational& lhs, const Rational& rhs)
{
	if (lhs.n == 0 || rhs.n == 0)
		return Rational();
	else 
		return Rational(lhs.n * rhs.n, lhs.d * rhs.d);
}

Rational operator/(const Rational& lhs, const Rational& rhs)
{
	if (rhs.n == 0)
		std::cout << "ZeroDivisionError" << std::endl;
	else if (lhs.n == 0)
		return lhs;
	else 
		return Rational(lhs.n * rhs.d, lhs.d * rhs.n);
}

Rational::Rational(int num, int den)
{
	this->n = num;
	this->d = den;
}

Rational::~Rational()
{
}

Rational::Rational(const Rational& rhs)
{
	this->n = rhs.n;
	this->d = rhs.d;
}

Rational& Rational::operator=(const Rational& rhs)
{
	this->n = rhs.n;
	this->d = rhs.d;
}

bool Rational::operator==(const Rational& rhs) const
{
	return (this->n == rhs.n && this->d == rhs.d);
}
/*
Rational Rational::operator*(const Rational& rhs)
{
	if (this->n == 0 || rhs.n == 0) {
		this->n = 0;
		this->d = 1;
	} else {
		Rational result(this->n * rhs.n, this->d * rhs.d);
		return result;
	}
	
}

Rational Rational::operator/(const Rational& rhs)
{
	if (rhs.n == 0)
		std::cout << "ZeroDivisionError" << std::endl;
	else if (this->n == 0) {
		return *this;
	} else {
		return Rational(this->n * rhs.d, this->d * rhs.n);
	}
	 
}
*/
int Rational::num() const
{
	return this->n;
}

int Rational::den() const
{
	return this->d;
}

void Rational::num(int num)
{
	this->n = num;
}

void Rational::den(int den)
{
	this->d = den;
}

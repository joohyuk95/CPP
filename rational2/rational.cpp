#include "rational.h"
/*
Rational::Rational()
{
	this->n = 0;
	this->d = 1;
}

Rational::Rational(int num)
{
	this->n = num;
	this->d = 1;
}
*/
Rational::Rational(int num, int den)
{
	this->n = num;
	this->d = den;
}

Rational::~Rational()
{
}

Rational& Rational::operator=(const Rational &rhs)
{
	this->n = rhs.n;
	this->d = rhs.d;
	
	return *this;
}

bool Rational::operator==(const Rational &rhs)
{
	return (this->n == rhs.n && this->d == rhs.d);
}

void Rational::num(int num)
{
	this->n = num;
}

void Rational::den(int den)
{
	this->d = den;
}

int Rational::num()
{
	return this->n;
}
int Rational::den()
{
	return this->d;
}

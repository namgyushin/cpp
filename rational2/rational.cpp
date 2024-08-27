#include <cassert>
#include "rational.h"

Rational::Rational()
{
	this->num = 0;
	this->den = 1;
}

Rational::Rational(int num)
{
	this->num = num;
	this->den = 1;
}

Rational::Rational(int num, int den)
{
	assert(den );
	this->num = num;
	this->den = den;
}

Rational::Rational(const Rational& rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
}

Rational::~Rational()
{
	
}

void Rational::operator=(const Rational& rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
}

bool Rational::operator==(const Rational& rhs)
{
	/*if (this->num == rhs.num && this->den == rhs.den)
	{
		return true;
	}
	else
	{
		return false;
	}
	*/
	return (this->num == rhs.num && this->den == rhs.den);
}

int Rational::getNum()
{
	return this->num;
}

int Rational::getDen()
{
	return this->den;
}

void Rational::setNum(int num)
{
	this->num = num;
}

void Rational::setDen(int den)
{
	assert(den );
	this->den = den;
}

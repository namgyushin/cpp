#include <cassert>
#include "rational.h"
std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
	return out << rhs.num << "/ " << rhs.den;
}

/*
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
*/
Rational::Rational(int num , int den)			//생성자
{
	assert(den );
	// 약분
	
	this->num = num;
	this->den = den;
}

Rational::Rational(const Rational& rhs)		//복사생성자
{
	this->num = rhs.num;
	this->den = rhs.den;
}
	
Rational::~Rational()								//소멸자
{
	
}

Rational& Rational::operator=(const Rational& rhs)
{
	this->num = rhs.num;
	this->den = rhs.den;
	
	return *this;
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

bool Rational::operator!=(const Rational& rhs)
{
	return !this->operator==(rhs);
	//return !(*this == rhs);
	//return this->num != rhs.num&& this->den != rhs.den;
}



const Rational Rational::operator+(const Rational& rhs)
{
	Rational result(this->num * rhs.den + rhs.num * this->den, this->den * rhs.den);
	
	return result;
}

const Rational Rational::operator-(const Rational& rhs)
{
	Rational result(this->num * rhs.den - rhs.num * this->den, this->den * rhs.den);
	
	return result;
}

const Rational Rational::operator*(const Rational& rhs)
{
	Rational result(this->num * rhs.num, this->den * rhs.den);
	
	return result;
}

const Rational Rational::operator/(const Rational& rhs)
{
	Rational result(this->num * rhs.den, this->den * rhs.num);
	
	return result;
}

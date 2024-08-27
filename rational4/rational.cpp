#include	<cassert>
#include "rational.h"
#include "gcd.h"

std::ostream& operator<<(std::ostream& out, const Rational& rhs)
{
	return out << rhs.num_ << "/" << rhs.den_;
}

void Rational::reduce()
{
	int g = gcd(num_, den_);
	num_ = num_ / g;
	den_ = den_ / g;
}

Rational::Rational(int num, int den)
:num_(num), den_(den)					//constructor initialization list	생성자 초기화 리스트
{
	assert(den );
	
	this->reduce();
	
	// /*this->*/ num_ = num;			//지역 변수와 이름이 같으면 this생략 안됌
	// /*this->*/ den_ = den;
}

Rational& Rational::operator+=(const Rational& rhs)
{
	*this = *this + rhs;
	
	return *this;
}

bool Rational::operator==(const Rational& rhs) const
{
	return num_ == rhs.num_ && den_ == rhs.den_;
}

bool Rational::operator!=(const Rational& rhs) const
{
	return !this->operator==(rhs);
}

const Rational Rational::operator+(const Rational& rhs) const
{
	Rational result( num_ * rhs.den_ + den_ * rhs.num_, den_ * rhs.den_ );
	return result;
}

int Rational::getNum() const
{
	return num_;
}

int Rational::getDen() const
{
	return den_;
}

void Rational::setNum(int num)
{
	num_ = num;
}

void Rational::setDen(int den)
{
	assert(den );
	
	den_ = den;
}

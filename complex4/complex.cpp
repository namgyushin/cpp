#include "complex.h"

std::ostream& operator<<(std::ostream& out, const Complex& rhs)
{
	return out << "(" << rhs.re_ << ", " << rhs.im_ << "i)";
}

Complex::Complex(double re, double im)
:re_(re), im_(im)					//constructor initialization list
{
	///*this->*/re_ = re;			//지역 변수와 이름이 같으면 this생략 안됌
	///*this->*/im_ = im;
}

Complex& Complex::operator+=(const Complex& rhs)
{
	re_ += rhs.re_;
	im_ += rhs.im_;
	
	return *this;
}

bool Complex::operator==(const Complex& rhs) const
{
	return re_ == rhs.re_ && im_ == rhs.im_;
}

bool Complex::operator!=(const Complex& rhs) const
{
	return !this->operator==(rhs);
}

const Complex Complex::operator+(const Complex& rhs) const
{
	Complex result(re_ + rhs.re_, im_ + rhs.im_);
	return result;
}

double Complex::real() const
{
	return re_;
}

double Complex::imag() const
{
	return im_;
}

void Complex::real(double re)
{
	re_ = re;
}

void Complex::imag(double im)
{
	im_ = im;
}

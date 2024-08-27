#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
//class Complex;

class Complex
{
	friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);		
	//friend 함수는 클래스의 외부에 정의되지만, 해당 클래스의 private 및 protected 멤버에 접근할 수 있습니다.

	private:
		double re;
		double im;
	
	public:
		//Complex();
		//Complex(double re);
		Complex(double re = 0.0, double im = 0.0);		//default argument - 뒤쪽부터 default argument를 쓴다
		Complex(const Complex& rhs);
		~Complex();
	
		Complex& operator=(const Complex& rhs);
	
		bool operator==(const Complex& rhs);
		bool operator!=(const Complex& rhs);
	
	
		const Complex operator+(const Complex& rhs);
		const Complex operator-(const Complex& rhs);
		//-,*,/
		// % ??? --> X
};

#endif

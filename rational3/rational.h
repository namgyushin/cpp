#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>
//class Rational;

class Rational
{
	friend std::ostream& operator<<(std::ostream& out, const Rational& rhs);		
	// friend 함수는 클래스의 외부에 정의되지만, 해당 클래스의 private 및 protected 멤버에 접근할 수 있습니다.
	// friend함수는 class안에있지만 멤버함수가 아니라 전역 함수이다
	
	private:
		int num;
		int den;
		
	public:
		//Rational();
		//Rational(int num);
		Rational(int num = 0, int den = 1);
		Rational(const Rational& rhs);		//right-hand-side
		~Rational();
		
		Rational& operator=(const Rational& rhs);		//Rational(Rational r);로 쓰면 안된다 -무한하게 복사생성자가 생성된다 
		
		//bool operator==(Rational r);				//오버헤드를 줄이기위해 안씀, 무식함
		//bool operator==(const Rational *pr);		//모양이 이상해짐
		bool operator==(const Rational& rhs);
		bool operator!=(const Rational& rhs);
		
		const Rational operator+(const Rational& rhs);
		const Rational operator-(const Rational& rhs);
		const Rational operator*(const Rational& rhs);
		const Rational operator/(const Rational& rhs);
		
};

#endif

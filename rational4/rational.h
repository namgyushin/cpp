#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational
{
	friend std::istream& operator>>(std::istream& in, Rational& rhs);
	friend std::ostream& operator<<(std::ostream& out, const Rational& rhs);

	private:
		int num_;
		int den_;
		
		void reduce();			//helper func. tool func.
	
	public:
																											//컴파일러가 만들어줌
		//Rational();																							
		//Rational(int num);
		Rational(int num = 0, int den = 1);
		
		//Rational() {}																							디폴트생성자
		//Rational(const Rational& rhs) {/* memberwise copy */}											복사생성자
		//~Rational() {}																							소멸생성자
		
		//Rational *operator& { return this; }																
		//const Rational *operator& const { return this; }												
		
		//Rational& operator=(const Rational& rhs) { /* memberwise copy */ return *this; } 		치환연산자
		Rational& operator+=(const Rational& rhs);
		//Rational& operator-=(const Rational& rhs);				//구현X
		//Rational& operator*=(const Rational& rhs);				//구현X
		//Rational& operator/=(const Rational& rhs);				//구현X
		// +=, -=, *=, /=, O		%= X
		// &= |= ^= <<= >>= X
		
		const Rational operator+(const Rational& rhs) const;
		//const Rational operator-(const Rational& rhs) const;		//구현X
		//const Rational operator*(const Rational& rhs) const;		//구현X
		//const Rational operator/(const Rational& rhs) const;		//구현X
		// % X
		
		// ++, -- X
		
		const Rational& operator++();
		const Rational operator++(int );

		bool operator==(const Rational& rhs) const;
		bool operator!=(const Rational& rhs) const;
		//bool operator>(const Rational& rhs) const;					//구현X
		//bool operator<(const Rational& rhs) const;					//구현X
		//bool operator>=(const Rational& rhs) const;					//구현X
		//bool operator<=(const Rational& rhs) const;					//구현X
		
		// && || ! X
		
		int getNum() const;
		int getDen() const;
		
		void setNum(int num);
		void setDen(int den);									
};

#endif

#ifndef RATIONAL_H
#define RATIONAL_H

class Rational
{
	private:
		int num;
		int den;
		
	public:
		Rational();
		Rational(int num);
		Rational(int num, int den);
		Rational(const Rational& rhs);		//right-hand-side
		~Rational();
		
		void operator=(const Rational& rhs);		//Rational(Rational r);로 쓰면 안된다 -무한하게 복사생성자가 생성된다 
		
		//bool operator==(Rational r);				//오버헤드를 줄이기위해 안씀, 무식함
		//bool operator==(const Rational *pr);		//모양이 이상해짐
		bool operator==(const Rational& rhs);
		
		int getNum();
		int getDen();
		
		void setNum(int num);
		void setDen(int den);
};

#endif

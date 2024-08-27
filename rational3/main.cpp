#include <iostream>
#include "rational.h"

int main()
{
	Rational r1;		// 0/1
	//Rational 2(3);
	Rational r2 = 3;
	Rational r3(3, 4);
	Rational r4 = r3	;	//Rational r4(r3)
	
	//r1.setNum(r3.getNum());
	//r1.setDen(r3.getDen());
	r1 /*= r2 */= r3;			//r1.operator=(r3) or operator=(r1, r3)
	
	//if (r1.getNum() == r3.getNum() && r1.getDen() == r3.getDen())
	if (r1 == r3)		//r1.operator==(r2) or opperator==(r1, r2)
	{
		std::cout << "r1 and r3 are equal" << std::endl;
	}
	else
	{
		std::cout << "r1 and r3 are not equal" << std::endl;
	}
	
	r1 != r3;
	
	Rational r5;
	r5 = r1 + r2;		// c5.operator=(c1.operator+(c2))
	r5 = r1 - r2;
	r5 = r1 * r2;
	r5 = r1 / r2;
	
	std::cout << "r1 : " << r1 << std::endl;
	std::cout << "r2 : " << r2 << std::endl;
	std::cout << "r3 : " << r3 << std::endl;
	std::cout << "r4 : " << r4 << std::endl;
	std::cout << "r5 : " << r5 << std::endl;
	
	return 0;
}



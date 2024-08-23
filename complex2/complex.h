#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	private:
	double re;
	double im;
	
	public:
	Complex();
	Complex(double re);
	Complex(double re, double im);
	Complex(const Complex& rc);			//복사 생성자
	~Complex();
	
	void operator=(const Complex &rc);
	
	//int operator==(Complex c);
	//int operator==(const Complex *pc);
	bool operator==(const Complex &rc);
	
	double real();
	double imag();
	
	void real(double re);
	void imag(double im);
};

#endif

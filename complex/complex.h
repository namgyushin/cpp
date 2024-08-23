#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
	private:
	//implementation
	double re;		//실수
	double im;		//허수
	
	public:
	//interface
	Complex();								// function overloading
	Complex(double re);						// --> 'one-interface multi-method
	Complex(double re, double im);
	~Complex();
	
	double real();
	double imag();
	
	void real(double re);
	void imag(double im);
};

#endif

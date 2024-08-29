#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>

class Complex
{
   friend std::ostream& operator<<(std::ostream& out, const Complex& rhs);

   private:
      double re_;
      double im_;
   
   public:
      //Complex();
      //Complex(double re);
      Complex(double re = 0.0, double im = 0.0);
                                                                                 //컴파일러가 만들어줌
      //Complex(const Complex& rhs) { /* memberwise copy */}                              복사생성자
      //~Complex() {}                                                                  소멸생성자
      
      //Complex *operator& { return this; }   
      //const Complex *operator& const { return this; }
      
      //Complex& operator=(const Complex& rhs) { /* memberwise copy */ return *this; }       치환연산자
      Complex& operator+=(const Complex& rhs);
      //Complex& operator-=(const Complex& rhs);            //구현X
      //Complex& operator*=(const Complex& rhs);            //구현X
      //Complex& operator/=(const Complex& rhs);            //구현X
      // +=, -=, *=, /=, O      %= X
      // &= |= ^= <<= >>= X
      
      const Complex operator+(const Complex& rhs) const;
      //const Complex operator-(const Complex& rhs) const;      //구현X
      //const Complex operator*(const Complex& rhs) const;      //구현X
      //const Complex operator/(const Complex& rhs) const;      //구현X
      // % X
      
      const Complex& operator++();      // prefix
      const Complex operator++(int );   // postfix
      // ++, -- X
      
      bool operator==(const Complex& rhs) const;
      bool operator!=(const Complex& rhs) const;
      //bool operator>(const Complex& rhs) const;               //구현X
      //bool operator<(const Complex& rhs) const;               //구현X
      //bool operator>=(const Complex& rhs) const;               //구현X
      //bool operator<=(const Complex& rhs) const;               //구현X
      
      // && || ! X
      
      double real() const;
      double imag() const;
      
      void real(double re);
      void imag(double im);                           
};

#endif

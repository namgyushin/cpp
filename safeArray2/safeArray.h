#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

class safeArray : public Array{
private:
   //static const int ARRAYSIZE;
   
   //int *pArr_;
   //int size_;
   
public:
   // explicit safeArray(int size = Array::getArraySize());
   explicit safeArray(int size = Array::ARRAYSIZE);
   safeArray(const int *pArr, int size);
   safeArray(const safeArray& rhs);
   virtual ~safeArray();
   
   safeArray& operator=(const safeArray& rhs);
   
   bool operator==(const safeArray& rhs) const;
   
   virtual int& operator[](int index);
   virtual const int& operator[](int index) const;
   
   //int size() const;
};

#endif
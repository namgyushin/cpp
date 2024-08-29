#ifndef SAFEARRAY_H
#define SAFEARRAY_H

class safeArray{
private:
   static const int ARRAYSIZE;
   int *pArr_;
   int size_;
   
public:
   explicit safeArray(int size = ARRAYSIZE);
   safeArray(const int *pArr, int size);
   safeArray(const safeArray& rhs);
   ~safeArray();
   
   safeArray& operator=(const safeArray& rhs);
   
   bool operator==(const safeArray& rhs) const;
   
   int& operator[](int index);
   const int& operator[](int index) const;
   
   int size() const;
};

#endif
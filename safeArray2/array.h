#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100

//extern const int ARRAYSIZE;

class Array{
private:
   int *pArr_;
   
protected:
   static const int ARRAYSIZE;
   
   int size_;
   
public:
   static int getArraySize();
   
   //Array();
   explicit Array(int size = ARRAYSIZE);
   Array(const int *pArr, int size);
   Array(const Array& rhs);
   virtual ~Array();
   
   Array& operator=(const Array& rhs);
   
   bool operator==(const Array& rhs) const;
   
   virtual int& operator[](int index);
   virtual const int& operator[](int index) const;
   
   int size() const;
   
};

#endif
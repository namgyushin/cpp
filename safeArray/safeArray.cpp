#include <cassert>
#include "safeArray.h"

const int safeArray::ARRAYSIZE = 100;

safeArray::safeArray(int size)
: pArr_(new int[size]), size_(size)
{
   assert(pArr_);
}

safeArray::safeArray(const int *pArr, int size)
: pArr_(new int[size]), size_(size)
{
   assert(pArr_);
   
   for(int i=0; i<size; ++i){
      pArr_[i] = pArr[i];
   }
}

safeArray::safeArray(const safeArray& rhs)
: pArr_(new int[rhs.size_]), size_(rhs.size_)
{
   assert(pArr_);
   
   for (int i = 0; i < rhs.size_; ++i){
       pArr_[i] = rhs.pArr_[i];
    }
}

safeArray::~safeArray(){
   delete [] pArr_;
}

safeArray& safeArray::operator=(const safeArray& rhs){
   if(this != &rhs){
      delete [] pArr_;
      pArr_ = new int[rhs.size_];
      assert(pArr_);
      size_= rhs.size_;
      
      for(int i=0; i<rhs.size_; ++i){
         pArr_[i] = rhs.pArr_[i];
      }
   }
   return *this;
}

bool safeArray::operator==(const safeArray& rhs) const{
   if(size_ != rhs.size_){
      return false;
   }
   
   int i;
   for(i=0; i<rhs.size_; ++i){
      if(pArr_[i] != rhs.pArr_[i]){
         break;
      }
   }
   return (i == rhs.size_);
}

int& safeArray::operator[](int index){
   assert(index>=0 && index<size_);
   
   return pArr_[index];
}

const int& safeArray::operator[](int index) const{
   assert(index>=0 && index<size_);
   
   return pArr_[index];
}

int safeArray::size() const{
   return size_;
}
#ifndef ARRAY_H
#define ARRAY_H

template <typename T>
class Array {
private:
    T* pArr_; // 배열 포인터
    int size_; // 배열 크기

protected:
    static const int ARRAYSIZE = 100; // 기본 배열 크기

public:
    static int getArraySize();

    explicit Array(int size = ARRAYSIZE);
    Array(const T* pArr, int size);
    Array(const Array<T>& rhs);
    virtual ~Array();

    Array<T>& operator=(const Array<T>& rhs);
    bool operator==(const Array<T>& rhs) const;

    virtual T& operator[](int index);
    virtual const T& operator[](int index) const;

    int size() const;
};

#include <cassert>

template <typename T>
int Array<T>::getArraySize() {
    return Array<T>::ARRAYSIZE;
}

template <typename T>
Array<T>::Array(int size)
    : pArr_(new T[size]), size_(size) {
    assert(pArr_);
}

template <typename T>
Array<T>::Array(const T* pArr, int size)
    : pArr_(new T[size]), size_(size) {
    assert(pArr_);
    for (int i = 0; i < size; ++i) {
        pArr_[i] = pArr[i];
    }
}

template <typename T>
Array<T>::Array(const Array<T>& rhs)
    : pArr_(new T[rhs.size_]), size_(rhs.size_) {
    assert(pArr_);
    for (int i = 0; i < size_; ++i) {
        pArr_[i] = rhs.pArr_[i];
    }
}

template <typename T>
Array<T>::~Array() {
    delete[] pArr_;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& rhs) {
    if (this != &rhs) {
        delete[] pArr_;
        pArr_ = new T[rhs.size_];
        assert(pArr_);
        size_ = rhs.size_;
        for (int i = 0; i < size_; ++i) {
            pArr_[i] = rhs.pArr_[i];
        }
    }
    return *this;
}

template <typename T>
bool Array<T>::operator==(const Array<T>& rhs) const {
    if (size_ != rhs.size_) {
        return false;
    }

    for (int i = 0; i < rhs.size_; ++i) {
        if (pArr_[i] != rhs.pArr_[i]) {
            return false;
        }
    }

    return true;
}

template <typename T>
T& Array<T>::operator[](int index) {
    return pArr_[index];
}

template <typename T>
const T& Array<T>::operator[](int index) const {
    return pArr_[index];
}

template <typename T>
int Array<T>::size() const {
    return size_;
}

#endif

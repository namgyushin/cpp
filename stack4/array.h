#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100

class Array
{
    private:
        static const int ARRAYSIZE;

        int *pArr_;
        int size_;

    public:

    //Array();
    explicit Array(int size = ARRAYSIZE);               //명시적인 main - 7번 못쓰게한다
    Array(const int *pArr, int size);
    Array(const Array& rhs);
    ~Array();

    Array& operator=(const Array& rhs);

    bool operator==(const Array& rhs) const;

    int& operator[](int index);
    const int& operator[](int index) const;
    
    int size() const;

};

#endif
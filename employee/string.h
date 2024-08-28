#ifndef STRING_H
#define STRING_H
#include <iostream>

class String
{
    friend std::ostream& operator<<(std::ostream& out, const String& rhs);

    private:
        char *str_;
        int len_;

    public:
        String();
        String(const char *s);
        String(const String& rhs);
        ~String();

        // String* operator&() { return this; }
        // const String* operator&() { return this; }

        String& operator=(const String& rhs);        // 컴파일러 shallow copy X --> deep copy!


        bool operator==(const String& rhs) const;

        const String operator+(const String& rhs) const;

        const char *c_str() const;
        int length() const;
};
#endif
#ifndef STRING_REP_H
#define STRING_REP_H

class StringRep{
friend class String;

private:
   char *str_;
   int len_;
   int rc_;         // reference count
   
   StringRep();
   StringRep(const char *s);
   StringRep(const StringRep& rhs);
   ~StringRep();
   
public:

};

#endif
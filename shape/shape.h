#ifndef SHAPE_H
#define SHAPE_H

class Shape{   // ABC Abstract Base Class
//private:
protected:
   int x_;
   int y_;
   
public:
   Shape(int x, int y);
   //Shape(const Shape& rhs);
   virtual ~Shape() {}
   
   //Shape& operator=(const Shape& rhs);
   //Shape *operator&();
   //const Shape *operator&() const;
   
   void move(int offsetX, int offsetY);
   virtual double area() const = 0;   //pure virtual function
};

#endif
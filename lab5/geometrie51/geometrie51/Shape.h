// Shape.h
#ifndef SHAPE_H
#define SHAPE_H

#include "Punct.h"

class Shape : public Punct {
public:
    Shape(double x, double y);

    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;

    // Add a virtual destructor
    virtual ~Shape();
};

#endif // SHAPE_H

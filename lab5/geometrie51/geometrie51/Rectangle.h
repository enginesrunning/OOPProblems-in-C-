#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(double x, double y, double width, double height);

    double getWidth() const;
    double getHeight() const;

    virtual double calculateArea() const override;
    virtual double calculatePerimeter() const override;

    // Add a virtual destructor
    virtual ~Rectangle();

private:
    double width;
    double height;
};

#endif // RECTANGLE_H

// Circle.h
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(double x, double y, double radius);

    double getRadius() const;

    virtual double calculateArea() const override;
    virtual double calculatePerimeter() const override;

    // Add a virtual destructor
    virtual ~Circle();

private:
    double radius;
};

#endif // CIRCLE_H

// Circle.cpp
#include "Circle.h"

Circle::Circle(double x, double y, double radius) : Shape(x, y), radius(radius) {}

double Circle::getRadius() const {
    return radius;
}

double Circle::calculateArea() const {
    return 3 * radius * radius;
}

double Circle::calculatePerimeter() const {
    return 2 * 3 * radius;
}

// Implementation of the virtual destructor
Circle::~Circle() {
    // Additional cleanup code if needed
}

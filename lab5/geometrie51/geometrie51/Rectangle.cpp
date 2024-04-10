#include "Rectangle.h"

Rectangle::Rectangle(double x, double y, double width, double height) : Shape(x, y), width(width), height(height) {}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::getHeight() const {
    return height;
}

double Rectangle::calculateArea() const {
    return width * height;
}

double Rectangle::calculatePerimeter() const {
    return 2 * (width + height);
}

// Implementation of the virtual destructor
Rectangle::~Rectangle() {
    // You can include additional cleanup code if needed
}

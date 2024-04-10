#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include <iostream>

int main() {
    double x, y, radius, width, height, side;


    std::cout << "Enter the center coordinates of the circle (x y): ";
    std::cin >> x >> y;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    Circle circle(x, y, radius);

   
    std::cout << "Enter the top-left coordinates of the rectangle (x y): ";
    std::cin >> x >> y;
    std::cout << "Enter the width and height of the rectangle: ";
    std::cin >> width >> height;
    Rectangle rectangle(x, y, width, height);


    std::cout << "Enter the top-left coordinates of the square (x y): ";
    std::cin >> x >> y;
    std::cout << "Enter the side length of the square: ";
    std::cin >> side;
    Square square(x, y, side);

    std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
    std::cout << "Circle Perimeter: " << circle.calculatePerimeter() << std::endl;

    std::cout << "Rectangle Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << std::endl;

    std::cout << "Square Area: " << square.calculateArea() << std::endl;
    std::cout << "Square Perimeter: " << square.calculatePerimeter() << std::endl;

    return 0;
}

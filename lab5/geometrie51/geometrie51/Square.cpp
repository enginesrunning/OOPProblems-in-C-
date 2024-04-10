// Square.cpp
#include "Square.h"

Square::Square(double x, double y, double side) : Rectangle(x, y, side, side), side(side) {}

double Square::getSide() const {
    return side;
}
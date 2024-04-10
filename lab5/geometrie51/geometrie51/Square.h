#pragma once
#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(double x, double y, double side);

    double getSide() const;

private:
    double side;
};

#endif //SQUARE_H

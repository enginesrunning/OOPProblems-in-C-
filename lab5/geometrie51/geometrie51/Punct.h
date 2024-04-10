#pragma once

#ifndef PUNCT_H
#define PUNCT_H

class Punct {
public:
    Punct(double x, double y);
    double getX() const;
    double getY() const;

private:
    double x;
    double y;
};
#endif // PUNCT_H
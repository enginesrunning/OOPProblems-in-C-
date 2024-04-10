// Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <cmath>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r, double i);

    double getReal() const;
    double getImag() const;

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    Complex operator~() const;
    Complex operator^(int power) const;

    void display() const;

    friend std::ostream& operator<<(std::ostream& os, const Complex& complex);
};


Complex calculateSeries(const Complex& a, const Complex& b, const Complex& c, const Complex& d, int n);

#endif // COMPLEX_H

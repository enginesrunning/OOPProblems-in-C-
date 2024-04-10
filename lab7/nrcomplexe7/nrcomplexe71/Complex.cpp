// Complex.cpp
#include "Complex.h"

Complex::Complex(double r, double i) : real(r), imag(i) {}

double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

Complex Complex::operator*(const Complex& other) const {
    return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
}

Complex Complex::operator/(const Complex& other) const {
    double denominator = other.real * other.real + other.imag * other.imag;
    return Complex((real * other.real + imag * other.imag) / denominator,
        (imag * other.real - real * other.imag) / denominator);
}

Complex Complex::operator~() const {
    double modulus = std::sqrt(real * real + imag * imag);
    return Complex(modulus, 0);
}

Complex Complex::operator^(int power) const {
    double modulus = std::pow(std::sqrt(real * real + imag * imag), power);
    double angle = std::atan2(imag, real);

    double resultReal = modulus * std::cos(power * angle);
    double resultImag = modulus * std::sin(power * angle);

    return Complex(resultReal, resultImag);
}

void Complex::display() const {
    std::cout << real << " + " << imag << "i" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Complex& complex) {
    os << complex.getReal() << " + " << complex.getImag() << "i";
    return os;
}
//<< format chaining

Complex calculateSeries(const Complex& a, const Complex& b, const Complex& c, const Complex& d, int n) {
    Complex numeratorSum(0, 0);
    Complex denominatorSum(0, 0);

    for (int i = 0; i < n; ++i) {
        Complex termA = (a + (b ^ (2 * i + 1)));
        Complex termC = (c + (d ^ (2 * i + 1)));
        numeratorSum = numeratorSum + (termA ^ 3) + (termC ^ 3);

        Complex termB = b ^ (4 * (i + 1));
        Complex termD = d ^ (4 * (i + 1));
        denominatorSum = denominatorSum + (termB ^ 4) + (termD ^ 4);
    }

    return numeratorSum / denominatorSum;
}


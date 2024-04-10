#include "header.h"
#include <iostream>

int main() {
    NumarComplex num1, num2;


    num1.parte_reala = 3.0;
    num1.parte_img = 4.0;
    num2.parte_reala = 1.0;
    num2.parte_img = -2.0;

    NumarComplex Sum = Suma(num1, num2);
    NumarComplex Diff = Diferenta(num1, num2);
    NumarComplex Inm = Inmultire(num1, num2);
    NumarComplex Cat = Impartire(num1, num2);

    std::cout << "num1 = ";
    printnumarComplex(num1);

    std::cout << "num2 = ";
    printnumarComplex(num2);

    std::cout << "Suma = ";
    printnumarComplex(Sum);

    std::cout << "Differenta = ";
    printnumarComplex(Diff);

    std::cout << "Produs = ";
    printnumarComplex(Inm);

    std::cout << "Impartire = ";
    printnumarComplex(Cat);

    return 0;
}

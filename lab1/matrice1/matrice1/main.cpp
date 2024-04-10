#include "header.h"
#include <iostream>

int main() {
    int rows, cols;
    std::cout << "Linii si coloane:  ";
    std::cin >> rows >> cols;

    Matrice A(rows, cols);

    std::cout << "valori el. A:" << std::endl;
    A.citireMatrice();

    std::cout << "Matrice A:" << std::endl;
    A.printMatrice();

    int exponent;
    std::cout << "exponentul (n) pt A^n: ";
    std::cin >> exponent;

    Matrice result = A ^ exponent;

    std::cout << "Matrix A^n:" << std::endl;
    result.printMatrice();

    return 0;
}

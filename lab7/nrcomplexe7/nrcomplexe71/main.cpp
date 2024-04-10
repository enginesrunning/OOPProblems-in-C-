#include <iostream>
#include "Complex.h"

int main() {
    double realPart, imagPart;

    std::cout << "Enter real and imaginary parts for complex number a: ";
    std::cin >> realPart >> imagPart;
    Complex a(realPart, imagPart);

    std::cout << "Enter real and imaginary parts for complex number b: ";
    std::cin >> realPart >> imagPart;
    Complex b(realPart, imagPart);

    std::cout << "Enter real and imaginary parts for complex number c: ";
    std::cin >> realPart >> imagPart;
    Complex c(realPart, imagPart);

    std::cout << "Enter real and imaginary parts for complex number d: ";
    std::cin >> realPart >> imagPart;
    Complex d(realPart, imagPart);

    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int choice;
    std::cout << "Choose an operation:\n"
        << "1. Calculate Series\n"
        << "2. Calculate Sum\n"
        << "3. Calculate Difference\n"
        << "4. Calculate Product\n"
        << "5. Calculate Quotient\n"
        << "6. Calculate Modulo\n"
        << "7. Calculate Power\n"
        << "Enter your choice (1-7): ";
    std::cin >> choice;

    Complex sum = a + b + c + d;
    Complex difference = a - b - c - d;
    Complex product = a * b * c * d;
    Complex quotient = a / b / c / d;


    Complex moduloA = ~a;
    Complex powerB = b ^ 2;
    std::cout << "Modulo of a: ";
    moduloA.display();
    std::cout << "Square of b: ";
    powerB.display();



    switch (choice) {
    case 1: {
        Complex result = calculateSeries(a, b, c, d, n);
        std::cout << "Result of the series formula: " << result << std::endl;
        break;
    }
    case 2:
        std::cout << "Sum (a + b): ";
        sum.display();
        break;
    case 3:

        std::cout << "Difference (a - b): ";
        difference.display();
        
        break;
    case 4:
        std::cout << "Product (a * b): ";
        product.display();
        break;

    case 5:
        std::cout << "Quotient (a / b): ";
        quotient.display();
        break;

    default:
        std::cout << "Invalid choice!" << std::endl;
        break;
    }

    return 0;
}

// DottedDog.cpp
#include "DottedDog.h"

void DottedDog::inputDottedInfo() {
    inputInfo();
    std::cout << "Enter the number of dots on the dog: ";
    std::cin >> numDots;
}

void DottedDog::outputDottedInfo() const {
    outputInfo();
    std::cout << "Number of dots: " << numDots << std::endl;
}

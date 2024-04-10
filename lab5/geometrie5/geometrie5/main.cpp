// main.cpp
#include "DottedDog.h"
#include "UndottedDog.h"

int main() {
    DottedDog dottedDog;
    dottedDog.inputDottedInfo();

    UndottedDog undottedDog;
    undottedDog.inputUndottedInfo();

    std::cout << "\nDotted Dog Information:\n";
    dottedDog.outputDottedInfo();

    std::cout << "\nUndotted Dog Information:\n";
    undottedDog.outputUndottedInfo();

    return 0;
}


#include "CRabbit.h"

CRabbit::CRabbit(const std::string& name, int age, double weight, int minSurface)
    : CAnimal(name, age, weight, "Grass", 0.5), CAnimalIerbivor(name, age, weight, "Grass", 0.5), minSurface(minSurface) {}

void CRabbit::InputInfo() {
    CAnimalIerbivor::InputInfo();
    
}

void CRabbit::DisplayInfo() const {
    CAnimal::DisplayInfo();
    std::cout << "Minimum Surface: " << minSurface << "\n";
}


#include "CFox.h"

CFox::CFox(const std::string& name, int age, double weight, int maxTemperature)
    : CAnimal(name, age, weight, "Meat", 1.0), CAnimalCarnivor(name, age, weight, "Meat", 1.0), maxTemperature(maxTemperature) {}

void CFox::InputInfo() {
    CAnimalCarnivor::InputInfo();
    
}

void CFox::DisplayInfo() const {
    CAnimal::DisplayInfo();
    std::cout << "Maximum Temperature: " << maxTemperature << "\n";
}

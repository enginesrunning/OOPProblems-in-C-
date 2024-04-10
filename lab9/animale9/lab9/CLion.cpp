
#include "CLion.h"

CLion::CLion(const std::string& name, int age, double weight, int minTemperature)
    : CAnimal(name, age, weight, "Meat", 3.0), CAnimalCarnivor(name, age, weight, "Meat", 3.0), minTemperature(minTemperature) {}

void CLion::InputInfo() {
    CAnimalCarnivor::InputInfo();
    
}

void CLion::DisplayInfo() const {
    CAnimal::DisplayInfo();
    std::cout << "Minimum Temperature: " << minTemperature << "\n";
}

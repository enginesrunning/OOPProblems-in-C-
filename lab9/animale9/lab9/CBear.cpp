
#include "CBear.h"

CBear::CBear(const std::string& name, int age, double weight, int hibernationPeriod)
    : CAnimal(name, age, weight, "Fish", 2.0), CAnimalCarnivor(name, age, weight, "Fish", 2.0), hibernationPeriod(hibernationPeriod) {}

void CBear::InputInfo() {
    CAnimalCarnivor::InputInfo();
   
}

void CBear::DisplayInfo() const {
    CAnimal::DisplayInfo();
    std::cout << "Hibernation Period: " << hibernationPeriod << "\n";
}

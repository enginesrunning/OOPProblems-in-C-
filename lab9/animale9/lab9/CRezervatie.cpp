
#include "CRezervatie.h"
#include "CAnimal.h"  

void CRezervatie::AddAnimal(std::unique_ptr<CAnimal> animal) {
    animals.push_back(std::move(animal));
}

void CRezervatie::DisplayAnimals() const {
    for (const auto& animal : animals) {
        animal->DisplayInfo();
        std::cout << "\n";
    }
}

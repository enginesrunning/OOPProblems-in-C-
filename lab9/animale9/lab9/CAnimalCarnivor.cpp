#include "CAnimalCarnivor.h"

CAnimalCarnivor::CAnimalCarnivor(const std::string& name, int age, double weight, const std::string& preferredFood, double foodPerDay)
    : CAnimal(name, age, weight, preferredFood, foodPerDay) {}

void CAnimalCarnivor::InputInfo() {
}

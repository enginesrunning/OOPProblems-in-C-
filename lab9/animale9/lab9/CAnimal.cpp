
#include "CAnimal.h"

CAnimal::CAnimal(const std::string& name, int age, double weight, const std::string& preferredFood, double foodPerDay)
    : name(name), age(age), weight(weight), preferredFood(preferredFood), foodPerDay(foodPerDay) {}

void CAnimal::DisplayInfo() const {
    std::cout << "Name: " << name << "\nAge: " << age << "\nWeight: " << weight << "\nPreferred Food: "
        << preferredFood << "\nFood per Day: " << foodPerDay << "\n";
}
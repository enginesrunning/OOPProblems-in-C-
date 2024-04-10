// DogBaseClass.cpp
#include "DogBaseClass.h"

void Dog::inputInfo() {
    std::cout << "Enter dog's name: ";
    std::cin >> name;
    std::cout << "Enter dog's height: ";
    std::cin >> height;
    std::cout << "Enter dog's weight: ";
    std::cin >> weight;
    std::cout << "Enter dog's age: ";
    std::cin >> age;
    std::cout << "Enter dog's color: ";
    std::cin >> color;
}

void Dog::outputInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Color: " << color << std::endl;
}

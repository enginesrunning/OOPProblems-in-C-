// DogBaseClass.h
#pragma once

#include <iostream>
#include <string>

class Dog {
protected:
    std::string name;
    double height;
    double weight;
    int age;
    std::string color;

public:
    void inputInfo();
    void outputInfo() const;
};

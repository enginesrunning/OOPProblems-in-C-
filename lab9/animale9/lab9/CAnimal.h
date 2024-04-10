#ifndef CANIMAL_H
#define CANIMAL_H

#include <iostream>
#include <string>

class CAnimal {
protected:
    std::string name;
    int age;
    double weight;
    std::string preferredFood;
    double foodPerDay;

public:
    CAnimal(const std::string& name, int age, double weight, 
        const std::string& preferredFood, double foodPerDay);

    virtual void InputInfo() = 0;
    virtual void DisplayInfo() const;

    virtual ~CAnimal() = default;
};

#endif // CANIMAL_H

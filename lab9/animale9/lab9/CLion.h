#pragma once
#ifndef CLION_H
#define CLION_H

#include "CAnimalCarnivor.h"

class CLion : public CAnimalCarnivor {
private:
    int minTemperature;

public:
    CLion(const std::string& name, int age, double weight, int minTemperature);

    virtual void InputInfo() override;
    virtual void DisplayInfo() const override;
};

#endif // CLION_H

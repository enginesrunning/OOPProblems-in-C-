#pragma once
#ifndef CFOX_H
#define CFOX_H

#include "CAnimalCarnivor.h"

class CFox : public CAnimalCarnivor {
private:
    int maxTemperature;

public:
    CFox(const std::string& name, int age, double weight, int maxTemperature);

    virtual void InputInfo() override;
    virtual void DisplayInfo() const override;
};

#endif // CFOX_H

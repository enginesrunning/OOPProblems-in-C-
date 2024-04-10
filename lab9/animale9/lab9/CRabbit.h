#pragma once
#ifndef CRABBIT_H
#define CRABBIT_H

#include "CAnimalIerbivor.h"

class CRabbit : public CAnimalIerbivor {
private:
    int minSurface;

public:
    CRabbit(const std::string& name, int age, double weight, int minSurface);

    virtual void InputInfo() override;
    virtual void DisplayInfo() const override;
};

#endif // CRABBIT_H

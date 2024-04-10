#pragma once
#ifndef CANIMALIERBIVOR_H
#define CANIMALIERBIVOR_H

#include "CAnimal.h"

class CAnimalIerbivor : public virtual CAnimal {
public:
    CAnimalIerbivor(const std::string& name, int age, double weight, const std::string& preferredFood, double foodPerDay);

    virtual void InputInfo() override;

    virtual ~CAnimalIerbivor() = default;
};

#endif // CANIMALIERBIVOR_H

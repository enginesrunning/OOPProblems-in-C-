#pragma once
#ifndef CANIMALCARNIVOR_H
#define CANIMALCARNIVOR_H

#include "CAnimal.h"

class CAnimalCarnivor : public virtual CAnimal {
public:
    CAnimalCarnivor(const std::string& name, int age, double weight, const std::string& preferredFood, double foodPerDay);

    virtual void InputInfo() override;

    virtual ~CAnimalCarnivor() = default;
};

#endif // CANIMALCARNIVOR_H

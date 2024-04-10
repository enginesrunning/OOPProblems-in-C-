
#ifndef CBEAR_H
#define CBEAR_H

#include "CAnimalCarnivor.h"

class CBear : public CAnimalCarnivor {
private:
    int hibernationPeriod;

public:
    CBear(const std::string& name, int age, double weight, int hibernationPeriod);

    virtual void InputInfo() override;
    virtual void DisplayInfo() const override;
};

#endif // CBEAR_H

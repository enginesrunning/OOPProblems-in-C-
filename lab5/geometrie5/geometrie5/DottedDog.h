// DottedDog.h
#pragma once

#include "DogBaseClass.h"

class DottedDog : public Dog {
private:
    int numDots;

public:
    void inputDottedInfo();
    void outputDottedInfo() const; //m
};

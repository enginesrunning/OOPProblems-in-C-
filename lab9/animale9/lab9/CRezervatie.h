#ifndef CREZERVATIE_H
#define CREZERVATIE_H

#include <vector>
#include <memory>

class CAnimal;

class CRezervatie {
private:
    std::vector<std::unique_ptr<CAnimal>> animals;

public:
    void AddAnimal(std::unique_ptr<CAnimal> animal);
    void DisplayAnimals() const;
};

#endif // CREZERVATIE_H

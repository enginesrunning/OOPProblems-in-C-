#pragma once
#ifndef HEADER_H
#define HEADER_H

#include <vector>

class Matrice {
public:
    Matrice(int rows, int cols);
    void citireMatrice();
    void printMatrice() const;
    Matrice operator^(int n) const;

private:
    std::vector<std::vector<double>> data;
};

#endif
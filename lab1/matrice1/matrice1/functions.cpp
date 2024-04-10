#include "header.h"
#include <iostream>

Matrice::Matrice(int rows, int cols) : data(rows, 
    std::vector<double>(cols, 0)) {}

void Matrice::citireMatrice() {
    for (auto& row : data) {
        for (auto& element : row) {
            std::cin >> element;
        }
    }
}

void Matrice::printMatrice() const {
    for (const auto& row : data) {
        for (const double element : row) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }
}

Matrice Matrice::operator^(int n) const {
    if (n == 0) {
        int size = data.size();
        Matrice result(size, size);
        for (int i = 0; i < size; i++) {
            result.data[i][i] = 1.0;
        }
        return result;
    }
    else if (n < 0) {
        std::cerr << "err" << std::endl;   /*putere negativa*/
        return *this;
    }
    else {
        Matrice result = *this;
        for (int i = 1; i < n; i++) {
            //n-1 ori//
            int size = data.size();
            Matrice temp(size, size);
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    for (int k = 0; k < size; k++) {
                        temp.data[i][j] += result.data[i][k] * data[k][j];
                    }
                }
            }
            result = temp;
        }
        return result;
    }
}
#include "header.h"
#include <iostream>

numarComplex suma(const numarComplex& a, const numarComplex& b) {
    numarComplex result;
    result.parte_reala = a.parte_reala + b.parte_reala;
    result.parte_img = a.parte_img + b.parte_img;
    return result;
}

numarComplex diferenta(const numarComplex& a, const numarComplex& b) {
    numarComplex result;
    result.parte_reala = a.parte_reala - b.parte_reala;
    result.parte_img = a.parte_img - b.parte_img;
    return result;
}

numarComplex inmultire(const numarComplex& a, const numarComplex& b) {
    numarComplex result;
    result.parte_reala = a.parte_reala * b.parte_reala - 
        a.parte_img * b.parte_img;
    result.parte_img = a.parte_reala * b.parte_img +
        a.parte_img * b.parte_reala;
    return result;
}

numarComplex impartire(const numarComplex& a, const numarComplex& b) {
    numarComplex result;
    double numarator = b.parte_reala * b.parte_reala +
        b.parte_img * b.parte_img;
    result.parte_reala = (a.parte_reala * b.parte_reala +
        a.parte_img * b.parte_img) / numarator;
    result.parte_img = (a.parte_img * b.parte_reala -
        a.parte_reala * b.parte_img) / numarator;
    return result;
}

void printnumarComplex(const numarComplex& num) {
    if (num.parte_img >= 0)
        std::cout << num.parte_reala << " + " << num.parte_img << "i" << std::endl;
    else
        std::cout << num.parte_reala << " - " << -num.parte_img << "i" << std::endl;
}
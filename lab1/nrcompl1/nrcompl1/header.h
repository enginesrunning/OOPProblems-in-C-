#pragma once
#ifndef HEADER_H
#define HEADER_H

class numarComplex {
public:
    double parte_reala;
    double parte_img;
};

numarComplex suma(const numarComplex& a, const numarComplex& b);
numarComplex diferenta(const numarComplex& a, const numarComplex& b);
numarComplex inmultire(const numarComplex& a, const numarComplex& b);
numarComplex impartire(const numarComplex& a, const numarComplex& b);

void printnumarComplex(const numarComplex& num);

#endif
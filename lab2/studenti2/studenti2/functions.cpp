#include "header.h"
#include <iostream>

void StudentTable::adaugaStudent(const Student& student) {
    students.push_back(student);
}

void StudentTable::displayTabel() const {
    std::cout << "Tabel cu studenti:\n";
    std::cout << "--------------------------------------------------------\n";
    std::cout << "Nume\tVarsta\tAdresa\tNr telefon\tFacultate\tNote\tAbsente\n";

    for (const Student& student : students) {
        std::cout << student.nume << "\t" << student.varsta << "\t" << student.adresa << "\t"
            << student.numarTelefon << "\t" << student.numeFacultate << "\t" << student.noteExamen
            << "\t" << student.numAbsente << "\n";
    }
}
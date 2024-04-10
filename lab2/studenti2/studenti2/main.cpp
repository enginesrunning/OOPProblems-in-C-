#include <iostream>
#include "header.h"

int main() {
    StudentTable table;
    char addAnother;

    do {
        Student student;
        std::cout << "Informatii student:\n";
        std::cout << "Nume: ";
        std::cin >> student.nume;
        std::cout << "Varsta: ";
        std::cin >> student.varsta;
        std::cout << "Adresa ";
        std::cin.ignore();
        std::getline(std::cin, student.adresa);
        std::cout << "Numar telefon: ";
        std::cin >> student.numarTelefon;
        std::cout << "Nume facultate: ";
        std::cin.ignore();
        std::getline(std::cin, student.numeFacultate);
        std::cout << "Nota examen: ";
        std::cin >> student.noteExamen;
        std::cout << "Absente: ";
        std::cin >> student.numAbsente;

        table.adaugaStudent(student);

        std::cout << "Doriti sa aduagati un student (y/n)? ";
        std::cin >> addAnother;
    } while (addAnother == 'y' || addAnother == 'Y');

    table.displayTabel();

    return 0;
}

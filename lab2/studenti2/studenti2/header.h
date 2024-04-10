
#pragma once
#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

struct Student {
    std::string nume;
    int varsta;
    std::string adresa;
    std::string numarTelefon;
    std::string numeFacultate;
    int noteExamen;
    int numAbsente;
};

class StudentTable {
public:
    void adaugaStudent(const Student& student);
    void displayTabel() const;

private:
    std::vector<Student> students;
};

#endif // STUDENT_H
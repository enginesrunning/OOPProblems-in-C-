#pragma once
#include <iostream>
#include <string>

const int MAX_BOOKS = 100;  //dimensiune

class Book {
public:

    Book() : author(""), title(""), ISBN(""), year(0), price(0.0) {} //c1

    Book(const std::string& author, const std::string& title,
        const std::string& ISBN, int year, double price)
        : author(author), title(title), ISBN(ISBN), year(year), price(price) {} //c2 pm

    std::string getAuthor() const { return author; }
    std::string getTitle() const { return title; }
    std::string getISBN() const { return ISBN; }
    int getYear() const { return year; }
    double getPrice() const { return price; }

private:
    std::string author;
    std::string title;
    std::string ISBN;
    int year;
    double price;
};

class Library {
public:
    void addBook(const Book& book) {
        if (numBooks < MAX_BOOKS) {
            books[numBooks++] = book;
        }
        else {
            std::cout << "Library full." << std::endl;
        }
    }

    Book* searchByAuthor(const std::string& author) {
        for (int i = 0; i < numBooks; ++i)
            if (books[i].getAuthor() == author)
                return &books[i];
        return nullptr;
    }

    Book* searchByEdition(const std::string& edition) {
        for (int i = 0; i < numBooks; ++i)
            if (books[i].getTitle() == edition)
                return &books[i];
        return nullptr;
    }

    Book* searchByISBN(const std::string& ISBN) {
        for (int i = 0; i < numBooks; ++i)
            if (books[i].getISBN() == ISBN)
                return &books[i];
        return nullptr;
    }

    ~Library() {
        std::cout << "destructor." << std::endl; //cleans
    }


private:
    Book books[MAX_BOOKS];
    int numBooks = 0;
};

#include "Class.h"
#include <iostream>
#include <string>


int main() {
    Library library;

    while (true) { //loop infinit
        std::string author;
        std::string title;
        std::string isbn;
        int year;
        double price;

        std::cout << "Enter author name (or 'q' to quit): ";
        std::getline(std::cin, author);
        if (author == "q") {
            break;
        }

        std::cout << "Enter book title: ";
        std::getline(std::cin, title);

        std::cout << "Enter ISBN: ";
        std::getline(std::cin, isbn);

        std::cout << "Enter year: ";
        std::cin >> year;
        std::cin.ignore(); // discard newline character

        std::cout << "Enter price: ";
        std::cin >> price;
        std::cin.ignore(); // discard newline character  //\n input buffer

        library.addBook(Book(author, title, isbn, year, price));
    }

    // Search for books
    std::string searchAuthor;
    std::cout << "Enter author name to search for books: ";
    std::getline(std::cin, searchAuthor);

    Book* authorBooks = library.searchByAuthor(searchAuthor);
    if (authorBooks != nullptr) {
        std::cout << "Books by " << searchAuthor << ":\n";
        while (authorBooks->getTitle() != "") {
            std::cout << authorBooks->getTitle() << " (" << authorBooks->getYear() << ")\n";
            ++authorBooks;
        }
    }
    else {
        std::cout << "No books found for " << searchAuthor << std::endl;
    }

    // verifica daca isbn este unic
    std::string searchISBN;
    std::cout << "Enter ISBN to search for a book: ";
    std::getline(std::cin, searchISBN);

    Book* foundBook = library.searchByISBN(searchISBN);
    if (foundBook->getTitle() != "") {
        std::cout << "Book with ISBN " << searchISBN << " found: "
            << foundBook->getTitle() << std::endl;
    }
    else {
        std::cout << "Book with ISBN " << searchISBN << " not found." << std::endl;
    }

    return 0;
}

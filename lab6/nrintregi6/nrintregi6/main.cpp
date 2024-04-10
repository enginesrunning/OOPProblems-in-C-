#include <iostream>
#include "ListManager.h"

int main() {
    ListManager listManager;
    int choice;

    do {
        std::cout << "Menu:\n";
        std::cout << "1. View List\n";
        std::cout << "2. Add Element\n";
        std::cout << "3. Delete Element\n";
        std::cout << "4. Calculate Median\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            listManager.ViewList();
            break;
        case 2:
            listManager.AddElement();
            break;
        case 3:
            listManager.DeleteElement();
            break;
        case 4:
            listManager.CalculateMedian();
            break;
        case 0:
            std::cout << "Exiting the program.\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}

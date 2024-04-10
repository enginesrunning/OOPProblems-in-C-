#include "ListManager.h"
#include <iostream>

void ListManager::ViewList() {
    numberList.DisplayList();
}

void ListManager::AddElement() {
    int value;
    std::cout << "Enter the number to add: ";
    std::cin >> value;
    numberList.AddElement(value);
    std::cout << "Number added successfully.\n";
}

void ListManager::DeleteElement() {
    int value;
    std::cout << "Enter the number to delete: ";
    std::cin >> value;
    if (numberList.DeleteElement(value)) {
        std::cout << "Number deleted successfully.\n";
    }
    else {
        std::cout << "Number not found in the list.\n";
    }
}

void ListManager::CalculateMedian() {
    std::cout << "Median: " << numberList.CalculateMedian() << "\n";
}

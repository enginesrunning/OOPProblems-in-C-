
#include "Word.h"
#include "Synonyms.h" // Include Synonyms.h to access the Synonyms class

Word::Word(const std::string& w) : word(w) {}

void Word::displayWord() {
    std::cout << "Word: " << word << std::endl;
}

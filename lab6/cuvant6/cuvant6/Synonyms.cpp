
#include "Synonyms.h"
#include "Word.h"

void Synonyms::addSynonym(Word& word, const std::string& synonym) {
    word.word += " (Synonym: " + synonym + ")";
    synonyms.push_back(synonym);
}

void Synonyms::displaySynonyms() {
    std::cout << "Synonyms: ";
    for (const auto& synonym : synonyms) {
        std::cout << synonym << " ";
    }
    std::cout << std::endl;
}


#ifndef SYNONYMS_H
#define SYNONYMS_H

#include <vector>
#include <iostream>

class Word;

class Synonyms {
private:
    std::vector<std::string> synonyms;

public:
    void addSynonym(Word& word, const std::string& synonym);
    void displaySynonyms();
};

#endif // SYNONYMS_H


#ifndef WORD_H
#define WORD_H

#include <string>
#include "Synonyms.h" 

class Word {
private:
    std::string word;

public:
    Word(const std::string& w);
    void displayWord();
    friend class Synonyms; 
};

#endif // WORD_H

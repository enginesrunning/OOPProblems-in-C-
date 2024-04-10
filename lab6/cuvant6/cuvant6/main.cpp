
#include "Word.h"
#include "Synonyms.h"
#include <iostream>

int main() {
    std::cout << "Enter a word: ";
    std::string userWord;
    std::cin >> userWord;

    Word userWordObj(userWord);

    Synonyms synonyms;

    std::cout << "Dictionary: " << userWord << " : ";
    std::string synonym;
    int synonymCount = 0;

    while (synonymCount < 3) {
        std::cin >> synonym;
        if (synonym != "-1") {
            synonyms.addSynonym(userWordObj, synonym);
            synonymCount++;
        }
    }

    userWordObj.displayWord();
    synonyms.displaySynonyms();

    return 0;
}

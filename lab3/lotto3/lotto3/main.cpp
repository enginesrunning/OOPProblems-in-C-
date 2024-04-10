
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "LottoTicket.h"

class LottoAgency {
private:
    const int ticketCount = 6;
    const int arrayCount = 3;
    LottoTicket tickets[3][6]; //
    LottoTicket winnerTicket;

public:
    LottoAgency() { //c
        std::srand(static_cast<unsigned>(std::time(nullptr)));

        for (int i = 0; i < arrayCount; i++) {
            for (int j = 0; j < ticketCount; j++) {
                tickets[i][j].generateRandomNumber();
            }
        }

        winnerTicket.generateRandomNumber();
    }

    void printTickets() {
        std::cout << "Lotto Tickets:" << std::endl;
        for (int i = 0; i < arrayCount; i++) {
            for (int j = 0; j < ticketCount; j++) {
                std::cout << "Array " << i + 1 << ", Ticket " << j + 1 << ": " << tickets[i][j].getNumber() << std::endl;
            }
        }
    }

    bool checkWinner() {
        for (int i = 0; i < arrayCount; i++) {
            for (int j = 0; j < ticketCount; j++) {
                if (tickets[i][j].getNumber() == winnerTicket.getNumber()) {
                    return true;
                }
            }
        }

        return false;
    }
};

int main() {
    LottoAgency agency;
    agency.printTickets();

    if (agency.checkWinner()) {
        std::cout << "Congratulations! You have won the lotto!" << std::endl;
    }
    else {
        std::cout << "Sorry, you did not win the lotto. Better luck next time!" << std::endl;
    }

    return 0;
}

LottoTicket::LottoTicket() {
    number = 0;
    extracted = false;
}

void LottoTicket::generateRandomNumber() {
    number = (rand() % 49) + 1;
}

int LottoTicket::getNumber() {
    return number;
}

void LottoTicket::markAsExtracted() {
    extracted = true;
}

bool LottoTicket::isExtracted() {
    return extracted;
}
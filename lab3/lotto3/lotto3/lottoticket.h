#pragma once
#ifndef LOTTO_TICKET_H
#define LOTTO_TICKET_H

class LottoTicket {
private:
    int number;
    bool extracted;

public:
    LottoTicket();

    void generateRandomNumber();
    int getNumber();
    void markAsExtracted();
    bool isExtracted();
};

#endif
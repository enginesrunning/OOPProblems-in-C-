#pragma once
#ifndef LISTMANAGER_H
#define LISTMANAGER_H

#include "NumberList.h"

class ListManager {
public:
    void ViewList();
    void AddElement();
    void DeleteElement();
    void CalculateMedian();

private:
    NumberList numberList;
};

#endif

/*
Rao Muhammad Rafay
P200636
A
*/

#include "pch.h"
#ifndef SHOP_H
#define SHOP_H
#include "Computer.h"

#include <iostream>
#include <sstream>
using namespace std;

class Shop
{
    // private:

    Computer* comp;
    int len;

public:
    // setter
    void setcomp(Computer*);

    // getter
    Computer* getcomp();

    void manufactureComputer();

    // function to show list of computers manufactured
    void viewList();
};

#endif

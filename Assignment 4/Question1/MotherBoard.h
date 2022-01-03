/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef MOTHERBOARD_H
#define MOTHERBOARD_H
#include "Port.h"
#include "MainMemory.h"

#include <iostream>
#include <sstream>
using namespace std;

// class "MotherBoard" composed of class "Port" and aggregration of class "MainMemory"
class MotherBoard
{
    // private:

    Port *ports;
    MainMemory mm;
    int len;

public:
    // default constructor
    MotherBoard();

    // parameterized constructor
    MotherBoard(int cp, string tech_type, string t, int br);

    // setters
    void setPort(Port *obj);

    void setmm(MainMemory obj);

    void set(int cp, string tech_type, string t, int br);

    // getter
    Port *getPort();

    MainMemory getMainMemory();

    int getlen();

    ~MotherBoard();
};

#endif
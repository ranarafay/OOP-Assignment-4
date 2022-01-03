/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef MAINMEMORY_H
#define MAINMEMORY_H

#include <iostream>
#include <sstream>
using namespace std;

class MainMemory
{
    // private:

    int capacity;
    string technologyType;

public:
    // default constructor
    MainMemory();

    // parameterized constructor
    MainMemory(int , string);

    // setter
    void set(int, string);

    // getters
    int getCapacity();

    string getTechnologyType();
};

#endif
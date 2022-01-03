/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef CONTROLUNIT_H
#define CONTROLUNIT_H

#include <iostream>
#include <sstream>
using namespace std;

class ControlUnit
{
    // private:

    float clock;

public:

    // default constructor
    ControlUnit();

    // parameterized constructor
    ControlUnit(float);

    // setter
    void set(float cl);

    // getter
    float getClock();
};


#endif
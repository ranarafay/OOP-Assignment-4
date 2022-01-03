/*
Rao Muhammad Rafay
P200636
A
*/

#include "ControlUnit.h"
#include <iostream>
#include <sstream>
using namespace std;

// default constructor
ControlUnit ::ControlUnit()
{
    clock = 0.0;
}

// parameterized constructor
ControlUnit :: ControlUnit(float cl)
{
    clock = cl;
}

// setter
void ControlUnit ::set(float cl)
{
    clock = cl;
}

// getter
float ControlUnit ::getClock()
{
    return clock;
}
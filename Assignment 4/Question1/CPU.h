/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef CPU_H
#define CPU_H
#include "ALU.h"
#include "ControlUnit.h"

#include <iostream>
#include <sstream>
using namespace std;

class CPU
{
    // private:

    ALU *alu;
    ControlUnit *cu;

public:
    // default constructor
    CPU();

    // parameterized constructor
    CPU(int, int, int, int, float);

    // setter
    void setalu(ALU *);

    void setcu(ControlUnit *);

    void set(int, int, int, int, float);

    // getter
    ALU getAlu();

    ControlUnit getCu();

    ~CPU();
};

# endif
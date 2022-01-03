/*
Rao Muhammad Rafay
P200636
A
*/

#include "ALU.h"
#include <iostream>
#include <sstream>
using namespace std;

// default constructor
ALU ::ALU(){}

// parameterized constructor
ALU ::ALU(int no_ad, int no_sub, int no_reg, int si_reg)
{
    NoOfAdders = no_ad;
    NoOfSubtractor = no_sub;
    NoOfRegisters = no_reg;
    sizeOfRegisters = si_reg;
}

// setter
void ALU :: set(int no_ad, int no_sub, int no_reg, int si_reg)
{
    NoOfAdders = no_ad;
    NoOfSubtractor = no_sub;
    NoOfRegisters = no_reg;
    sizeOfRegisters = si_reg;
}

// getters
int ALU :: getNoOfAdders()
{
    return NoOfAdders;
}
int ALU :: getNoOfSubtractors()
{
    return NoOfSubtractor;
}
int ALU :: getNoOfRegisters()
{
    return NoOfRegisters;
}
int ALU :: getsizeOfRegisters()
{
    return sizeOfRegisters;
}

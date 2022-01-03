/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef ALU_H
#define ALU_H

#include <iostream>
#include <sstream>
using namespace std;


class ALU
{
    // private:

    int NoOfAdders;
    int NoOfSubtractor;
    int NoOfRegisters;
    int sizeOfRegisters;

public:
    // default constructor
    ALU();

    // parameterized constructor
    ALU(int, int, int, int);

    // setter
    void set(int, int, int, int);

    // getters
    int getNoOfAdders();

    int getNoOfSubtractors();

    int getNoOfRegisters();

    int getsizeOfRegisters();
};



#endif
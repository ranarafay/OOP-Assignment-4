/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef COMPUTER_H
#define COMPUTER_H
#include "PhysicalMemory.h"
#include "MotherBoard.h"
#include "CPU.h"

#include <iostream>
#include <sstream>
using namespace std;

// class "Computer" aggregation of "PhysicalMemory", "CPU" and "MotherBoard"
class Computer
{
    // private:

    PhysicalMemory pm;
    MotherBoard mb;
    CPU cpu;

public:
    // default constructor
    Computer();

    // parameterized constructor
    Computer(int, int, string, string, int, int, int, int, int, float);

    // setter
    void setpm(PhysicalMemory);

    void setmb(MotherBoard);

    void setcpu(CPU);

    void set(int, int, string, string, int, int, int, int, int, float);

    // getters
    PhysicalMemory getPhysicalMemory();

    MotherBoard getMotherBoard();

    CPU getCPU();
};

#endif

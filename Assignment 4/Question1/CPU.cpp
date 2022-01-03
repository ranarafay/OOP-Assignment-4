/*
Rao Muhammad Rafay
P200636
A
*/

#include "pch.h"
#include "CPU.h"
#include <iostream>
#include <sstream>
using namespace std;

// default constructor
CPU ::CPU(){}

// parameterized constructor
CPU ::CPU(int no_ad, int no_sub, int no_reg, int si_reg, float cl)
{
    alu = new ALU(no_ad, no_sub, no_reg, si_reg);
    cu = new ControlUnit(cl);

    setalu(alu);
    setcu(cu);
}

// setter
void CPU ::setalu(ALU *obj)
{
    alu = obj;
}

void CPU ::setcu(ControlUnit *obj)
{
    cu = obj;
}

void CPU ::set(int no_ad, int no_sub, int no_reg, int si_reg, float cl)
{
    alu = new ALU(no_ad, no_sub, no_reg, si_reg);
    cu = new ControlUnit(cl);

    setalu(alu);
    setcu(cu);
}

// getter
ALU CPU ::getAlu()
{
    return *(alu);
}

ControlUnit CPU ::getCu()
{
    return *(cu);
}

CPU ::~CPU()
{
    // to destroy parts
    delete alu;
    delete cu;
}
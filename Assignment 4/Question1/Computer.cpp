/*
Rao Muhammad Rafay
P200636
A
*/

#include "Computer.h"
#include <iostream>
#include <sstream>
using namespace std;

// default constructor
Computer ::Computer(){}

// parameterized constructor
Computer ::Computer(int c, int cp, string tech_type, string t, int br, int no_ad, int no_sub, int no_reg, int si_reg, float cl)
{
    pm.set(c);
    mb.set(cp, tech_type, t, br);
    cpu.set(no_ad, no_sub, no_reg, si_reg, cl);

    setpm(pm);
    setmb(mb);
    setcpu(cpu);
}

// setter
void Computer ::setpm(PhysicalMemory obj)
{
    pm = obj;
}

void Computer ::setmb(MotherBoard obj)
{
    mb = obj;
}

void Computer ::setcpu(CPU obj)
{
    cpu = obj;
}

void Computer ::set(int c, int cp, string tech_type, string t, int br, int no_ad, int no_sub, int no_reg, int si_reg, float cl)
{
    pm.set(c);
    mb.set(cp, tech_type, t, br);
    cpu.set(no_ad, no_sub, no_reg, si_reg, cl);

    setpm(pm);
    setmb(mb);
    setcpu(cpu);
}

// getters
PhysicalMemory Computer ::getPhysicalMemory()
{
    return pm;
}

MotherBoard Computer ::getMotherBoard()
{
    return mb;
}

CPU Computer ::getCPU()
{
    return cpu;
}
/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef PHYSICALMEMORY_H
#define PHYSICALMEMORY_H

#include <iostream>
using namespace std;



class PhysicalMemory
{
    // private:
    int capacity;

public:
    // default constructor
    PhysicalMemory();

    // parameterized constructor
    PhysicalMemory(int);

    // setter
    void set(int);

    // getter
    int getCapacity();
};


#endif
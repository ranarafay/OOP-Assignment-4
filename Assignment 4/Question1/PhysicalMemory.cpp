/*
Rao Muhammad Rafay
P200636
A
*/

#include "pch.h"
#include "PhysicalMemory.h"
#include <iostream>
#include <sstream>
using namespace std;

// default constructor
PhysicalMemory ::PhysicalMemory(){}

// parameterized constructor
PhysicalMemory ::PhysicalMemory(int c)
{
    capacity = c;
}

// setter
void PhysicalMemory ::set(int c)
{
    capacity = c;
}

// getter
int PhysicalMemory ::getCapacity()
{
    return capacity;
}

/*
Rao Muhammad Rafay
P200636
A
*/

#include "pch.h"
#include "MainMemory.h"
#include <iostream>
#include <sstream>
using namespace std;

// default constructor
MainMemory ::MainMemory()
{
}

// parameterized constructor
MainMemory ::MainMemory(int cp, string tech_type)
{
    capacity = cp;
    technologyType = tech_type;
}

// setter
void MainMemory ::set(int cp, string tech_type)
{
    capacity = cp;
    technologyType = tech_type;
}

// getters
int MainMemory ::getCapacity()
{
    return capacity;
}

string MainMemory ::getTechnologyType()
{
    return technologyType;
}
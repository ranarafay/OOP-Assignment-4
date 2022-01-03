/*
Rao Muhammad Rafay
P200636
A
*/

#include "pch.h"
#include "Port.h"
#include <iostream>
#include <sstream>
using namespace std;

// default constructor
Port ::Port(){}

// parameterized constructor
Port ::Port(string t, int br)
{
    type = t;
    baud_rate = br;
}

// setter
void Port :: set(string t, int br)
{
    type = t;
    baud_rate = br;
}

// getters
string Port ::getType()
{
    return type;
}

int Port ::getBaudRate()
{
    return baud_rate;
}
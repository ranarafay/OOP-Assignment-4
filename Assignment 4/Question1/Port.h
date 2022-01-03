/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef PORT_H
#define PORT_H

#include <iostream>
#include <sstream>
using namespace std;

class Port
{
    // private:

    string type;
    int baud_rate;

public:
    // default constructor
    Port();

    // parameterized constructor
    Port(string, int);

    // setter
    void set(string, int);

    // getters
    string getType();

    int getBaudRate();
};

#endif
/*
Rao Muhammad Rafay
P200636
A
*/

#include "pch.h"
#include "MotherBoard.h"
#include <iostream>
#include <sstream>
using namespace std;

// default constructor
MotherBoard ::MotherBoard(){}

// parameterized constructor
MotherBoard ::MotherBoard(int cp, string tech_type, string t, int br)
{
    // for Port

    int l;
    cout << "How many ports you want to enter: " << endl;
    cin >> l;
    len = l;
    ports = new Port[len];

    // initialize 1st object of array from arguments
    ports[0].set(t, br);

    for (int i = 1; i <= len + 1; i++)
    {
        string t;
        int br;

        cout << "For Port # " << i << endl;

        cout << "Type: ";
        cin >> t;
        cout << "Baudrate: ";
        cin >> br;

        ports[i].set(t, br);
    }

    // for port
    setPort(ports);

    // for MainMemory
    mm.set(cp, tech_type);
    setmm(mm);
}

// setters
void MotherBoard :: setPort(Port *obj)
{
    ports = obj;
}

void MotherBoard :: setmm(MainMemory obj)
{
    mm = obj;
}

void MotherBoard ::set(int cp, string tech_type, string t, int br)
{
    // for Port

    int l;
    cout << "How many ports you want to enter: " << endl;
    cin >> l;
    len = l;
    ports = new Port[len];

    // initialize 1st object of array from arguments
    ports[0].set(t, br);

    for (int i = 1; i <= len + 1; i++)
    {
        string t;
        int br;

        cout << "For Port # " << i << endl;

        cout << "Type: ";
        cin >> t;
        cout << "Baudrate: ";
        cin >> br;

        ports[i].set(t, br);
    }

    // for port
    setPort(ports);

    // for MainMemory
    mm.set(cp, tech_type);
    setmm(mm);
}

// getter
Port* MotherBoard ::getPort()
{
    return ports;
}

MainMemory MotherBoard ::getMainMemory()
{
    return mm;
}

int MotherBoard ::getlen()
{
    return len;
}

MotherBoard ::~MotherBoard()
{
    // to destroy part
    delete ports;
}
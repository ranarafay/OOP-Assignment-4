/*
Rao Muhammad Rafay
P200636
A
*/

#include "Shop.h"
#include <iostream>
#include <sstream>
using namespace std;

// setter
void Shop :: setcomp(Computer *obj)
{
    comp = obj;
}

// getter
Computer* Shop ::getcomp()
{
    return comp;
}

void Shop ::manufactureComputer()
{

    int l;
    cout << "Enter number of computers you want to Manufacture: ";
    cin >> l;
    len = l;
    cout << endl;

    comp = new Computer[len];

    for (int i = 0; i < len; i++)
    {
        // physical memory
        int pm_capacity;

        // for mother board
        int mm_capacity; // for main memory
        string techtype;
        string type; // for port
        int baudrate;

        // for CPU
        int NoOfAdders; // for ALU
        int NoOfSubtractor;
        int NoOfRegisters;
        int sizeOfRegisters;

        float clock; // for CU

        // taking necessary specifications from user
        cout << "Enter details for " << i + 1 << " Computer: " << endl;

        cout << "PHYSICAL MEMORY: " << endl;
        cout << "\n";
        cout << "Enter the Capacity: ";
        cin >> pm_capacity;

        cout << "MOTHER BOARD: " << endl;
        cout << "\n";
        cout << "Enter the Capacity: "; // for main memory
        cin >> mm_capacity;
        cout << endl;
        cout << "Enter the Technology Type: ";
        cin >> techtype; // for port
        cout << endl;
        cout << "Enter the Type: ";
        cin >> type;
        cout << endl;
        cout << "Enter the Baudrate: ";
        cin >> baudrate;
        cout << endl;

        cout << "CPU: " << endl;
        cout << "\n";
        cout << "Enter the Number Of Adders: "; // for ALU
        cin >> mm_capacity;
        cout << endl;
        cout << "Enter the Number Of Subtractors: ";
        cin >> techtype;
        cout << endl;
        cout << "Enter the Number Of Registers: ";
        cin >> type;
        cout << endl;
        cout << "Enter the Size Of Registers: ";
        cin >> baudrate;
        cout << endl;
        cout << "Enter the Clock: "; // for CU
        cin >> clock;
        cout << endl;

        // storing in dynamic array pointing to computer
        comp[i].set(pm_capacity, mm_capacity, techtype, type, baudrate, NoOfAdders, NoOfSubtractor, NoOfRegisters, sizeOfRegisters, clock);
    }
    setcomp(comp);
}

// function to show list of computers manufactured
void Shop :: viewList()
{
    for (int i = 0; i < len; i++)
    {
        // temporaryu istantiation for using in this scope
        Computer *obj;
        obj = getcomp();

        cout << "Showing details of Manufactured Computer # " << i + 1;
        cout << "\n"
             << endl;

        cout << "PHYSICAL MEMORY: "; // physical memory
        cout << "\n"
             << endl;
        cout << "Capacity: " << obj->getPhysicalMemory().getCapacity() << endl;

        cout << "MOTHER BOARD: "; // mother board
        cout << "\n"
             << endl;
        cout << "Capacity: " << obj->getMotherBoard().getMainMemory().getCapacity() << endl; // main memory
        cout << "Technology Type: " << obj->getMotherBoard().getMainMemory().getTechnologyType() << endl;
        if (obj->getMotherBoard().getlen() > 1) // for port
        {
            for (int i = 0; i < obj->getMotherBoard().getlen(); i++)
            {
                cout << "Port # " << i + 1 << ": " << endl;
                cout << "Type: " << (obj->getMotherBoard().getPort())[i].getType() << endl;
                cout << "Baudrate: " << (obj->getMotherBoard().getPort())[i].getBaudRate() << endl;
            }
        }
        else
        {
            cout << "Port: " << endl;
            cout << "Type: " << (obj->getMotherBoard().getPort())[i].getType() << endl;
            cout << "Baudrate: " << (obj->getMotherBoard().getPort())[i].getBaudRate() << endl;
        }

        cout << "CPU: "; // cpu
        cout << "\n"
             << endl;
        cout << "No Of Adders: " << obj->getCPU().getAlu().getNoOfAdders() << endl; // alu
        cout << "No Of Subtractors: " << obj->getCPU().getAlu().getNoOfSubtractors() << endl;
        cout << "No Of Registers: " << obj->getCPU().getAlu().getNoOfRegisters() << endl;
        cout << "Size Of Registers: " << obj->getCPU().getAlu().getsizeOfRegisters() << endl;
        cout << "Clock: " << obj->getCPU().getCu().getClock() << endl;
    }
}

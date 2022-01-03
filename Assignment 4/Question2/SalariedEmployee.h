/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "Employee.h"

#include <iostream>
#include <sstream>
using namespace std;


// Inheritance

class SalariedEmployee : public Employee
{
    // private:

    int MonthlySalary;

public:
    // setter
    void setMonthlySalary(int);

    // getter
    int getMonthlySalary();

    string showDetails();
};

#endif

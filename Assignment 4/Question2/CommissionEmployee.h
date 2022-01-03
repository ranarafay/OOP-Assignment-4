/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef COMMISSION_H
#define COMMISSION_H
#include "Employee.h"

#include <iostream>
#include <sstream>
using namespace std;

class CommissionEmployee : public Employee
{
    // private:
    int GrossSales;
    int BaseSalary;
    float TotalSalary;

public:
    // setters
    void setGrossSales(int);

    void setBaseSalary(int);

    // getters
    int getGrossSales();

    int getBaseSalary();

    float getTotalSalary();

    // function to calculate salary
    void calculateSalary();

    // function
    string showDetails();
};

#endif
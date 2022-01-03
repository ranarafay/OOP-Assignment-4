/*
Rao Muhammad Rafay
P200636
A
*/

#include "CommissionEmployee.h"
#include <iostream>
#include <sstream>
using namespace std;

// setters
void CommissionEmployee ::setGrossSales(int gs)
{
    // condition for gross sales
    if (gs < 0)
    {
        cout << "Error! Gross Sales must be positive" << endl;
    }

    else
    {
        GrossSales = gs;
    }
}

void CommissionEmployee :: setBaseSalary(int bs)
{
    // condition for base salary
    if (bs <= 20000)
    {
        cout << "Error! Base Salary must be above 20000" << endl;
    }

    else
    {
        BaseSalary = bs;
    }
}

// getters
int CommissionEmployee :: getGrossSales()
{
    return GrossSales;
}

int CommissionEmployee :: getBaseSalary()
{
    return BaseSalary;
}

float CommissionEmployee :: getTotalSalary()
{
    return TotalSalary;
}

// function to calculate salary
void CommissionEmployee :: calculateSalary()
{
    if (GrossSales > 100000)
    {
        TotalSalary = BaseSalary + (GrossSales * 0.015);
    }
    else
    {
        cout << "No Commision" << endl;
    }
}

// function
string CommissionEmployee :: showDetails()
{
    string fstr;
    fstr = Employee ::showDetails();

    return fstr;
}
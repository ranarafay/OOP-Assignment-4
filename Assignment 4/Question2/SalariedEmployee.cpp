/*
Rao Muhammad Rafay
P200636
A
*/

#include "SalariedEmployee.h"
#include <iostream>
#include <sstream>
using namespace std;

void SalariedEmployee :: setMonthlySalary(int sal)
{
    // condition for salary
    if (sal < 30000)
    {
        cout << "Error! Salary must be above 30000" << endl;
    }
    else
    {
        MonthlySalary = sal;
    }
}

// getter
int SalariedEmployee :: getMonthlySalary()
{
    return MonthlySalary;
}

string SalariedEmployee :: showDetails()
{
    // using "stringstream" class for conversion from other data types to string
    string str;

    stringstream ss;
    ss << MonthlySalary;
    ss >> str;

    string fstr;

    fstr = EmployeeId + "," + Name + "," + str + "," + object.showDetails();

    return fstr;
}
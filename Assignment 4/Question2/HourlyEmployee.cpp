/*
Rao Muhammad Rafay
P200636
A
*/

#include "HourlyEmployee.h"
#include <iostream>
#include <sstream>
using namespace std;

// setters
void HourlyEmployee :: setNoOfHours(int noh)
{
    if (noh >= 30)
    {
        NoOfHours = noh;
    }

    else
    {
        cout << "Error! No of Hours must be atleast 30" << endl;
    }
}

void HourlyEmployee :: setHourlyRate(int hr)
{
    if (hr >= 150)
    {
        HourlyRate = hr;
    }

    else
    {
        cout << "Error! Hourly Rate must be atleast 150" << endl;
    }
}

// getters
int HourlyEmployee :: getNoOfHours()
{
    return NoOfHours;
}

int HourlyEmployee :: getHourlyRate()
{
    return HourlyRate;
}

int HourlyEmployee :: getTotalSalary()
{
    return TotalSalary;
}

// funtion to calculate salary
void HourlyEmployee :: calculateSalary()
{
    TotalSalary = NoOfHours * HourlyRate;
}

// funtion
string HourlyEmployee :: showDetails()
{
    // using "stringstream" class for conversion from other data types to string
    string str;

    stringstream ss;
    ss << TotalSalary;
    ss >> str;

    string fstr;
    fstr = EmployeeId + "," + Name + "," + str + "," + object.showDetails();

    return fstr;
}
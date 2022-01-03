/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"

class HourlyEmployee : public Employee
{
    // private:
    int NoOfHours;
    int HourlyRate;
    int TotalSalary;

public:
    // setters
    void setNoOfHours(int);

    void setHourlyRate(int);

    // getters
    int getNoOfHours();

    int getHourlyRate();

    int getTotalSalary();

    // funtion to calculate salary
    void calculateSalary();

    // funtion
    string showDetails();
};

#endif
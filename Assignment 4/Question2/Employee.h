/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Project.h"

#include <iostream>
#include <sstream>
using namespace std;

// "Employee" class will be using Aggregrated with "Project"
// Base Class
class Employee
{
protected:
    string EmployeeId;
    string Name;
    Project object;

public:
    // setters
    void setEmployeeId(string);

    void setName(string);

    void setProject(Project);

    // getters
    string getEmployeeId();

    string getName();

    // function
    string showDetails();
};

#endif
/*
Rao Muhammad Rafay
P200636
A
*/

#include "Employee.h"
#include <iostream>
#include <sstream>
using namespace std;

// setters
void Employee ::setEmployeeId(string id)
{
    int num;
    num = stoi(id);

    // condition for id
    if (num < 1)
    {
        cout << "Error! ID must be greater than 1" << endl;
    }
    else
    {
        EmployeeId = id;
    }
}

void Employee ::setName(string n)
{
    Name = n;
}

void Employee ::setProject(Project obj)
{
    object = obj;
}

// getters
string Employee ::getEmployeeId()
{
    return EmployeeId;
}

string Employee ::getName()
{
    return Name;
}

// function
string Employee ::showDetails()
{
    string str1, str2, fstr;
    str1 = EmployeeId + "," + Name + ",";

    str2 = object.showDetails();

    fstr = str1 + str2;

    return fstr;
}

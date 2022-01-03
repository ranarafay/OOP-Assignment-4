/*
Rao Muhammad Rafay
P200636
A
*/

#include "Project.h"
#include <iostream>
#include <sstream>
using namespace std;

// non parameterized / deafualt constructor
Project ::Project(){}

// setter
void Project ::setProjectId(int id)
{
    ProjectId = id;
}

void Project ::setProjectDetails(string det)
{
    ProjectDetails = det;
}

// getters
int Project ::getProjectId()
{
    return ProjectId;
}

string Project ::getProjectDetails()
{
    return ProjectDetails;
}

// function show
string Project ::showDetails()
{
    // using "stringstream" class for conversion from other data types to string
    string str;

    stringstream ss;
    ss << ProjectId;
    ss >> str;

    string fstr;

    fstr = str + "," + ProjectDetails;

    return fstr;
}
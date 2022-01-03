/*
Rao Muhammad Rafay
P200636
A
*/

#ifndef PROJECT_H
#define PROJECT_H

#include <iostream>
#include <sstream>
using namespace std;

class Project
{
    // private:
    int ProjectId;
    string ProjectDetails;

public:
    // non parameterized / deafualt constructor
    Project();

    // setter
    void setProjectId(int);

    void setProjectDetails(string);

    // getters
    int getProjectId();

    string getProjectDetails();

    // function show
    string showDetails();
};

#endif
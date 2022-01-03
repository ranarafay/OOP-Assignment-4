/*
Rao Muhammad Rafay
P200636
A
*/

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
    Project() {}

    // setter
    void setProjectId(int id)
    {
        ProjectId = id;
    }

    void setProjectDetails(string det)
    {
        ProjectDetails = det;
    }

    // getters
    int getProjectId()
    {
        return ProjectId;
    }

    string getProjectDetails()
    {
        return ProjectDetails;
    }

    // function show
    string showDetails()
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
};

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
    void setEmployeeId(string id)
    {
        int num;
        num = stoi(id);

        // condition for id
        if (num >= 1)
        {
            EmployeeId = id;
        }
    }

    void setName(string n)
    {
        Name = n;
    }

    void setProject(Project obj)
    {
        object = obj;
    }

    // getters
    string getEmployeeId()
    {
        return EmployeeId;
    }

    string getName()
    {
        return Name;
    }

    // function
    string showDetails()
    {
        string str1, str2, fstr;
        str1 = EmployeeId + "," + Name + ",";

        str2 = object.showDetails();

        fstr = str1 + str2;

        return fstr;
    }
};

// Inheritance

class SalariedEmployee : public Employee
{
    // private:

    int MonthlySalary;

public:
    // setter
    void setMonthlySalary(int sal)
    {
        // condition for salary
        if (sal >= 30000)
        {
            MonthlySalary = sal;
        }
    }

    // getter
    int getMonthlySalary()
    {
        return MonthlySalary;
    }

    string showDetails()
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
};

class CommissionEmployee : public Employee
{
    // private:
    int GrossSales;
    int BaseSalary;
    float TotalSalary;

public:
    // setters
    void setGrossSales(int gs)
    {
        // condition for gross sales
        if (gs >= 0)
        {
            GrossSales = gs;
        }
    }

    void setBaseSalary(int bs)
    {
        // condition for base salary
        if (bs > 20000)
        {
            BaseSalary = bs;
        }
    }

    // getters
    int getGrossSales()
    {
        return GrossSales;
    }

    int getBaseSalary()
    {
        return BaseSalary;
    }

    float getTotalSalary()
    {
        return TotalSalary;
    }

    // function to calculate salary
    void calculateSalary()
    {
        if (GrossSales > 100000)
        {
            TotalSalary = BaseSalary + (GrossSales * 0.015);
        }
        else
        {
            TotalSalary = BaseSalary;
        }
    }

    // function
    string showDetails()
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
};

class HourlyEmployee : public Employee
{
    // private:
    int NoOfHours;
    int HourlyRate;
    int TotalSalary;

public:
    // setters
    void setNoOfHours(int noh)
    {
        if (noh >= 30)
        {
            NoOfHours = noh;
        }
    }

    void setHourlyRate(int hr)
    {
        if (hr >= 150)
        {
            HourlyRate = hr;
        }
    }

    // getters
    int getNoOfHours()
    {
        return NoOfHours;
    }

    int getHourlyRate()
    {
        return HourlyRate;
    }

    int getTotalSalary()
    {
        return TotalSalary;
    }

    // funtion to calculate salary
    void calculateSalary()
    {
        TotalSalary = NoOfHours * HourlyRate;
    }

    // funtion
    string showDetails()
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
};
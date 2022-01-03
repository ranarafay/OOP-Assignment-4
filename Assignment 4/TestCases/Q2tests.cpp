//include your respective files over here
#include "Project.cpp"
#include "Employee.cpp"
#include "HourlyEmployee.cpp"
#include "CommissionEmployee.cpp"
#include "SalariedEmployee.cpp"
#include <gtest/gtest.h>
using namespace std;

//Test for the getters and setters in the Project class
TEST(Project_Class, Getters_Setters)
{
    Project obj;
    obj.setProjectId(5);
    obj.setProjectDetails("Student Learning And Teaching Environment");
    int id = obj.getProjectId();
    string details = obj.getProjectDetails();
    ASSERT_EQ(id, 5);
    ASSERT_EQ(details, "Student Learning And Teaching Environment");
}

//Test for ShowDetails function in the Project Class
TEST(Project_Class, ShowDetails)
{
    Project obj;
    obj.setProjectId(10);
    obj.setProjectDetails("FLEX");
    string details = obj.showDetails();
    ASSERT_EQ(details, "10,FLEX");
}

//Test for the getters and setters in the Employee class
TEST(Employee_Class, Getters_Setters)
{
    Employee obj;
    obj.setEmployeeId("31");
    obj.setName("Steve Jobs");
    string id = obj.getEmployeeId();
    string name = obj.getName();
    ASSERT_EQ(id, "31");
    ASSERT_EQ(name, "Steve Jobs");
}

//Test for ShowDetails function in the Employee Class
TEST(Employee_Class, ShowDetails)
{
    Employee obj;
    obj.setEmployeeId("19");
    obj.setName("Elon Musk");
    Project project;
    project.setProjectId(10);
    project.setProjectDetails("User Interface");
    //Using a setter for the Project obj in employee class
    obj.setProject(project);
    string details = obj.showDetails();
    ASSERT_EQ(details, "19,Elon Musk,10,User Interface");
}

//Test for the getters and setters in the SalariedEmployee class
TEST(SalariedEmployee_Class, Getters_Setters)
{
    SalariedEmployee obj;
    obj.setMonthlySalary(100000);
    int salary = obj.getMonthlySalary();
    ASSERT_EQ(salary, 100000);
    obj.setMonthlySalary(29999);
    salary = obj.getMonthlySalary();
    ASSERT_EQ(salary, 100000);
}

//Test for ShowDetails function in the SalariedEmployee Class
TEST(SalariedEmployee_Class, ShowDetails)
{
    SalariedEmployee obj;
    obj.setEmployeeId("10");
    obj.setName("Mark Zuckerberg");
    obj.setMonthlySalary(100000);
    Project project;
    project.setProjectId(15);
    project.setProjectDetails("Network Architecture");
    //Using a setter for the Project obj in employee class
    obj.setProject(project);
    string details = obj.showDetails();
    ASSERT_EQ(details, "10,Mark Zuckerberg,100000,15,Network Architecture");
}

//Test for the getters and setters in the CommissionEmployee class
TEST(CommissionEmployee_Class, Getters_Setters)
{
    CommissionEmployee obj;
    obj.setGrossSales(10000);
    int grossSales = obj.getGrossSales();
    obj.setBaseSalary(50000);
    int baseSalary = obj.getBaseSalary();
    ASSERT_EQ(grossSales, 10000);
    ASSERT_EQ(baseSalary, 50000);
    obj.setGrossSales(-1);
    obj.setBaseSalary(19999);
    grossSales = obj.getGrossSales();
    baseSalary = obj.getBaseSalary();
    ASSERT_EQ(baseSalary, 50000);
    ASSERT_EQ(grossSales, 10000);
}

//Test for ShowDetails function in the CommissionEmployee Class
TEST(CommissionEmployee_Class, ShowDetails)
{
    CommissionEmployee obj;
    obj.setEmployeeId("11");
    obj.setName("Bill Gates");
    obj.setBaseSalary(40000);
    obj.setGrossSales(10000);
    obj.calculateSalary();
    Project project;
    project.setProjectId(23);
    project.setProjectDetails("Database Administration");
    //Using a setter for the Project obj in employee class
    obj.setProject(project);
    string details = obj.showDetails();
    ASSERT_EQ(details, "11,Bill Gates,40000,23,Database Administration");
}

//You can choose any one of these next two TestCases depending on your implementation

//Test for TotalSalary calculations in the CommissionEmployee Class
TEST(CommissionEmployee_Class, CalculateSalary1)
{
    CommissionEmployee obj;
    obj.setBaseSalary(50000);
    obj.setGrossSales(100001);
    obj.calculateSalary();
    float totalSalaryExpected = 50000 + (100001 * 0.015);
    float totalSalary = obj.getTotalSalary();
    ASSERT_FLOAT_EQ(totalSalary, totalSalaryExpected);
    obj.setGrossSales(99999);
    ASSERT_FLOAT_EQ(totalSalary, totalSalaryExpected);
}

//Test for TotalSalary calculations in the CommissionEmployee Class
TEST(CommissionEmployee_Class, CalculateSalary2)
{
    CommissionEmployee obj;
    obj.setBaseSalary(50000);
    obj.setGrossSales(100001);
    obj.calculateSalary();
    float totalSalaryExpected = 50000 + (100001 * 0.015);
    float totalSalary = obj.getTotalSalary();
    ASSERT_FLOAT_EQ(totalSalary, totalSalaryExpected);
    obj.setGrossSales(99999);
    obj.calculateSalary();
    totalSalary = obj.getTotalSalary();
    ASSERT_FLOAT_EQ(totalSalary, obj.getBaseSalary());
}


//Test for the getters and setters in the HourlyEmployee class
TEST(HourlyEmployee_Class, Getters_Setters)
{
    HourlyEmployee obj;
    obj.setHourlyRate(300);
    int hourlyRate = obj.getHourlyRate();
    obj.setNoOfHours(150);
    int noOfHours = obj.getNoOfHours();
    ASSERT_EQ(hourlyRate, 300);
    ASSERT_EQ(noOfHours, 150);
    obj.setHourlyRate(149);
    obj.setNoOfHours(29);
    hourlyRate = obj.getHourlyRate();
    noOfHours = obj.getNoOfHours();
    ASSERT_EQ(hourlyRate, 300);
    ASSERT_EQ(noOfHours, 150);
}

//Test for ShowDetails function in the HourlyEmployee Class
TEST(HourlyEmployee_Class, ShowDetails)
{
    HourlyEmployee obj;
    obj.setEmployeeId("12");
    obj.setName("Linus Torvalds");
    obj.setHourlyRate(300);
    obj.setNoOfHours(100);
    obj.calculateSalary();
    Project project;
    project.setProjectId(32);
    project.setProjectDetails("Operating Systems");
    //Using a setter for the Project obj in employee class
    obj.setProject(project);
    string details = obj.showDetails();
    ASSERT_EQ(details, "12,Linus Torvalds,30000,32,Operating Systems");
}

//Test for TotalSalary calculations in the HourlyEmployee Class
TEST(HourlyEmployee_Class, CalculateSalary)
{
    HourlyEmployee obj;
    obj.setHourlyRate(310);
    obj.setNoOfHours(120);
    obj.calculateSalary();
    int totalSalaryExpected = 310 * 120;
    int totalSalary = obj.getTotalSalary();
    ASSERT_EQ(totalSalary, totalSalaryExpected);
}

int main(int argc, char **argv)
{

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
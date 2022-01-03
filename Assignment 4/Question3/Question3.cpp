/*
Rao Muhammad Rafay
P200636
A
*/

#include <iostream>
using namespace std;

// class date and time for order
class DateTime
{
    // for date
    int Day;
    int Month;
    int Year;

    // for time
    int Hours;
    int Minutes;
    string TimeDef; // am or pm

public:
    // setters
    // for date
    void setDate()
    {
        cout << "Input Date (day, month, year) respectively: " << endl;
        cin >> Day;
        cin >> Month;
        cin >> Year;
    }

    // for time
    void setTime()
    {
        cout << "Input Time (hours, minutes, timedef(am/pm)) respectively: " << endl;
        cin >> Hours;
        cin >> Minutes;
        cin >> TimeDef;
    }

    // getters
    // for date
    int getDay()
    {
        return Day;
    }

    int getMonth()
    {
        return Month;
    }

    int getYear()
    {
        return Year;
    }

    // for time
    int getHours()
    {
        return Hours;
    }

    int getMinutes()
    {
        return Minutes;
    }

    string getTimeDef()
    {
        return TimeDef;
    }
};

// class order for storing order
class Order
{
    string Name;
    int PhoneNo;
    DateTime datetime;
    int NoOfOrders;

public:

    void setOrder(string n, int pn, DateTime dt)
    {
        Name = n;
        PhoneNo = pn;
        datetime = dt;
    }

    void PlaceOrder()
    {
        cout << "How many orders are?";
        cin >> NoOfOrders;
        cout << endl;

        Order *orders;
        orders = new Order[NoOfOrders];

        for (int i = 0; i < NoOfOrders; i++)
        {
            DateTime temp;

            cout << "Enter order #" << i+1 << endl;
            // for setting up date and time
            temp.setDate();
            temp.setTime();

            // getting information
            string name;
            int phno;
            cout << "Input customer's name? ";
            cin >> name;
            cout << endl;
            cout << "Input costumer's Phone No: ";
            cin >> phno;
            cout << endl;

            orders[i].setOrder(name, phno, temp);
        }
    }
};

// System class
class RestuarantSystem
{
    string Status;
    float TotalBill;
    float GTotal;
    Order orders;

public:

    // setter
    void setTotalBill(int tb)
    {
        TotalBill = tb;
    }

    void calculateGTotal()
    {
        GTotal = TotalBill + (0.05 * TotalBill);
    }

    void showPlacedOrders()
    {
    }
};

// Menu
class Menu
{
protected:
    int Id;
    string Name;
    float price;
};

// class sandwich for MainCouse
class SandWich
{
};

// class sandwich for MainCouse
class Pizza
{
};

// Main cource inherited from menu
class MainCourse : public Menu
{
    SandWich sandwich;
    Pizza pizza;
};

int main()
{
    
    return 0;
}

/*
Dalibor Cuturic
Assignments 1 Week 2 Day 1
*/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int service_size = 4;
const int part_size = 5;
const int pay_meth_size = 5;
//*********************************************************************
class Date
{
private:
    int month, day, year;

public:
    Date();
    Date(int, int, int);
    ~Date() {}
    void setDay(int);
    void setMonth(int);
    void setYear(int);
    int getYear();
    int getMonth();
    int getDay();
    void showDate();
};
Date::Date()
{
    // Constructor Initialize variables.
    month = 0, day = 0, year = 0;
}
Date::Date(int Month, int Day, int Year)
{
    // Constructor Initialize variables vith values
    month = Month;
    day = Day;
    year = Year;
}
void Date::setYear(int y)
{
    if (y < 2000 || y > 2200)
        cout << "The year is invalid" << endl;
    else
        year = y;
}
void Date::setMonth(int m)
{
    if (m < 1 || m > 13)
        cout << "The month is invalid" << endl;
    else
        month = m;
}
void Date::setDay(int d)
{
    if (d < 1 || d > 31)
        cout << "The day is invalid" << endl;
    else
        day = d;
}
void Date::showDate()
{
    cout << year << "-" << month << "-" << day << endl;
}
int Date::getYear() { return year; }
int Date::getMonth() { return month; }
int Date::getDay() { return day; }

//*********************************************************************
class CarServiceShop
{
public:
    // CarServiceShop();
    //  CarServiceShop(string, string, string, string, float, float);
    ~CarServiceShop() { cout << "Car Service Shop desctructor!" << endl; }
    string payment_method[10];
    string part_type[part_size];
    string services_type[service_size];
    string cust_name[10];

    float part_type_price[part_size];
    float service_type_price[service_size];

    void setName(string, int);
    string getName(int);
    void setPayment(string, int);
    string getPayment(int);

    void setServiceType(string, int);
    string getServiceType(int);
    void setServicePrice(float, int);
    float getServicePrice(int);
    void setPartType(string, int);
    string getPartType(int);
    void setPartPrice(float, int);
    float getPartPrice(int);
};
/*
CarServiceShop::CarServiceShop()
{
    payment_method[10] = "NA";
    part_type[part_size] = "NA";
    services_type[service_size] = "NA";
    cust_name[10] = "NA";

    part_type_price[part_size] = 0;
    service_type_price[service_size] = 0;
}
CarServiceShop::CarServiceShop(string pm, string pt, string st, string cn, float ptp, float stp)
{
    payment_method[10] = pm;
    part_type[part_size] = pt;
    services_type[service_size] = st;
    cust_name[10] = cn;

    part_type_price[part_size] = ptp;
    service_type_price[service_size] = stp;
    cout << pm << " " << pt << " "<< st << " "<< cn << " "<< ptp << " "<< stp << " " << endl ;
}
*/
void CarServiceShop::setName(string name, int i)
{
    cust_name[i] = name;
}

string CarServiceShop::getName(int i)
{
    return cust_name[i];
}

void CarServiceShop::setPayment(string name, int i)
{
    payment_method[i] = name;
}

string CarServiceShop::getPayment(int i)
{
    return payment_method[i];
}

void CarServiceShop::setServiceType(string st, int i)
{
    services_type[i] = st;
}

string CarServiceShop::getServiceType(int i)
{
    return services_type[i];
}

void CarServiceShop::setServicePrice(float stp, int i)
{
    service_type_price[i] = stp;
}

float CarServiceShop::getServicePrice(int i)
{
    return service_type_price[i];
}

void CarServiceShop::setPartType(string pt, int i)
{
    part_type[i] = pt;
}

string CarServiceShop::getPartType(int i)
{
    return part_type[i];
}

void CarServiceShop::setPartPrice(float ptp, int i)
{
    part_type_price[i] = ptp;
}

float CarServiceShop::getPartPrice(int i)
{
    return part_type_price[i];
}

//*********************************************************************
int main()
{
    int year{0}, month{0}, day{0} ;
    int payment_tot {0}, payment_parts {0}, payment_service {0};
    float service_type_price[service_size] = {2250, 500, 3500, 400};
    float part_type_price[part_size] = {50, 1500, 300, 234, 17};

    string services_type[service_size] = {
        "yearly service",
        "wheel change",
        "brake fluid change",
        "car washing"};

    string part_type[part_size] = {
        "part1",
        "part2",
        "part3",
        "part4",
        "part5"};

    string payment_method[pay_meth_size] = {
        "cash",
        "credit card",
        "debit card",
        "credit",
        "invoice"};

    string name[2] = {"Dalibor1", "Dalibor2"};

    int i = 0;
    CarServiceShop css;

    // Set services
    css.setName(name[0], 0);
    for (i = 0; i < 2; ++i)
    {
        css.setServiceType(services_type[i], i);
        css.setServicePrice(service_type_price[i], i);
        css.setPartType(part_type[i], i);
        css.setPartPrice(part_type_price[i], i);
    }
    css.setPayment(payment_method[i], i);

    // Get services

    cout <<"Customer name: " << css.getName(0) << endl << endl ;
    cout <<"Services:  " << endl;
    for (i = 0; i < 2; ++i)
    {
        cout << css.getServiceType(i) << " price: " << css.getServicePrice(i) << " sek" << endl;
        payment_service += css.getServicePrice(i) ;
    }

    cout <<"\nParts:  " << endl;
     for (i = 0; i < 2; ++i)
    {
        cout << css.getPartType(i) << " price: " << css.getPartPrice(i) << " sek" << endl;
        payment_parts+=css.getPartPrice(i);
    }

    payment_tot = payment_parts + payment_service ;
    cout << "\nPart price: " << payment_parts << endl ;
    cout << "Service price: " << payment_service << endl << endl ;
    cout << "Total price: " << payment_tot << endl ;
    cout << "Payment method: " << css.getPayment(i) << endl << endl ;

    return 0;
}
/*
Dalibor Cuturic
Assignments 1 Week 2 Day 1
Version 2
*/

#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

const int service_size = 4;
const int part_size = 5;
const int pay_meth_size = 5;
//*********************************************************************
class CarServiceShop
{
public:
    // CarServiceShop();
    //  CarServiceShop(string, string, string, string, float, float);
    ~CarServiceShop() { cout << "Car Service Shop destructor!" << endl; }
    string pay_method;
    string part_type[part_size];
    string services_type[service_size];
    string cust_name;
    string date;

    int nbr_parts{0};
    int nbr_service{0};
    float part_type_price[part_size];
    float service_type_price[service_size];

    float tot_service_price{0};
    float tot_part_price{0};

    void setName(string);
    string getName();
    void setPayment(string);
    string getPayment(int);

    void setDate(string);
    string getDate();
    void showServiceType();
    void showPartType();
    void showPayment();
    void showPaymentAll();
    void setServiceType(string, int);
    string getServiceType(int);
    void setServicePrice(float, int);
    float getServicePrice(int);
    void setPartType(string, int);
    string getPartType(int);
    void setPartPrice(float, int);
    float getPartPrice(int);
};
void CarServiceShop::setDate(string name)
{
    date = name;
}

string CarServiceShop::getDate()
{
    return date;
}

void CarServiceShop::showServiceType()
{
    float service_type_price[service_size] = {2250, 500, 3500, 400};
    int choice{0};
    string cname = "";

    string services_type[service_size] = {
        "yearly service",
        "wheel change",
        "brake fluid change",
        "car washing"};

    cout << "Add customer name: " << endl;
    cin >> cname;
    setName(cname);
    cout << "Date: " << endl;
    cin >> cname;
    setDate(cname);
    cout << endl;
    cout << "\nAvaible services: " << endl;

    for (int i = 0; i < service_size; ++i)
    {
        cout << i + 1 << ") " << services_type[i] << " -- price: " << service_type_price[i] << " sek" << endl;
    }

    cout << "\nHow many services? Minimum 2. " << endl;
    cin >> nbr_service;

    while (nbr_service < 2 || nbr_service > 5)
    {
        cout << "\nWrong, Try again! " << endl;
        cout << "\nHow many services? Minimum 2. " << endl;
        cin >> nbr_service;
    }

    for (int i = 0; i < nbr_service; ++i)
    {
        cout << "Add service " << i + 1 << endl;
        cin >> choice;
        setServiceType(services_type[choice - 1], i);
        setServicePrice(service_type_price[choice + -1], i);
        choice++;
    }
    cout << endl;
}

void CarServiceShop::showPartType()
{
    float part_type_price[part_size] = {50, 1500, 300, 234, 17};
    int choice{0};
    string cname = "";

    string part_type[part_size] = {
        "part1",
        "part2",
        "part3",
        "part4",
        "part5"};

    cout << "\nAvaible parts: " << endl;
    for (int i = 0; i < part_size; ++i)
    {
        cout << i + 1 << ") " << part_type[i] << " -- price: " << part_type_price[i] << " sek" << endl;
    }
    cout << "\nHow many parts? Minimum 2. " << endl;
    cin >> nbr_parts;

    while (nbr_parts < 2 || nbr_parts > 5)
    {
        cout << "\nWrong, Try again! " << endl;
        cout << "\nHow many services? Minimum 2. " << endl;
        cin >> nbr_parts;
    }

    for (int i = 0; i < nbr_parts; ++i)
    {
        cout << "Add parts " << i + 1 << endl;
        cin >> choice;
        setPartType(part_type[choice - 1], i);
        setPartPrice(part_type_price[choice + -1], i);
        choice++;
    }
    cout << endl;
}

void CarServiceShop::setName(string name)
{
    cust_name = name;
}

string CarServiceShop::getName()
{
    return cust_name;
}

void CarServiceShop::setPayment(string name)
{
    pay_method = name;
}

string CarServiceShop::getPayment(int i)
{
    return pay_method;
}

void CarServiceShop::showPayment()
{
    int choice{0};
    string payment_method[pay_meth_size] = {
        "cash",
        "credit card",
        "debit card",
        "credit",
        "invoice"};

    cout << "Choose payment method: " << endl;
    for (int i = 0; i < pay_meth_size; ++i)
    {
        cout << i + 1 << ") " << payment_method[i] << endl;
    }

    cin >> choice;
    setPayment(payment_method[choice - 1]);
    cout << endl;
}

void CarServiceShop::showPaymentAll()
{
    cout << "All services: " << endl;
    for (int i = 0; i < nbr_service; ++i)
    {
        cout << i + 1 << ") " << services_type[i] << " -- price: " << service_type_price[i] << " sek" << endl;
        tot_service_price += service_type_price[i];
    }

    cout << endl
         << endl;
    cout << "All parts: " << endl;
    for (int i = 0; i < nbr_parts; ++i)
    {
        cout << i + 1 << ") " << part_type[i] << " -- price: " << part_type_price[i] << " sek" << endl;
        tot_part_price += part_type_price[i];
    }

    cout << "Service price: " << tot_service_price << " sek" << endl;
    cout << "Part price: " << tot_part_price << " sek" << endl;
    cout << "Total price: " << tot_service_price + tot_part_price << " sek" << endl;
    cout << "Payment method: " << pay_method << endl;
    cout << endl;
    cout << "Customer: " << cust_name << endl ;
    cout << "Date: " << date << endl ;
    cout << endl;
    cout << "By, by! "<< endl ;
    cout << endl;
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
    CarServiceShop css;

    css.showServiceType();
    css.showPartType();
    css.showPayment();
    css.showPaymentAll();

    return 0;
}
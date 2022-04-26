/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop class definition
make file
*/

#include "BookShop.h"

void BookShop::setBook()
{
    /*Ask for different book inputs*/
    cout << endl;
    cout << "****************************" << endl;
    cout << "Enter Title Name: " << endl;
    cin.clear();
    cin.ignore();
    getline(cin, *title);

    cout << "Enter Author Name: " << endl;
    getline(cin, *author);

    cout << "Enter Publisher Name: " << endl;
    getline(cin, *publisher);

    cout << "Enter Price: " << endl;
    cin >> *price;
    while (!cin)
    {
        // user didn't input a number
        cin.clear();
        cin.ignore();
        cout << "Input is not number! Try again!!" << endl;
        cout << "Enter Price: " << endl;
        cin >> *price;
    }

    cout << "Enter Number of Copies: " << endl;
    cin >> *stock;
    while (!cin)
    {
        // user didn't input a number
        cin.clear();
        cin.ignore();
        cout << "Input is not number! Try again!!" << endl;
        cout << "Enter Number of Copies: " << endl;
        cin >> *stock;
    }
    cout << endl;
    ;
}
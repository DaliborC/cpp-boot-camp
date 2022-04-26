/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop class definition
make file
*/

#include "BookShop.h"

void BookShop::showOptions()
{
    /*Show all options*/
    string option[6] = {
        "Add a new book",
        "Buy the book",
        "Search for the book",
        "Edit details of the book",
        "Exit",
        "Show All Books"};

    cout << "MENU: " << endl;
    cout << "****************************" << endl;
    for (int i = 1; i <= 6; ++i)
    {
        cout << i << ". " << option[i - 1] << endl;
    }
    cout << endl;
}
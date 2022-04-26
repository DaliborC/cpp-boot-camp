/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop class definition
make file
*/

#include "BookShop.h"

void BookShop::showBooks()
{
    /* Show book info */
    cout << "BOOK INFO: " << endl;
    cout << "****************************" << endl;
    cout << "Title Name: " << *title << endl;
    cout << "Author Name: " << *author << endl;
    cout << "Publisher Name: " << *publisher << endl;
    cout << "Price: " << *price << endl;
    cout << "Number of Copies: " << *stock << endl;
    cout << "****************************" << endl;
    cout << endl;
}
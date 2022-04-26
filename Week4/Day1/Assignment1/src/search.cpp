/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop class definition
make file
*/

#include "BookShop.h"

int BookShop::search(string search_title, string search_auth)
{
    /*If both the title and the author found return 1 otherwise 0*/
    if (search_title == *title && search_auth == *author)
    {
        cout << endl;
        cout << "****************************" << endl;
        cout << "Book Found Successfully." << endl;
        cout << "****************************" << endl;
        cout << endl;
        return 1;
    }
    else
    {
        cout << endl;
        cout << "****************************" << endl;
        cout << "No Searched Book! " << endl;
        cout << "****************************" << endl;
        cout << endl;
        return 0;
    }
}
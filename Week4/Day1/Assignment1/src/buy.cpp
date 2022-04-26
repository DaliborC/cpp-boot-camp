/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop class definition
make file
*/

#include "BookShop.h"

int BookShop::buy(string search_title, string search_auth, int search_stock)
{
    /*If both the title and the author found chech the stock */
    if (search(search_title, search_auth))
    {
        /*Check if enough in the stock */
        if (search_stock <= *stock)
        {
            cout << endl;
            cout << "****************************" << endl;
            cout << "Books Bought Sucessfully! " << endl;
            cout << "Total Amount for " << search_stock << " books is: $ " << search_stock * (*price) << endl;
            cout << "****************************" << endl;
            cout << endl;
            /*Update the stock */
            *stock -= search_stock;
        }
        else
        {
            cout << endl;
            cout << "****************************" << endl;
            cout << "Not available wished number of books in the stock! " << endl;
            cout << "You askes for: " << search_stock << " but only: " << *stock << " avaible!" << endl;
            cout << "****************************" << endl;
            cout << endl;
        }
        return 1;
    }
    return 0;
}
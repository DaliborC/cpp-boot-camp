/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop class definition
make file
*/

#include "BookShop.h"

void BookShop::edit(string search_title, string search_auth)
{
    /*If both the title and the author found, edit the book*/
    if (search(search_title, search_auth))
    {
        setBook();
    }
}
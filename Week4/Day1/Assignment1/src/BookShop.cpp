/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop class definition
make file
*/

#include "BookShop.h"
// #include "buy.cpp"
// #include "edit.cpp"
// #include "search.cpp"
// #include "setBook.cpp"
// #include "showOptions.cpp"

BookShop::~BookShop()
{
    /*Delete all dynamic allocated variables*/
    delete author, title, publisher, price, stock;
    cout << "Destructor deletes all allocated memories! " << endl;
}

BookShop::BookShop()
{
    /*Dynamic allocation of all variables*/
    author = new string{0};
    title = new string{0};
    publisher = new string{0};
    price = new float{0};
    stock = new int{0};
    cout << "Constructor allocate memories! " << endl;
}
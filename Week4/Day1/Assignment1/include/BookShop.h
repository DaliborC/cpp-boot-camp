/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop
header file
make file
*/
#ifndef BOOKSHOP_H
#define BOOKSHOP_H

#include <iostream>
#include <string>
using namespace std;

class BookShop
{
public:
    BookShop();
    ~BookShop();
    void showOptions();           // show all options
    void setBook();               // add a new book
    void edit(string, string);    // edit book: title and author
    int buy(string, string, int); // buy book: book title and author and number of copies
    int search(string, string);   // search: book title and author
    void showBooks();             // show book

private:
    string *title, *author, *publisher;
    float *price;
    int *stock;
};
#endif
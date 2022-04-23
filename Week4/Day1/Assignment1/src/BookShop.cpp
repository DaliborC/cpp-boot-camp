/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop class definition
make file
*/

#include "BookShop.h"

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

void BookShop::edit(string search_title, string search_auth)
{
    /*If both the title and the author found, edit the book*/
    if (search(search_title, search_auth))
    {
        setBook();
    }
}
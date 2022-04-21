/*
Dalibor Cuturic
Mini Project Week 4 Day 1
Book Shop
make file
*/

#include "BookShop.h"

using namespace std;

int main()
{
    int nbrOfBooks{0}, search_retur{0}, search_stock{0};
    string search_auth{0}, search_title{0};

    cout << "Eter a number of books to add: " << endl;
    cin >> nbrOfBooks;
    cout << endl;
    BookShop *book[nbrOfBooks];

    int choice{0}, book_index{0};
    string option[6] = {
        "Add a new book",
        "Buy the book",
        "Search for the book",
        "Edit details of the book",
        "Exit",
        "Show All Books"};

    bool menu = true;
    while (menu)
    {
        cout << "MENU: " << endl;
        cout << "****************************" << endl;
        for (int i = 1; i <= 6; ++i)
        {
            cout << i << ". " << option[i - 1] << endl;
        }
        cout << endl;
        // Read input from user
        cin >> choice;
        // Check max 3 times if invalide input
        int inp{1};
        while (choice < 1 || choice > 6)
        {
            cout << "Invalid input, try again!" << endl;
            cin >> choice;
            inp++;
            if (inp > 2)
            {
                cout << "You have exceeded the maximum number of try. By, by!" << endl;
                exit(1);
            }
        }
        inp = 1;
        switch (choice)
        {
        case 1:
            // Create a new book object and add it in array on position book_index
            cout << endl
                 << endl;
            // Check if there is allocated space in the array for the books
            if (book_index < nbrOfBooks)
                book[book_index] = new BookShop;
            else
            {
                cout << "*************************************************" << endl;
                cout << "ERROR: Limited number of books in array!" << endl;
                cout << "You alocated: " << nbrOfBooks << " but trying to add: " << book_index + 1 << endl;
                cout << "*************************************************" << endl;
                cout << endl;
                break;
            }

            // add info for the book
            book[book_index]->setBook();
            // increase book_index for the next one
            book_index++;
            break;
        case 2:
            // Buy the book
            cout << endl;
            // Search with title and author name first
            cout << "Title Name: " << endl;
            cin >> search_title;
            cout << "Author Name: " << endl;
            cin >> search_auth;
            cout << "Enter Number Of Books to buy: " << endl;
            cin >> search_stock;
            for (int i = 0; i < book_index; ++i)
            {
                // By if book exist and stock avaible
                if (book[i]->buy(search_title, search_auth, search_stock))
                    break;
            }
            break;
        case 3:
            // Search the book
            cout << endl;
            cout << "Title Name: " << endl;
            cin >> search_title;
            cout << "Author Name: " << endl;
            cin.ignore();
            cin >> search_auth;
            for (int i = 0; i < book_index; ++i)
            {
                if (book[i]->search(search_title, search_auth))
                {
                    // Show if exist
                    book[i]->showBooks();
                    break;
                }
                else
                    break;
            }
            break;
        case 4:
            // Edit the book info
            cout << endl;
            cout << "Title Name: " << endl;
            cin.ignore();
            cin >> search_title;
            cout << "Author Name: " << endl;
            cin.ignore();
            cin >> search_auth;
            for (int i = 0; i < book_index; ++i)
                // If exist, edit
                book[i]->edit(search_title, search_auth);
            break;
        case 5:
            // Exit
            cout << endl;
            cout << option[4] << endl;
            cout << "Buy, buy! " << endl;
            cout << endl;
            menu = false;

            for (int i = 0; i < book_index; ++i)
                book[i]->~BookShop();
            // delete[] book;

            break;
        default:
            // Show all books in the shop
            for (int i = 0; i < book_index; ++i)
                if (book[i] != NULL)
                    book[i]->showBooks();
            break;
        }
    }

    return 0;
}
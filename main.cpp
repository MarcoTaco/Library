// this program will act as a library.
// you will be able to insert, delete, or search for a book in a library.

#include <iostream>
#include <string>

#include "Book.h"
#include "Library.h"

using namespace std;

int main()
{
    char choice;

    cout << "Would you like to search, insert, or delete a book (S/I/D)?" << endl;
    cin >> choice;

    if(choice == 'S')
    {
        cout << "Search a book name: " << endl;
    }
    else if(choice == 'I')
    {
        cout << "Insert a book name: " << endl;
    }
    else if(choice == 'D')
    {
        cout << "Delete a book: " << endl;
    }

    return 0;
}

// this program will act as a library.
// you will be able to insert, delete, or search for a book in a library.

#include <iostream>
#include <string.h>
#include <stdlib.h>

#include "Book.h"
#include "Library.h"

using namespace std;

int main()
{
    // declaring the class so I can use it in the main
    Library libr;

    char choice;
    char nameOfBook[40], writer[40], countOfCopies[10];

    cout << "Would you like to search, insert, or delete a book (S/I/D)?" << endl;
    cin >> choice;

    if(choice == 'I')
    {
        cout << "Insert a book name: " << endl;
        cin.getline(nameOfBook, 40);
        cin.getline(writer, 40);
        // atoi converts strings to integers
        libr.insertBook(nameOfBook, writer, atoi(countOfCopies));
    }
    else if(choice == 'D')
    {
        cout << "Delete a book: " << endl;
        cin.getline(nameOfBook, 40);
        libr.deleteBook(nameOfBook);
    }
    else if(choice == 'S')
    {
        cout << "Search for a book: " << endl;
        cin.getline(nameOfBook, 40);

        Book *books;
        books = libr.searchBook(nameOfBook);
        if(books != NULL)
        {
            cout << "Book found. " << books->title << endl;
            cout << books->author << endl;
        }
        else
        {
            cout << "Book not found." << endl;
        }
    }

    return 0;
}

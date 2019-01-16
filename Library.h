#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "Book.h"

class Library
{
public:
    // number of books in the library
    int bookInLibary;
    // the inventory in the library
    Book inventory[50];
    // constructor
    library();
    // this will insert a book
    void insertBook(char bookTitle[], char bookAuthor[], int counting);
    // this will delete a book
    void deleteBook(char bookTitle[]);
    // this will search for a book
    Book *searchBook(char bookName[]);
};

Library::library()
{
    // initializing bookInLibrary
    bookInLibrary = 0;
}

// thought process was to copy whatever I put in as an insert.
void Library::insertBook(char bookTitle[], char bookAuthor[], int counting)
{
    // copying the book title
    strcopy(inventory[bookInLibrary].title, bookTitle);
    //copying the book author
    strcopy(inventory[bookInLibrary].author, bookAuthor);
    
    inventory[bookInLibrary].numOfBooks = counting;
    
    cout << "Thanks for inserting a book in the library." << endl;
    
    // adding the book to the library
    ++bookInLibrary;
}

// thought process was to make a for loop to loop through the array and delete each letter.
void Library::deleteBook(char bookTitle[])
{
    for(int i = 0; i < bookInLibrary; i++)
    {
        delete inventory[i].title;
    }
    cout << "Thanks for deleting the book from the library." << endl;
    
    //deleting the book from the library
    --bookInLibrary;
}

Book Library::*searchBook(char bookName[])
{
    for(int i = 0; i < numInBooks; i++)
    {
        return &inventory[i];
    }
}

#endif // LIBRARY_H_INCLUDED

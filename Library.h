#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED

#include "Book.h"

class Library
{
private:
    // number of books in the library
    int bookInLibary;
    // the inventory in the library
    Book inventory[50];

public:
    // this will insert a book
    void insertBook(char bookTitle[], char bookAuthor[], int counting);
    // this will delete a book
    void deleteBook(char bookTitle[]);
    // this will search for a book
    Book *searchBook(char bookName[]);
};

void Library::insertBook(char bookTitle[], char bookAuthor[], int counting)
{

}

void Library::deleteBook(char bookTitle[])
{

}

Book Library::*searchBook(char bookName[])
{

}

#endif // LIBRARY_H_INCLUDED

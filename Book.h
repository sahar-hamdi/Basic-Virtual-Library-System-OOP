#include <string>
using namespace std;
#include <bits/stdc++.h>

#ifndef ASSIGNMENT_1_OOP_BOOK_H
#define ASSIGNMENT_1_OOP_BOOK_H


class Book {

    // Atrributes:
public:
    string title ;
    string author ;
    int isbn ;
    string publicationYear ;

public:
    // Constructor:
    Book() : isbn(0), publicationYear(0) {}


    // Getters
    string getBookTitle(){
        return title ;
    }

    string getAuthorName(){
        return author ;
    }

    int getBookId(){
        return isbn ;
    }

    string getPublicationYear(){
        return publicationYear ;
    }


    // Methods ;
    void DisplayInfo(){
        cout << "The Book Title is :" << title << endl ;
        cout << "Author's Name: " << author << endl ;
        cout << "Book ID : " << isbn << endl ;
        cout << "The Year of Publication for this Book is : " << publicationYear << endl ;
    }

};


#endif //ASSIGNMENT_1_OOP_BOOK_H

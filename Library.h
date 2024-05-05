#include <vector>
#include "Book.h"
using namespace std ;
#include <string>

#ifndef ASSIGNMENT_1_OOP_LIBRARY_H
#define ASSIGNMENT_1_OOP_LIBRARY_H


class Library {
    vector <Book> catalogue ;

public:
    void add_Book(Book book){
        catalogue.push_back(book) ;
    }

    void remove_Book(int isbn){
        for (auto it = catalogue.begin() ; it != catalogue.end() ; ++it) {
            if(it -> getBookId() == isbn){
                catalogue.erase(it) ;
                break ;
            }
        }
    }

    vector <Book> find_books_by_author(string author) {
        vector<Book> books_found;

        for (auto i : catalogue) {
            if (i.getAuthorName() == author){
                books_found.push_back(i);
            }
        }

        return books_found ;

    }


    vector <Book> find_books_by_year(string publicationYear) {
        vector<Book> books_found;

        for (auto i : catalogue) {
            if (i.getPublicationYear() == publicationYear){
                books_found.push_back(i) ;
            }
        }


        return books_found ;

    }


    void Display_all_Books(){
        cout << "Library Contains those Books: " << endl ;

        for(auto i : catalogue){
            i.DisplayInfo() ;
            cout << endl ;
        }
    }
};


#endif //ASSIGNMENT_1_OOP_LIBRARY_H


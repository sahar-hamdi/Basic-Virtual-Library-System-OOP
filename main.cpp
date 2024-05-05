using namespace std;
#include <bits/stdc++.h>
#include "Book.h"
#include "Library.h"

int main() {
    while (true) {
        Library library;

        cout << "\n\nChoose an option:\n" ;
        cout << "1. Add a new book\n" ;
        cout << "2. Remove a book\n" ;
        cout << "3. Search by author\n" ;
        cout << "4. Search by publication year\n" ;
        cout << "5. Display all books\n" ;
        cout << "6. Exit\n" ;
        cout << "Enter your choice: " ;

        int choice ;
        cin >> choice ;

        switch (choice) {
            case 1: {
                Book new_book ;
                cout << "Enter book title: " ;
                cin >> new_book.title ;
                cout << "Enter book author: " ;
                cin >> new_book.author ;
                cout << "Enter book ISBN: " ;
                cin >> new_book.isbn ;
                cout << "Enter publication year: " ;
                cin >> new_book.publicationYear ;
                library.add_Book(new_book) ;
                break;
            }


            case 2: {
                int isbn ;
                cout << "Enter ISBN of the book to remove: " ;
                cin >> isbn ;
                library.remove_Book(isbn) ;
                break ;
            }


            case 3: {
                string author ;
                cout << "Enter author name to search: " ;
                cin >> author ;
                auto found_books = library.find_books_by_author(author) ;
                cout << "Books by author " << author << ":" << endl ;
                for (const auto& book : found_books) {
                    cout << "Title: " << book.title << ", ISBN: " << book.isbn << ", Year: " << book.publicationYear << endl ;
                }
                break ;
            }


            case 4: {
                string year ;
                cout << "Enter publication year to search: " ;
                cin >> year ;
                auto found_books = library.find_books_by_year(year) ;
                cout << "Books published in year " << year << ":" << endl ;


                for (const auto& book : found_books) {
                    cout << "Title: " << book.title << ", Author: " << book.author << ", ISBN: " << book.isbn << endl ;
                }
                break ;
            }


            case 5:{
                library.Display_all_Books() ;
                break ;
            }


            case 6: {
                cout << "Exiting..." << endl ;

                return 0 ;
            }

            default: {
                cout << "Invalid choice. Please enter a number from 1 to 6. " << endl ;
                break ;
            }
        }
    }

    return 0 ;
}
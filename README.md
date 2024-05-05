# Basic-Virtual-Library-System-OOP
Design and Implementation of a virtual library system using the principles  of Object-Oriented Programming (OOP). The system will allow users to manage a  collection of books and perform operations like adding books, removing books,  and searching for books by various criteria. I used C++ for System Implementation in this Assignment.



I implemented two classes to complete my Library System.

**1. Book Class:** contains information about individual books.

![image](https://github.com/sahar-hamdi/Basic-Virtual-Library-System-OOP/assets/93557883/d87ac99d-823d-4a92-970d-7c6c57d0dd5a)


**Constructor:**
- Book (): Default constructor that initializes ISBN and publication year to 0.

  
**Methods:**
- string getBookTitle(): Returns the title of the book.
- string getAuthorName(): Returns the author's name.
- int getBookId(): Returns the ISBN of the book.
- string getPublicationYear(): Returns the publication year of the book.
- void DisplayInfo(): Displays all information about the book.

**2. Library Class:** manages a collection of Book objects and provides methods.
to interact with them.

![image](https://github.com/sahar-hamdi/Basic-Virtual-Library-System-OOP/assets/93557883/e630fe01-71fe-41d2-8f2f-f1d20dc17448)

**Methods:**

- void add_Book(Book book): Adds a new book to the library.
- void remove_Book(int isbn): Removes a book from the library by ISBN.
- vector<Book> find_books_by_author(string author): Returns a vector of 
books by the specified author.
- vector<Book> find_books_by_year(string publicationYear): Returns a 
vector of books published in the specified year.
- void Display_all_Books(): Displays all books in the library


**Data Structures:**

- The main data structure used in the implementation is the vector from the 
C++ Standard Template Library (STL).
- The Library class utilizes a vector<Book> to store the collection of books in 
the library.
- Each Book object contains attributes such as title, author, ISBN, and 
publication year, which are stored as member variables.




### **User Guide**


**Running the Program:**

- Ensure you have a C++ compiler installed on your system.
- Copy the provided code into separate .cpp files for Library and Book 
classes.
- Compile the program using your C++ compiler.
- Run the compiled executable.


  
### **Using Features:**

- Upon running the program, you'll be presented with a text-based menu.
- Choose an option by entering the corresponding number:
 1. Add a new book.
 2. Remove a book.
 3. Search by author.
 4. Search by publication year.
 5. Display all books.
 6. Exit the program

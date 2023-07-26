/*
Create a class representing a book and overload the '<' operator to compare two books based on their publication years.
*/

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int publicationYear;

public:
    Book(const string& t, int year) : title(t), publicationYear(year) {}

    // Overloading the '<' operator
    bool operator<(const Book& other) {
        return publicationYear < other.publicationYear;
    }

    void display() {
        cout << title << " (" << publicationYear << ")";
    }
};

int main() {
    Book b1("Introduction to C++", 2021);
    Book b2("Data Structures and Algorithms", 2022);
    Book b3("Operating Systems", 2020);

    if (b1 < b2) {
        b1.display();
        cout << " was published before ";
        b2.display();
    } else {
        b2.display();
        cout << " was published before ";
        b1.display();
    }
    cout << endl;

    return 0;
}

/*
This program creates a class Book to represent a book with a title and publication year.
The '<' operator is overloaded to compare two books based on their publication years.
The display() function is used to print which book was published first.

*/



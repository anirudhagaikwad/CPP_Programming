/*
Create a media library in C++ with a base class MediaItem and two derived classes Book and Movie.
Each media item has a title and a year of release. Implement a virtual function display() in the MediaItem class, and
override it in the derived classes to display specific details of a book and a movie.

Input:
MediaItem* item1 = new Book("The Great Gatsby", 1925, "F. Scott Fitzgerald");
item1->display();
Output:
Title: The Great Gatsby
Author: F. Scott Fitzgerald
Year of Release: 1925

Input:
MediaItem* item2 = new Movie("Inception", 2010, "Christopher Nolan");
item2->display();
Output:
Title: Inception
Director: Christopher Nolan
Year of Release: 2010

*/

#include <iostream>
#include <string>
using namespace std;

// Base class representing a Media Item
class MediaItem {
protected:
    string title;
    int year;
public:
    // Constructor for the MediaItem class
    MediaItem(string _title, int _year) : title(_title), year(_year) {}

    // Virtual method to display information about the media item
    virtual void display() const {
        cout << "Title: " << title << "\nYear of Release: " << year << endl;
    }
};

// Derived class representing a Book, inheriting from MediaItem
class Book : public MediaItem {
private:
    string author;
public:
    // Constructor for the Book class, which also calls the constructor of the base class (MediaItem)
    Book(string _title, int _year, string _author) : MediaItem(_title, _year), author(_author) {}

    // Override the display method to include the author's information
    void display() const override {
        cout << "Title: " << title << "\nAuthor: " << author << "\nYear of Release: " << year << endl;
    }
};

// Derived class representing a Movie, inheriting from MediaItem
class Movie : public MediaItem {
private:
    string director;
public:
    // Constructor for the Movie class, which also calls the constructor of the base class (MediaItem)
    Movie(string _title, int _year, string _director) : MediaItem(_title, _year), director(_director) {}

    // Override the display method to include the director's information
    void display() const override {
        cout << "Title: " << title << "\nDirector: " << director << "\nYear of Release: " << year << endl;
    }
};

int main() {
    // Creating objects of the derived classes (Book and Movie) using base class pointers (MediaItem*)
    MediaItem* item1 = new Book("The Great Gatsby", 1925, "F. Scott Fitzgerald");
    MediaItem* item2 = new Movie("Inception", 2010, "Christopher Nolan");

    // Calling the display method of the Book class (will override the display method in MediaItem)
    item1->display();

    // Calling the display method of the Movie class (will override the display method in MediaItem)
    item2->display();

    // Cleaning up the allocated memory.
    delete item1;
    delete item2;
    return 0;
}

/*
This program demonstrates member function overriding in C++ using the "Media Item Hierarchy" example. The program defines a base class MediaItem, representing a generic media item, with attributes title and year. It also has a virtual method display() to display the media item's information.

The program then defines two derived classes: Book and Movie, both inheriting from the MediaItem class. Each derived class has its own attributes (author for Book and director for Movie) and overrides the display() method to include specific information about the derived class.

In the main() function, we create objects of the derived classes (Book and Movie) using the base class pointers (MediaItem*). When we call display() on these objects, it dynamically dispatches the appropriate method based on the actual type of the object. This demonstrates polymorphism, as the base class pointer can point to objects of its derived classes and call the appropriate method.

In this program, the display() method of the Book class displays the book's information, including the author's name, and the display() method of the Movie class displays the movie's information, including the director's name. The member function overriding allows the correct information to be displayed based on the actual type of the object pointed to by the base class pointer.

*/



/*
You are a skilled software engineer working on an ambitious project to develop an advanced inventory management system for a
thriving e-commerce platform. As part of this critical endeavor, you have been assigned the task of creating a class template for
a Pair container to efficiently handle product data.

Input: 1, 3.14
Output: First: PI, Second: 3.14

Input: "Happy", "Joy"
Output: First: Happy, Second: Joy

*/


#include <iostream>
using namespace std;

// Class template 'Pair' represents a container that holds two elements of different data types 'T1' and 'T2'.
template <typename T1, typename T2>
class Pair {
private:
    T1 first;   // First element of type 'T1'
    T2 second;  // Second element of type 'T2'

public:
    // Constructor for 'Pair' class template that initializes the first and second elements.
    Pair(T1 f, T2 s) : first(f), second(s) {}

    // Method 'getFirst' returns the first element of the Pair.
    T1 getFirst() const {
        return first;
    }

    // Method 'getSecond' returns the second element of the Pair.
    T2 getSecond() const {
        return second;
    }
};

int main() {
    // Create a Pair of an integer and a double.
    Pair<string, double> p1("PI", 3.14);
    cout << "First: " << p1.getFirst() << ", Second: " << p1.getSecond() << endl;  // Output: First: 10, Second: 3.14

    // Create a Pair of a string and a character.
    Pair<string, string> p2("Happy", "Joy");
    cout << "First: " << p2.getFirst() << ", Second: " << p2.getSecond() << endl;  // Output: First: Hello, Second: W

    return 0;
}

/*
This C++ program demonstrates the use of a class template for a Pair container.
The 'Pair' class template allows users to create pairs of two different data types.

*/




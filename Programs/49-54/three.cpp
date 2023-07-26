/*
Implement a class representing strings and overload the '+' operator to concatenate two strings.
*/

#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char* str;

public:
    MyString(const char* s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Overloading the '+' operator
    MyString operator+(const MyString& other) {
        char* temp = new char[strlen(str) + strlen(other.str) + 1];
        strcpy(temp, str);
        strcat(temp, other.str);
        MyString result(temp);
        delete[] temp;
        return result;
    }

    void display() {
        cout << str << endl;
    }

    ~MyString() {
        delete[] str;
    }
};

int main() {
    MyString s1("Hello");
    MyString s2(" World");

    MyString result = s1 + s2;
    result.display();

    return 0;
}

/*
This program implements a class MyString to represent strings.
The '+' operator is overloaded to concatenate two strings.
The display() function is used to print the result.
The str memory is dynamically allocated and deallocated in the constructor and destructor.
*/



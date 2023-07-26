/*
Implement a class representing a person and overload the '<<' and '>>' operators for stream insertion and extraction.
*/

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}

    // Overloading the stream insertion '<<' operator
    friend ostream& operator<<(ostream& os, const Person& person) {
        os << "Name: " << person.name << ", Age: " << person.age;
        return os;
    }

    // Overloading the stream extraction '>>' operator
    friend istream& operator>>(istream& is, Person& person) {
        cout << "Enter name: ";
        is >> person.name;
        cout << "Enter age: ";
        is >> person.age;
        return is;
    }
};

int main() {
    Person p;

    cout << "Enter person's details: " << endl;
    cin >> p;

    cout << "Person's Details: " << endl;
    cout << p << endl;

    return 0;
}

/*
This program creates a class Person to represent a person with a name and age.
The '<<' and '>>' operators are overloaded to perform stream insertion and extraction.
The display() function is used to print the person's details after input.

*/


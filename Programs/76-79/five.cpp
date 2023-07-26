/*
Create a C++ program where the hierarchy includes a base class Base with a virtual destructor, an intermediate class
Intermediate inheriting from Base, and a derived class Derived inheriting from Intermediate.
Add destructor to each class, point Base class pointer to the Derived class object.

Input:
Base* ptr = new Derived;
delete ptr;
Output:
Derived class destructor.
Intermediate class destructor.
Base class destructor.

*/

#include <iostream>
using namespace std;

// Base class with a virtual destructor
class Base {
public:
    virtual ~Base() {
        cout << "Base class destructor." << endl;
    }
};

// Intermediate derived class inheriting from Base
class Intermediate : public Base {
public:
    ~Intermediate() override {
        cout << "Intermediate class destructor." << endl;
    }
};

// Derived class inheriting from Intermediate
class Derived : public Intermediate {
public:
    ~Derived() override {
        cout << "Derived class destructor." << endl;
    }
};

int main() {
    Base* ptr = new Derived;
    delete ptr; // Calls the Derived class destructor due to late binding

    return 0;
}

/*

This program demonstrates the use of virtual destructors in C++ with a base class and derived class hierarchy.
The Base class has a virtual destructor, and the Intermediate class inherits from the Base class and overrides the
destructor. The Derived class then inherits from the Intermediate class and also overrides the destructor.
When a Derived object is created and deleted using a Base pointer, the virtual destructor ensures that the correct
destructor is called at runtime, in this case, the Derived class destructor.

*/

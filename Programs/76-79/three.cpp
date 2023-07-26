/*
Create a base class 'Base' with virtual destructor. Override derived class from it as Derived.
Override virtual destructor. Create Base class pointer to point Derived class object and call destructor.

Input:
Base* ptr1 = new Derived;
delete ptr1;

Base* ptr2 = new Derived;
delete ptr2;

Output:
Derived class destructor.
Base class destructor.
Derived class destructor.
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

// Derived class inheriting from Base
class Derived : public Base {
public:
    ~Derived() override {
        cout << "Derived class destructor." << endl;
    }
};

int main() {
    Base* ptr1 = new Derived;
    Base* ptr2 = new Derived;

    delete ptr1; // Calls the Derived class destructor due to late binding
    delete ptr2; // Calls the Derived class destructor due to late binding

    return 0;
}

/*
This program demonstrates the use of virtual destructors in C++ with dynamic memory allocation.
The Base class has a virtual destructor, and the Derived class inherits from the Base class and overrides the destructor.
The program creates two Derived objects using Base pointers and deletes them. The virtual destructor ensures that the
correct destructor is called for each Derived object at runtime, resulting in the Derived class destructor being called
for each object.

*/



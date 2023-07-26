/*
You are given a C++ code that involves base and derived classes.
The code defines a base class Base with a virtual destructor and a derived class Derived. Your task is to explain how the code uses
late binding and virtual destructors to achieve polymorphic behavior during object destruction.
Also, provide a step-by-step explanation of what happens when the main() function is executed, including the order of destructor calls
and the reason behind each call.

Base* ptr = new Derived;
delete ptr;
//Output: Derived class destructor.
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
    Base* ptr = new Derived;
    delete ptr; // Calls the Derived class destructor due to late binding

    return 0;
}

/*
This program demonstrates the use of virtual destructors in C++. The Base class has a virtual destructor, and the Derived class
inherits from the Base class and overrides the destructor. When a Derived object is created and deleted using a Base pointer,
the virtual destructor ensures that the correct destructor is called at runtime, in this case, the Derived class destructor.

*/

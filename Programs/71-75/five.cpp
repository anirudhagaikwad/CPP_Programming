/*
Create a base class 'Base' with a virtual destructor. Derive a class 'Derived' from 'Base' and override the destructor in the derived class.
In the main function, create an object of the derived class using a base class pointer. Then, delete the object using the base class pointer
to observe late binding behavior of destructors.

Input: Base* ptr = new Derived;
Output:
Derived class destructor.
Base class destructor.

*/

#include <iostream>
using namespace std;

class Base {
public:
    // Virtual destructor in the base class.
    // This allows the correct destructor to be called based on the object's actual type during deletion.
    virtual ~Base() {
        cout << "Base class destructor." << endl;
    }
};

class Derived : public Base {
public:
    // Override of the destructor for the 'Derived' class.
    ~Derived() override {
        cout << "Derived class destructor." << endl;
    }
};

int main() {
    // Creating an object of the 'Derived' class using a base class pointer 'Base*'.
    Base* ptr = new Derived;

    // Deleting the object using the base class pointer.
    // This demonstrates late binding of destructors, as the correct destructor (Derived class destructor) is called based on the actual type of the object at runtime.
    delete ptr; // Calls the Derived class destructor due to late binding

    return 0;
}

/*
This C++ program demonstrates late binding behavior of destructors using a base and derived class.
The program defines a base class Base with a virtual destructor, and a derived class Derived that inherits from Base.
The destructor is overridden in the derived class.

In the main() function, an object of the Derived class is created using a base class pointer Base*.
This allows us to create and manipulate objects of the derived class through the base class interface.
The pointer ptr points to the Derived object.

The program then deletes the object using the delete keyword and the base class pointer ptr.
Because the destructor in the base class is declared as virtual, the correct destructor is called based on the actual object type at runtime.
This is known as late binding of destructors or dynamic destruction. In this case, delete ptr; calls the destructor of the Derived class
instead of the base class destructor.
This behavior occurs because the actual type of the object being pointed to is determined at runtime.

*/




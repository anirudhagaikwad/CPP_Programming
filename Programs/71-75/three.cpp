/*
Create a base class Base with a virtual function display(). Derive a class Derived from Base and override the display()
function in the derived class. In the main function, create an object of the base class and an object of the derived class.
Use base class pointers to point to these objects and call the display() function through these pointers to observe late binding behavior.

Base b;
Base* ptr1 = &b;
ptr1->display(); // Output: Base class display function.

Derived d;
Base* ptr2 = &d;
ptr2->display(); // Output: Derived class display function.

*/

#include <iostream>
using namespace std;

class Base {
public:
    // Virtual function display()
    virtual void display() {
        cout << "Base class display function." << endl;
    }
};

class Derived : public Base {
public:
    // Override of the display() function for the Derived class.
    void display() override {
        cout << "Derived class display function." << endl;
    }
};

int main() {
    Base b; // Create an object of the base class.
    Derived d; // Create an object of the derived class.

    Base* ptr1 = &b; // Pointer to the base class pointing to the base object.
    Base* ptr2 = &d; // Pointer to the base class pointing to the derived object.

    // Late Binding: The decision of which function to call is made at runtime based on the object's actual type.
    // Since display() is declared as virtual in the base class, the function called is determined by the actual type of the object at runtime, not at compile-time.
    ptr1->display(); // Calls Base::display()
    ptr2->display(); // Calls Derived::display() due to late binding

    return 0;
}

/*
This C++ program demonstrates late binding behavior using a base and derived class. The program defines a base class Base with a virtual function display(),
and a derived class Derived that inherits from Base. The display() function is overridden in the derived class.

In the main() function, an object b of the base class and an object d of the derived class are created. Two base class pointers ptr1 and ptr2 are declared
and initialized to point to these objects. ptr1 points to the base object, and ptr2 points to the derived object.

The program then calls the display() function through these pointers. As display() is declared as virtual in the base class, the function call is resolved
based on the actual type of the object at runtime, not at compile-time. This is known as late binding or dynamic binding. In this case, ptr1->display()
calls the display() function from the base class, and ptr2->display() calls the display() function from the derived class.
This behavior occurs because the actual type of the object being pointed to is determined at runtime.

*/



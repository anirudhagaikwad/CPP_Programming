/*
Create a base class Base with a member function display(). Derive a class Derived from Base without overriding the display() function.
In the main function, create an object of the base class and an object of the derived class. Use base class pointers to point to
these objects and call the display() function through these pointers to observe early binding behavior.

Base b;
Base* ptr1 = &b;
ptr1->display(); // Output: Base class display function.


Derived d;
Base* ptr2 = &d;
ptr2->display(); // Output: Base class display function.

*/

#include <iostream>
using namespace std;

class Base {
public:
    // Member function display() in the base class.
    void display() {
        cout << "Base class display function." << endl;
    }
};

class Derived : public Base {
public:
    // Member function display() in the derived class, not overridden.
    void display() {
        cout << "Derived class display function." << endl;
    }
};

int main() {
    Base b; // Create an object of the base class.
    Derived d; // Create an object of the derived class.

    Base* ptr1 = &b; // Pointer to the base class pointing to the base object.
    Base* ptr2 = &d; // Pointer to the base class pointing to the derived object.

    // Early Binding: The decision of which function to call is made at compile-time based on the pointer type.
    // Since the display() function is not declared as virtual in the base class, the function called is determined by the pointer type at compile-time, not at runtime.
    ptr1->display(); // Calls Base::display()
    ptr2->display(); // Calls Base::display() due to early binding

    return 0;
}

/*
This C++ program demonstrates early binding behavior using a base and derived class. The program defines a base class Base with a member
function display(), and a derived class Derived that inherits from Base. The display() function is defined in both the base and derived
classes.

In the main() function, an object b of the base class and an object d of the derived class are created.
Two base class pointers ptr1 and ptr2 are declared and initialized to point to these objects.
ptr1 points to the base object, and ptr2 points to the derived object.

The program then calls the display() function through these pointers. As display() is not declared as virtual in the base class, the function
call is resolved based on the pointer type at compile-time, not at runtime. This is known as early binding. In this case, both ptr1->display()
and ptr2->display() call the display() function from the base class, even though ptr2 points to a derived object. This is because the
pointer type determines the function to be called at compile-time, and since both pointers are of type Base*, the base class display()
function is called in both cases.

*/



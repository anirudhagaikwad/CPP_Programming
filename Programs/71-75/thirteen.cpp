/*
Create an abstract class Animal with a non-pure virtual function makeSound().
Derive two classes Dog and Cat from Animal and implement the makeSound() function in each.
Use these classes to demonstrate calling a non-pure virtual function from the abstract class.

Animal* animals[2];
animals[0] = new Dog;
animals[1] = new Cat;

animals[0]->makeSound(); // Output: Woof
animals[1]->makeSound(); //Output: Meow

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
Create a base class Base with a member function display(). Derive a class Derived from Base without overriding the display() function.
In the main function, create an object of the base class and an object of the derived class. Use base class pointers to point to these
objects and call the display() function through these pointers to observe early binding behavior.


*/


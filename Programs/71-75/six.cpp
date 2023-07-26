/*
 Create an abstract class Shape with a pure virtual destructor.
 Derive a class Circle from Shape and implement the destructor in Circle.
 Attempt to create an object of Shape (which is not allowed), and create an object of Circle.

 Input:  Circle circle;
 Output: Circle destructor.


*/

#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual destructor in the base class.
    // This makes the 'Shape' class an abstract class, and it cannot be instantiated directly.
    virtual ~Shape() = 0;
};

// Required to avoid linking errors for the pure virtual destructor.
// A dummy implementation for the pure virtual destructor is provided.
Shape::~Shape() {}

class Circle : public Shape {
public:
    // Override of the destructor for the 'Circle' class.
    // This destructor provides a specific implementation for the destruction of circle objects.
    ~Circle() {
        cout << "Circle destructor." << endl;
    }
};

int main() {
    // Shape is an abstract class, so we cannot create an object of it directly.
    // Shape shape; // Error: cannot declare variable 'shape' to be of abstract type 'Shape'

    // Creating an object of the 'Circle' class, which is a derived class of 'Shape'.
    Circle circle;

    return 0;
}

/*
This C++ program demonstrates the use of a pure virtual destructor in an abstract base class.
The class 'Shape' has a pure virtual destructor.
The derived class 'Circle' overrides the destructor to provide a specific implementation.
The program shows how the abstract base class cannot be instantiated, but the derived class can be used to create objects.

*/

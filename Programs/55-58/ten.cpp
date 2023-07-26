/*
Create a base class "Shape" with a virtual destructor.
Implement two derived classes "Circle" and "Rectangle."
Add a dynamic memory allocation in the derived classes' constructors and release the memory in their destructors.


*/

#include <iostream>

// Base class Shape
class Shape {
public:
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
private:
    double* radius;

public:
    Circle(double r) {
        radius = new double;
        *radius = r;
    }

    ~Circle() {
        delete radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double* length;
    double* width;

public:
    Rectangle(double l, double w) {
        length = new double;
        width = new double;
        *length = l;
        *width = w;
    }

    ~Rectangle() {
        delete length;
        delete width;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i) {
        delete shapes[i];
    }

    return 0;
}

/*
This program demonstrates the use of virtual destructors in a base class.
The "Shape" class has a virtual destructor. Both "Circle" and "Rectangle" classes dynamically allocate memory in their constructors
and release it in their destructors to prevent memory leaks.
In the main function, an array of pointers to "Shape" is used to store objects of both derived classes, and the memory is deallocated
correctly using the virtual destructor of the base class.

*/


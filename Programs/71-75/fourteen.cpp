/*

Create an abstract class Shape with a pure virtual function area().
Add a protected data member 'name' to the Shape class.
Derive classes Circle and Square from Shape and implement the area() function in each.
Use these classes to demonstrate accessing the protected data member from derived classes.

Shape* shape1 = new Circle(5);
shape1->area(); // Output: Area of Circle:78.5397

Shape* shape2 = new Square(4);
shape2->area(); // Output: Area of Square:16

*/

#include <iostream>
#include <string>
using namespace std;

class Shape {
protected:
    string name; // Protected data member to store the name of the shape

public:
    // Constructor to initialize the 'name' of the shape
    Shape(const string& n) : name(n) {}

    // Pure virtual function 'area()'.
    // This function is meant to be implemented by derived classes to calculate the area of their specific shape.
    virtual void area() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : Shape("Circle"), radius(r) {}

    // Override of the 'area()' function for the 'Circle' class.
    // Calculates and prints the area of the circle using the formula: pi * r^2
    void area() override {
        cout << "Area of " << name << ": " << 3.14159f * radius * radius << endl;
    }
};

class Square : public Shape {
private:
    float side;

public:
    Square(float s) : Shape("Square"), side(s) {}

    // Override of the 'area()' function for the 'Square' class.
    // Calculates and prints the area of the square using the formula: side * side
    void area() override {
        cout << "Area of " << name << ": " << side * side << endl;
    }
};

int main() {
    // Creating objects of 'Circle' and 'Square' through their base class pointer 'Shape*'.
    Shape* shape1 = new Circle(13);
    Shape* shape2 = new Square(4);

    // Using the 'area()' function of the 'Circle' and 'Square' classes through the base class pointer.
    // This demonstrates polymorphism, as the correct version of 'area()' is called based on the actual object type at runtime.
    shape1->area(); // Prints the area of the circle
    shape2->area(); // Prints the area of the square

    // Cleaning up the dynamically allocated objects.
    delete shape1;
    delete shape2;

    return 0;
}

/*

This C++ program demonstrates the use of abstract classes and pure virtual functions to calculate the area of shapes.
The abstract class 'Shape' has a protected data member 'name' and a pure virtual function 'area()'.
The derived classes 'Circle' and 'Square' override the 'area()' function to provide specific implementations for calculating the area.

*/



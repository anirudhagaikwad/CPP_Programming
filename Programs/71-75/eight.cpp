/*
Create an abstract class Shape with a pure virtual function draw().
Derive classes Circle and Square from Shape and implement the draw() function in each.
Use these classes to create a simple shape drawing program.

Shape* shape1 = new Circle;
shape1->draw(); // Output: Drawing a circle

Shape* shape2 = new Square;
shape2->draw(); // Output: Drawing a square

*/


#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function 'draw()'.
    // This function is meant to be implemented by derived classes to provide specific draw actions for each shape.
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    // Override of the 'draw()' function for the 'Circle' class.
    // Provides the specific draw implementation for circles: "Drawing a circle."
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    // Override of the 'draw()' function for the 'Square' class.
    // Provides the specific draw implementation for squares: "Drawing a square."
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    // Creating objects of 'Circle' and 'Square' using base class pointers 'Shape*'.
    Shape* shape1 = new Circle;
    Shape* shape2 = new Square;

    // Calling the 'draw()' function for each shape using the base class pointers.
    // This demonstrates polymorphism, as the correct version of the 'draw()' function is called based on the actual object type at runtime.
    shape1->draw(); // Draws a circle
    shape2->draw(); // Draws a square

    // Cleaning up the dynamically allocated objects.
    delete shape1;
    delete shape2;

    return 0;
}


/* This C++ program demonstrates the use of abstract classes and polymorphism to draw different shapes.
The class 'Shape' has a pure virtual function 'draw()'.
The derived classes 'Circle' and 'Square' inherit from 'Shape' and override the virtual function to provide specific draw implementations for
 each shape.
The program creates objects of 'Circle' and 'Square' using base class pointers and demonstrates polymorphism by calling the correct 'draw()'
function based on the actual object type at runtime.
*/

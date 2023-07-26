/*
Create an abstract class Drawable with pure virtual functions draw() and resize().
Derive classes Circle and Rectangle from Drawable and implement the draw() and resize() functions in each.
Use these classes to simulate drawing and resizing shapes.

Drawable* shape1 = new Circle;
shape1->draw(); // Output: Drawing a circle.
shape1->resize(); // Output: Resizing the circle

Drawable* shape2 = new Rectangle;
shape2->draw(); // Output: Drawing a rectangle
shape2->resize(); // Output: Resizing the rectangle

*/


#include <iostream>
using namespace std;

class Drawable {
public:
    // Pure virtual functions 'draw()' and 'resize()'.
    // These functions are meant to be implemented by derived classes to provide specific draw and resize actions for each shape.
    virtual void draw() = 0;
    virtual void resize() = 0;
};

class Circle : public Drawable {
public:
    // Override of the 'draw()' function for the 'Circle' class.
    // Provides the specific draw implementation for circles: "Drawing a circle."
    void draw() override {
        cout << "Drawing a circle." << endl;
    }

    // Override of the 'resize()' function for the 'Circle' class.
    // Provides the specific resize implementation for circles: "Resizing the circle."
    void resize() override {
        cout << "Resizing the circle." << endl;
    }
};

class Rectangle : public Drawable {
public:
    // Override of the 'draw()' function for the 'Rectangle' class.
    // Provides the specific draw implementation for rectangles: "Drawing a rectangle."
    void draw() override {
        cout << "Drawing a rectangle." << endl;
    }

    // Override of the 'resize()' function for the 'Rectangle' class.
    // Provides the specific resize implementation for rectangles: "Resizing the rectangle."
    void resize() override {
        cout << "Resizing the rectangle." << endl;
    }
};

int main() {
    // Creating objects of 'Circle' and 'Rectangle' using base class pointers 'Drawable*'.
    Drawable* shape1 = new Circle;
    Drawable* shape2 = new Rectangle;

    // Calling the 'draw()' and 'resize()' functions for each shape using the base class pointers.
    // This demonstrates polymorphism, as the correct version of each function is called based on the actual object type at runtime.
    shape1->draw(); // Draws a circle
    shape1->resize(); // Resizes the circle

    shape2->draw(); // Draws a rectangle
    shape2->resize(); // Resizes the rectangle

    // Cleaning up the dynamically allocated objects.
    delete shape1;
    delete shape2;

    return 0;
}

/* This C++ program demonstrates the use of abstract classes and polymorphism to draw and resize different shapes.
The class 'Drawable' has two pure virtual functions 'draw()' and 'resize()'.
The derived classes 'Circle' and 'Rectangle' inherit from 'Drawable' and override the virtual functions to provide specific draw and resize
implementations for each shape.
The program creates objects of 'Circle' and 'Rectangle' using base class pointers and demonstrates polymorphism by calling the correct
'draw()' and 'resize()' functions based on the actual object type at runtime.

*/


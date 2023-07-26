/*
You are given a C++ code that demonstrates the concept of abstract base classes and polymorphism using pure virtual
functions. The code defines an abstract base class Shape, which has a pure virtual function named draw().
Two derived classes, Circle and Square, inherit from the Shape class and provide their implementations for the draw()
function.

Your task is to explain how the code utilizes abstract classes and polymorphism to draw different shapes.
Also, provide a step-by-step explanation of what happens when the main() function is executed, including the order
of function calls and the specific implementation of the draw() function for each shape.

Shape* shape1 = new Circle;
shape1->draw(); // Drawing a circle

Shape* shape2 = new Square;
shape2->draw(); // Drawing a square

*/

#include <iostream>
using namespace std;

// Abstract base class with pure virtual function
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shape1 = new Circle;
    Shape* shape2 = new Square;

    shape1->draw(); // Draws a circle
    shape2->draw(); // Draws a square

    delete shape1;
    delete shape2;

    return 0;
}

/*
This program demonstrates polymorphism using an abstract base class and its derived classes.
The Shape class is an abstract base class with a pure virtual function draw().
The Circle and Square classes inherit from the Shape class and override the draw() function with specific implementations
for drawing a circle and a square, respectively. The program creates objects of Circle and Square using base class
pointers, and polymorphism allows calling the correct draw() function based on the actual object type at runtime.

*/

/*
You are tasked with creating an art gallery management system that stores and displays various shapes of artworks.
Each artwork is represented as a geometric shape, such as circles and squares. To achieve this, you are provided with
a C++ code that defines an abstract base class Shape and two derived classes, Circle and Square, which inherit from the
base class.
The Shape class contains a pure virtual function draw(), which represents the drawing of the artwork on the gallery walls.
The derived classes, Circle and Square, provide their implementations of the draw() function, showcasing how each shape
is displayed on the walls of the art gallery.


Input:
Shape* shape1=new Circle;
shape1->draw();
Output:
Drawing a circle.
Circle destructor.

Input:
Shape* shape2=new Square;
shape2->draw();
Output:
Drawing a square.
Square destructor.

*/

#include <iostream>
#include <vector>
using namespace std;

// Abstract base class with pure virtual function
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
    virtual ~Shape() {}
};

// Derived class Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle." << endl;
    }
    ~Circle() {
        cout << "Circle destructor." << endl;
    }
};

// Derived class Square
class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square." << endl;
    }
    ~Square() {
        cout << "Square destructor." << endl;
    }
};

int main() {
    vector<Shape*> shapes;
    shapes.push_back(new Circle);
    shapes.push_back(new Square);

    for (Shape* shape : shapes) {
        shape->draw();
        delete shape;
    }

    return 0;
}

/*
This program demonstrates polymorphism using an abstract base class and its derived classes in a shape hierarchy.
The Shape class is an abstract base class with a pure virtual function draw(). The Circle and Square classes inherit
from the Shape class and override the draw() function with specific implementations for drawing a circle and a square,
respectively. The program uses a vector of Shape pointers to store objects of Circle and Square, and polymorphism allows
calling the correct draw() function based on the actual object type at runtime. The program also demonstrates the virtual destructors in the Circle and Square classes, ensuring that the appropriate destructor is called when the objects are deleted.

*/




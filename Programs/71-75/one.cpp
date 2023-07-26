/* Create an abstract class Shape with a pure virtual function area().
 Derive two classes Circle and Rectangle from Shape and implement the area() function in each.
 Use these classes to calculate the area of a circle and a rectangle.

 Shape* shape1 = new Circle(5);
 shape1->area(); // Output:  Area of Circle: 78.5397

 Shape* shape2 = new Rectangle(4, 6);
 shape2->area(); // Output: Area of Rectangle: 24

*/


#include <iostream>
using namespace std;

// Abstract class Shape represents a generic geometric shape with a pure virtual function area().
// It acts as an interface for derived classes to implement their own area calculation.
class Shape {
public:
    virtual float area() = 0; // Pure virtual function for calculating the area of a shape.
};

// Class Circle is derived from Shape and represents a circle with a given radius.
class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Implementation of the pure virtual function area() for Circle.
    // Calculates and returns the area of the circle using the formula: pi * r^2
    float area() override {
        return 3.14159f * radius * radius;
    }
};

// Class Rectangle is derived from Shape and represents a rectangle with given length and width.
class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Implementation of the pure virtual function area() for Rectangle.
    // Calculates and returns the area of the rectangle using the formula: length * width
    float area() override {
        return length * width;
    }
};

int main() {
    // Creating objects of Circle and Rectangle through their base class pointer Shape*.
    Shape* shape1 = new Circle(5);
    Shape* shape2 = new Rectangle(4, 6);

    // Using the area() function of the Circle and Rectangle classes through the base class pointer.
    cout << "Area of Circle: " << shape1->area() << endl;
    cout << "Area of Rectangle: " << shape2->area() << endl;

    // Cleaning up the dynamically allocated objects.
    delete shape1;
    delete shape2;

    return 0;
}

/*
This C++ program demonstrates the use of abstract classes and pure virtual functions to calculate the areas of a circle and a rectangle. The program defines an abstract class Shape, which acts as an interface for various geometric shapes. It has a pure virtual function area() that is meant to be implemented by derived classes to calculate the area of their specific shape.

Two concrete classes Circle and Rectangle are derived from the Shape class. The Circle class represents a circle with a given radius, and the Rectangle class represents a rectangle with given length and width. Each of these classes overrides the area() function with its own implementation to calculate the area of the specific shape.

In the main() function, objects of Circle and Rectangle are created using their base class pointer Shape*. This allows us to achieve polymorphism, as we can call the area() function of the specific shape through the base class pointer without knowing the actual derived class type at compile time. The correct area() function implementation is resolved at runtime, depending on the actual type of the object being pointed to.

Finally, the program prints the calculated areas of the circle and rectangle, and deallocates the dynamically allocated objects using the delete keyword to free the memory.

*/




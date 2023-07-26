/*

Create an abstract class Shape with a pure virtual function area().
Derive classes Circle and Triangle from Shape and implement the area() function in each.
Use these classes to create a simple shape area calculator.

Shape* shape1 = new Circle(5);
shape1->area() // Output: Area of Circle: 78.5397

Shape* shape2 = new Triangle(4, 6);
shape2->area() // Output: Area of Triangle: 12

*/


#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function 'area()'.
    // This function is meant to be implemented by derived classes to calculate the area of their specific shape.
    virtual float area() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Override of the 'area()' function for the 'Circle' class.
    // Calculates the area of the circle using the formula: pi * r^2
    float area() override {
        return 3.14159f * radius * radius;
    }
};

class Triangle : public Shape {
private:
    float base, height;

public:
    Triangle(float b, float h) : base(b), height(h) {}

    // Override of the 'area()' function for the 'Triangle' class.
    // Calculates the area of the triangle using the formula: 0.5 * base * height
    float area() override {
        return 0.5f * base * height;
    }
};

int main() {
    // Creating objects of 'Circle' and 'Triangle' using base class pointers 'Shape*'.
    Shape* shape1 = new Circle(5);
    Shape* shape2 = new Triangle(4, 6);

    // Calculating and displaying the areas of the shapes using polymorphism.
    cout << "Area of Circle: " << shape1->area() << endl;
    cout << "Area of Triangle: " << shape2->area() << endl;

    // Cleaning up the dynamically allocated objects.
    delete shape1;
    delete shape2;

    return 0;
}

/*

This C++ program demonstrates the use of abstract classes and polymorphism to calculate the areas of different shapes.
The abstract class 'Shape' has a pure virtual function 'area()', which is meant to be overridden by derived classes to provide specific area
calculations for each shape.
The derived classes 'Circle' and 'Triangle' inherit from 'Shape' and override the 'area()' function to provide specific area calculations for
circles and triangles.
The program creates objects of 'Circle' and 'Triangle' using base class pointers, demonstrating polymorphism to calculate and display the
areas.


*/






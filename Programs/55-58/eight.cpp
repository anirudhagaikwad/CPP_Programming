/*
Create an abstract base class "Shape" with a pure virtual function "calculateArea()."
Implement two derived classes "Circle" and "Rectangle" to calculate and display the area of a circle and rectangle, respectively.

Input: Circle(5.0)
Output: Area: 78.5397

Input: Rectangle(4.0, 6.0)
Output: Area: 24
*/

#include <iostream>

// Abstract Base class Shape
class Shape {
public:
    virtual double calculateArea() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle(5.0);
    shapes[1] = new Rectangle(4.0, 6.0);

    for (int i = 0; i < 2; ++i) {
        std::cout << "Area: " << shapes[i]->calculateArea() << std::endl;
        delete shapes[i];
    }

    return 0;
}

/*
This program demonstrates the use of pure virtual functions and abstract base class.
The "Shape" class is an abstract base class with a pure virtual function "calculateArea()."
The "Circle" and "Rectangle" classes are derived from "Shape" and implement the "calculateArea()" function to calculate and
return the area of a circle and rectangle, respectively. In the main function, an array of pointers to "Shape" is used to
store objects of both derived classes, and the area of each shape is calculated and displayed using the virtual function.
*/

/*
Implement a base class "Shape" with two derived classes "Circle" and "Rectangle."
Calculate and display the area of a circle and rectangle using single inheritance.

Input: Circle circle(5.0)
Output:Area of Circle: 78.5

Input: Rectangle rectangle(4.0, 6.0)
Output: Area of Rectangle: 24

*/

#include <iostream>
#include <cmath>
#define M_PI 3.14

// Base class
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
        return M_PI * radius * radius;
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
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    std::cout << "Area of Circle: " << circle.calculateArea() << std::endl;
    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;

    return 0;
}

/*
This program demonstrates single inheritance by creating a base class "Shape" and two derived classes "Circle" and "Rectangle."
The base class has a pure virtual function "calculateArea," which is overridden in the derived classes to calculate and return
the area of a circle and rectangle, respectively.

*/


/*
Create a base class Shape with a method to calculate the area.
Derive three classes Circle, Rectangle, and Triangle from Shape, and implement methods to calculate their respective areas.

circle.calculateArea() // Circle's Area: 78.5
rectangle.calculateArea() // Rectangle's Area: 24
triangle.calculateArea() // Triangle's Area: 12

*/

#include <iostream>
#include <cmath>
#define M_PI 3.14

class Shape {
public:
    virtual double calculateArea() = 0; // Pure virtual method, making Shape an abstract class
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double calculateArea() override {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() override {
        return length * width;
    }
};

class Triangle : public Shape {
private:
    double base, height;
public:
    Triangle(double b, double h) : base(b), height(h) {}

    double calculateArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle circle(5.0);
    std::cout << "Circle's Area: " << circle.calculateArea() << std::endl;

    Rectangle rectangle(4.0, 6.0);
    std::cout << "Rectangle's Area: " << rectangle.calculateArea() << std::endl;

    Triangle triangle(3.0, 8.0);
    std::cout << "Triangle's Area: " << triangle.calculateArea() << std::endl;

    return 0;
}





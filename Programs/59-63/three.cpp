/*
Create a base class "Shape" with two derived classes "Circle" and "Rectangle."
Implement functions to calculate the area of each shape by use of multiple inheritance.

Circle circle(5.0)
circle.calculateArea()  // Output: Circle Area: 78.5

Rectangle rectangle(4.0, 6.0)
rectangle.calculateArea() //Output: Rectangle Area: 24

*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual float calculateArea() const = 0; // Pure virtual function
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    float calculateArea() const override {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float width, height;

public:
    Rectangle(float w, float h) : width(w), height(h) {}

    float calculateArea() const override {
        return width * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    cout << "Circle Area: " << circle.calculateArea() << endl;
    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;

    return 0;
}

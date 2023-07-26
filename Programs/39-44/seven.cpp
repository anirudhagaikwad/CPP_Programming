/*
Create a C++ program to calculate the area of a rectangle using friend functions and handle constant objects properly.
*/

#include <iostream>

class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    friend double calculateArea(const Rectangle& rect);
};

double calculateArea(const Rectangle& rect) {
    return rect.length * rect.width;
}

int main() {
    const Rectangle rect1(5.0, 3.0);
    double area = calculateArea(rect1);

    std::cout << "Area of rectangle: " << area << std::endl;

    return 0;
}


/*
The program defines a class Rectangle with private data members length and width.
It also declares a friend function calculateArea that calculates the area of the rectangle.
The program then demonstrates how to use constant objects and friend functions to calculate the area of a rectangle.
*/

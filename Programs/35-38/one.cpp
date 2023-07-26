/*
Create a class Rectangle with attributes length and width.
Implement methods to calculate the area and perimeter of the rectangle.
*/

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect(5.0, 3.0);
    std::cout << "Area: " << rect.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rect.calculatePerimeter() << std::endl;
    return 0;
}
/*
This program creates a class Rectangle with attributes length and width.
The methods calculateArea() and calculatePerimeter() compute the area and perimeter, respectively,
using the formulae for a rectangle.
*/

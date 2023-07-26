/*
Create a class called Rectangle with private data members for length and width.
Declare a Square class as a friend to the Rectangle class, allowing it to access the private members of the Rectangle.
Implement methods to calculate the area of both the Rectangle and Square.
*/

#include <iostream>

class Square; // Forward declaration for the Square class

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double len, double wid) : length(len), width(wid) {}
    double calculateArea() const;
    friend class Square; // Declaring Square as a friend class
};

double Rectangle::calculateArea() const {
    return length * width;
}

class Square {
public:
    double calculateAreaOfSquare(const Rectangle& rect);
};

double Square::calculateAreaOfSquare(const Rectangle& rect) {
    // Since Square is a friend of Rectangle, it can access Rectangle's private members
    return rect.length * rect.length;
}

int main() {
    Rectangle rectangle(5.0, 7.0);
    Square square;

    std::cout << "Area of Rectangle: " << rectangle.calculateArea() << std::endl;
    std::cout << "Area of Square: " << square.calculateAreaOfSquare(rectangle) << std::endl;

    return 0;
}

/*
In this program, we demonstrate the use of a friend class in C++.
The Square class is declared as a friend to the Rectangle class, which means it can access the private members of the Rectangle.
The program calculates the area of both a Rectangle and a Square using their respective member functions.
*/

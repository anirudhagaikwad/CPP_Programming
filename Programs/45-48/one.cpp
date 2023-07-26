/*
Create a class called "Rectangle" with default constructor to initialize the length and width to 0.
Display the area of the rectangle.
*/

#include <iostream>

class Rectangle {
private:
    int length;
    int width;

public:
    // Default Constructor
    Rectangle() {
        length = 0;
        width = 0;
    }

    int calculateArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    std::cout << "Area of Rectangle: " << rect.calculateArea() << std::endl;
    return 0;
}

/*
In this program, we create a class Rectangle with a default constructor that initializes the length and width to 0.
The calculateArea() method calculates the area of the rectangle,
and we use the default constructor to create an object rect and display its area.
*/

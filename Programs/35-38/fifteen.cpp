/*
   Create a class 'Rectangle' with attributes 'x', 'y' (coordinates of the top-left corner),'width', and 'height'.
   Implement a function to check if two rectangles intersect.
   Use objects to demonstrate rectangle intersection for two rectangles.


   Input: rect1(0, 0, 4, 3)
          rect2(2, 2, 5, 3)

   Output: Rectangles intersect.

*/

#include <iostream>

class Rectangle {
private:
    int x;
    int y;
    int width;
    int height;

public:
    // Constructor
    Rectangle(int x_, int y_, int w, int h) : x(x_), y(y_), width(w), height(h) {}

    // Function to check if two rectangles intersect
    bool intersect(const Rectangle& other) {
        if (x > other.x + other.width || other.x > x + width)
            return false;
        if (y > other.y + other.height || other.y > y + height)
            return false;
        return true;
    }
};

int main() {
    Rectangle rect1(1, 4, 6, 4);
    Rectangle rect2(3, 5, 6, 4);

    if (rect1.intersect(rect2))
        std::cout << "Rectangles intersect.\n";
    else
        std::cout << "Rectangles do not intersect.\n";

    return 0;
}

/*
This program defines a class Rectangle with attributes x, y, width, and height.
It has a method intersect to check if two rectangles intersect.
The main function demonstrates the use of objects to check the intersection of two rectangles.
*/

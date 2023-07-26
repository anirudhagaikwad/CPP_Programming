/*
Create a class called "Point" with a parameterized constructor to initialize x and y coordinates.
Display the coordinates of the point.
*/

#include <iostream>

class Point {
private:
    int x;
    int y;

public:
    // Parameterized Constructor
    Point(int xCoordinate, int yCoordinate) {
        x = xCoordinate;
        y = yCoordinate;
    }

    void displayCoordinates() {
        std::cout << "X Coordinate: " << x << ", Y Coordinate: " << y << std::endl;
    }
};

int main() {
    Point p(5, 10);
    p.displayCoordinates();
    return 0;
}

/*
This program defines a class Point with a parameterized constructor that takes xCoordinate and yCoordinate
as arguments to initialize the x and y member variables.
The displayCoordinates() method prints the coordinates of the point.
*/

/*
You have been tasked with designing a C++ class called "Box" that represents a three-dimensional box.
Your goal is to create a class with multiple constructors to initialize its dimensions and provide a method to display the volume of the box.

Input: Box box1
Output: Volume of box1: 0

Input: box2(3, 4, 5)
Output: Volume of box2: 60

Input: Box box3(2)
Output: Volume of box3: 8

*/

#include <iostream>

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Default Constructor
    Box() {
        length = 0;
        width = 0;
        height = 0;
    }

    // Parameterized Constructor
    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    // Constructor with a single argument
    Box(int side) {
        length = width = height = side;
    }

    int calculateVolume() {
        return length * width * height;
    }
};

int main() {
    Box box1; // Default constructor
    Box box2(3, 4, 5); // Parameterized constructor
    Box box3(2); // Constructor with a single argument
    std::cout << "Volume of box1: " << box1.calculateVolume() << std::endl;
    std::cout << "Volume of box2: " << box2.calculateVolume() << std::endl;
    std::cout << "Volume of box3: " << box3.calculateVolume() << std::endl;
    return 0;
}

/*
This program defines a class Box with three different constructors.
The default constructor initializes the dimensions to 0, the parameterized constructor initializes
them with given values, and the constructor with a single argument initializes all sides to the same value.
The calculateVolume() method calculates and displays the volume of each box.
*/

/*
Imagine you are a mathematician working on a geometry project. You need to calculate the volume of various cubes for your research.
To simplify the process, you want to create a C++ class to represent a cube and calculate its volume.
Give default size as 1 to cube.

Input: side=blank value
Output: Volume of cube1: 1

Input: side=3
Output: Volume of cube2: 27
*/

#include <iostream>

class Cube {
private:
    int side;

public:
    // Constructor with default argument
    Cube(int s = 1) {
        side = s;
    }

    int calculateVolume() {
        return side * side * side;
    }
};

int main() {
    Cube cube1; // Uses default argument, side = 1
    Cube cube2(5);
    std::cout << "Volume of cube1: " << cube1.calculateVolume() << std::endl;
    std::cout << "Volume of cube2: " << cube2.calculateVolume() << std::endl;
    return 0;
}

/*
This program defines a class Cube with a constructor that has a default argument for the side.
If no argument is passed, the side is initialized to 1.
The calculateVolume() method calculates the volume of the cube using the given side length.
*/

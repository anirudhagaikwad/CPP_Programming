/*
You want to designing a simple computer program for a shape calculator.
Users can input the dimensions of either a rectangle or a circle, and the program will calculate and display the respective
areas using method overloading.

Example:

Enter the length and width of the rectangle: 5 7
Area of the rectangle: 35
Enter the radius of the circle: 6
Area of the circle: 113.04

*/
#include<iostream>


// Calculate the area of a rectangle
float calculateArea(float length, float width)
{
    return length * width;
}

// Calculate the area of a circle
float calculateArea(float radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    float length, width, radius, base, height;

    // Rectangle
    std::cout << "Enter the length and width of the rectangle: ";
    std::cin >> length >> width;
    std::cout << "Area of the rectangle: " << calculateArea(length, width) << std::endl;

    // Circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area of the circle: " << calculateArea(radius) << std::endl;



    return 0;
}


/*
This program calculates the area of different shapes using method overloading.
*/

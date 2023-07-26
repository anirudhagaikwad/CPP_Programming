/*
Write a C++ program to print a rectangle, triangle, and circle using method overloading.

Example:
Enter the width and height of the rectangle: 5 4
Rectangle:
* * * * *
* * * * *
* * * * *
* * * * *
Enter the height of the triangle: 6
Triangle:
*
* *
* * *
* * * *
* * * * *
* * * * * *
Enter the radius of the circle: 5
Circle:
          *
    * * * * * * *
  * * * * * * * * *
  * * * * * * * * *
  * * * * * * * * *
* * * * * * * * * * *
  * * * * * * * * *
  * * * * * * * * *
  * * * * * * * * *
    * * * * * * *

*/

#include<iostream>


// Print a rectangle
void printShape(int width, int height)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// Print a triangle
void printShape(int height)
{
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// Print a circle
void printShape(float radius)
{
    int r = static_cast<int>(radius);

    for (int i = -r; i <= r; i++)
    {
        for (int j = -r; j <= r; j++)
        {
            if (i * i + j * j <= r * r)
                std::cout << "* ";
            else
                std::cout << "  ";
        }
        std::cout << std::endl;
    }
}


int main()
{

    int width, height;
    float radius;

    // Rectangle
    std::cout << "Enter the width and height of the rectangle: ";
    std::cin >> width >> height;
    std::cout << "Rectangle: " << std::endl;
    printShape(width, height);

    // Triangle
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    std::cout << "Triangle: " << std::endl;
    printShape(height);

    // Circle
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Circle: " << std::endl;
    printShape(radius);

    return 0;
}


/*
This program prints different shapes using method overloading.
*/

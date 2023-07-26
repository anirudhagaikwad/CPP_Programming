/*
Write a C++ program to calculate the distance between two points in 2D space and 3D space using method overloading.

Example:

Enter the coordinates of point 1 (x y): 1 7
Enter the coordinates of point 2 (x y): 5 7
Distance in 2D space: 4
Enter the coordinates of point 1 (x y z): 1 3 6
Enter the coordinates of point 2 (x y z): 2 6 9
Distance in 3D space: 4.3589

*/

#include<iostream>
#include<cmath>


// Calculate the distance between two points in 2D space
float calculateDistance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Calculate the distance between two points in 3D space
float calculateDistance(float x1, float y1, float z1, float x2, float y2, float z2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

int main()
{

    float x1, y1, z1, x2, y2, z2;

    // 2D space
    std::cout << "Enter the coordinates of point 1 (x y): ";
    std::cin >> x1 >> y1;
    std::cout << "Enter the coordinates of point 2 (x y): ";
    std::cin >> x2 >> y2;
    std::cout << "Distance in 2D space: " << calculateDistance(x1, y1, x2, y2) << std::endl;

    // 3D space
    std::cout << "Enter the coordinates of point 1 (x y z): ";
    std::cin >> x1 >> y1 >> z1;
    std::cout << "Enter the coordinates of point 2 (x y z): ";
    std::cin >> x2 >> y2 >> z2;
    std::cout << "Distance in 3D space: " << calculateDistance(x1, y1, z1, x2, y2, z2) << std::endl;

    return 0;
}

/*
Above programs calculates the distance between the 2D points and 3D points also.
it uses concept of method overloading.
*/

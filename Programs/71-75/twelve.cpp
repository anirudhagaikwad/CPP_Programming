/*
Create an abstract class Shape with a pure virtual function area().
Derive classes Circle and Rectangle from Shape and implement the area() function in each.
Use these classes to create a program that sorts an array of shapes based on their areas.

shapes[0] = new Circle(5);
shapes[1] = new Rectangle(4, 6);
shapes[2] = new Circle(3);
shapes[3] = new Rectangle(2, 9);
shapes[i]->area() // i=0 to 3

Unsorted Areas:
Shape 1 Area: 78.5397
Shape 2 Area: 24
Shape 3 Area: 28.2743
Shape 4 Area: 18

Sorted Areas:
Shape 1 Area: 18
Shape 2 Area: 24
Shape 3 Area: 28.2743
Shape 4 Area: 78.5397

*/


#include <iostream>
using namespace std;

class Shape {
public:
    // Pure virtual function 'area()'.
    // This function is meant to be implemented by derived classes to calculate the area of their specific shape.
    virtual float area() = 0;
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) : radius(r) {}

    // Override of the 'area()' function for the 'Circle' class.
    // Calculates the area of the circle using the formula: pi * r^2
    float area() override {
        return 3.14159f * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    float length, width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    // Override of the 'area()' function for the 'Rectangle' class.
    // Calculates the area of the rectangle using the formula: length * width
    float area() override {
        return length * width;
    }
};

// Function to sort an array of shapes based on their areas using selection sort
void sortShapesByArea(Shape* shapes[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (shapes[j]->area() < shapes[minIndex]->area()) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            Shape* temp = shapes[i];
            shapes[i] = shapes[minIndex];
            shapes[minIndex] = temp;
        }
    }
}

int main() {
    // Creating an array of pointers to the base class 'Shape'.
    const int numShapes = 4;
    Shape* shapes[numShapes];
    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Circle(3);
    shapes[3] = new Rectangle(2, 9);

    // Printing the unsorted areas of the shapes.
    cout << "Unsorted Areas:" << endl;
    for (int i = 0; i < numShapes; i++) {
        cout << "Shape " << i + 1 << " Area: " << shapes[i]->area() << endl;
    }

    // Sorting the shapes based on their areas.
    sortShapesByArea(shapes, numShapes);

    // Printing the sorted areas of the shapes.
    cout << "\nSorted Areas:" << endl;
    for (int i = 0; i < numShapes; i++) {
        cout << "Shape " << i + 1 << " Area: " << shapes[i]->area() << endl;
    }

    // Cleaning up the dynamically allocated objects.
    for (int i = 0; i < numShapes; i++) {
        delete shapes[i];
    }

    return 0;
}

/*

This C++ program demonstrates the use of abstract classes and polymorphism to calculate and sort the areas of different shapes.
The abstract class 'Shape' has a pure virtual function 'area()'.
The derived classes 'Circle' and 'Rectangle' override the 'area()' function to provide specific implementations for calculating the area.
The program then sorts an array of shapes based on their areas using the selection sort algorithm.


*/




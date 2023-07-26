/*
In a bustling pizzeria, the chef is always looking for ways to innovate and serve the customers better.
One day, the chef came up with a brilliant idea to rotate the pizza toppings to create a new flavor experience for the customers.
To achieve this, the chef needs your help to implement a program that rotates the pizza toppings by 90 degrees clockwise.

The pizza is represented as a square matrix, where each cell contains a different topping ingredient.
The chef wants to rotate the matrix by 90 degrees clockwise so that the toppings shift in a circular manner.

Input: {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}}
Output:
Rotated Matrix:
7 4 1
8 5 2
9 6 3

*/

#include <iostream>

// Function to rotate a matrix by 90 degrees clockwise using pointer arithmetic
void rotateMatrixClockwise(int* matrix, int size) {
    // Transpose the matrix
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            std::swap(*(matrix + i * size + j), *(matrix + j * size + i));
        }
    }

    // Reverse each row
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size / 2; j++) {
            std::swap(*(matrix + i * size + j), *(matrix + i * size + size - 1 - j));
        }
    }
}

// Function to display the matrix
void displayMatrix(int* matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << *(matrix + i * size + j) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    std::cout << "Original Matrix:\n";
    displayMatrix(reinterpret_cast<int*>(matrix), size);

    rotateMatrixClockwise(reinterpret_cast<int*>(matrix), size);

    std::cout << "\nRotated Matrix:\n";
    displayMatrix(reinterpret_cast<int*>(matrix), size);

    return 0;
}

/*
This program rotates a square matrix by 90 degrees clockwise using pointer arithmetic.
It first transposes the matrix by swapping elements symmetrically across the main diagonal.
Then, it reverses each row of the transposed matrix
*/

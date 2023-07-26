/*
Given a 2D matrix, write a function to find its transpose using pointer arithmetic without using an auxiliary matrix.

Input:
Original Matrix:
1 2 3
4 5 6
7 8 9

Output:
Transpose Matrix:
1 4 7
2 5 8
3 6 9

*/

#include <iostream>

// Function to find the transpose of a matrix using pointer arithmetic
void transposeMatrix(int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = i + 1; j < cols; ++j) {
            std::swap(*(matrix + i * cols + j), *(matrix + j * rows + i));
        }
    }
}

// Function to print the matrix
void printMatrix(int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << *(matrix + i * cols + j) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    const int rows = 3;
    const int cols = 3;

    int matrix[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    std::cout << "Original Matrix:" << std::endl;
    printMatrix(reinterpret_cast<int*>(matrix), rows, cols);

    // Find the transpose of the matrix
    transposeMatrix(reinterpret_cast<int*>(matrix), rows, cols);

    std::cout << "Transpose Matrix:" << std::endl;
    printMatrix(reinterpret_cast<int*>(matrix), cols, rows);

    return 0;
}

/*
This program demonstrates how to find the transpose of a matrix using pointer arithmetic.
It involves swapping elements using pointers to obtain the transpose.
*/

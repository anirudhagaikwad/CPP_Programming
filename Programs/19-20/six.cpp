/*
Program to find the sum of the main diagonal elements

Input: {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}}

Output: Sum of main diagonal elements: 15
*/

#include <iostream>

// Function to find the sum of the main diagonal elements of a matrix using pointer arithmetic
int findDiagonalSum(int* matrix, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(matrix + i * size + i);
    }

    return sum;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int diagonalSum = findDiagonalSum(reinterpret_cast<int*>(matrix), size);
    std::cout << "Sum of main diagonal elements: " << diagonalSum << std::endl;

    return 0;
}
/*
This program finds the sum of the main diagonal elements of a square matrix using pointer arithmetic.
It iterates through the matrix and adds the elements that lie on the main diagonal.
*/

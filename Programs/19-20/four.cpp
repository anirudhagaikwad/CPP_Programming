/*
You are tasked to write a Program to find the sum of elements above and below the main diagonal of a matrix

Input: {{1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}}
Output:
Sum above diagonal: 11
Sum below diagonal: 19

*/

#include <iostream>

// Function to find the sum of elements above and below the main diagonal of a matrix using pointer arithmetic
void findDiagonalSums(int* matrix, int size) {
    int sumAboveDiagonal = 0;
    int sumBelowDiagonal = 0;

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (j > i) {
                sumAboveDiagonal += *(matrix + i * size + j);
            } else if (j < i) {
                sumBelowDiagonal += *(matrix + i * size + j);
            }
        }
    }

    std::cout << "Sum above diagonal: " << sumAboveDiagonal << std::endl;
    std::cout << "Sum below diagonal: " << sumBelowDiagonal << std::endl;
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int size = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    findDiagonalSums(reinterpret_cast<int*>(matrix), size);

    return 0;
}

/*
 This program finds the sum of elements above and below the main diagonal of a square matrix using pointer arithmetic.
 It iterates through the matrix and checks the row and column indices to determine whether an element is above or below the main diagonal.
*/

/*
Students are arranged in matrix form for assembly.
Help coach to find the maximum height student in each row of a students

Input: {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}

Output:
Maximum element in row 1: 3
Maximum element in row 2: 6
Maximum element in row 3: 9

*/

#include <iostream>

// Function to find the maximum element in each row of a matrix using pointer arithmetic
void findMaxInRows(int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        int maxElement = *matrix;

        for (int j = 1; j < cols; j++) {
            if (*(matrix + i * cols + j) > maxElement) {
                maxElement = *(matrix + i * cols + j);
            }
        }

        std::cout << "Maximum element in row " << i + 1 << ": " << maxElement << std::endl;
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    findMaxInRows(reinterpret_cast<int*>(matrix), rows, cols);

    return 0;
}

/*
This program finds the maximum element in each row of a matrix using pointer arithmetic.
It iterates through the matrix row by row and finds the maximum element in each row.
The maximum element in each row is then displayed.
*/

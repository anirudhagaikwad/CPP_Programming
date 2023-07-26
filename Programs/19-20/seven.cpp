/*
In a high school mathematics class, the teacher is introducing the concept of matrix transposition to the students.
Students are tasked to find transpose of matrix. Write a Program to help students.

Input: {{1, 2},
        {3, 4},
        {5, 6}}
Output:
Transpose of the matrix:
1 3 5
2 4 6

*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Function to find the transpose of a matrix
void findTranspose(int matrix[][MAX_SIZE], int rows, int cols) {
    int transpose[MAX_SIZE][MAX_SIZE];

    // Calculating the transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Displaying the transpose
    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cout << "Enter the number of rows in the matrix: ";
    cin >> rows;
    cout << "Enter the number of columns in the matrix: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    findTranspose(matrix, rows, cols);

    return 0;
}


/*
This program finds the transpose of a matrix using pointer arithmetic.
It iterates through the matrix and swaps the elements symmetrically across the main diagonal. The transposed matrix is then displayed.

*/

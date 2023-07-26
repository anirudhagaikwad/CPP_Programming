/*
 Write a program to perform matrix addition using dynamic memory allocation.

Input:

Enter the number of rows: 3
Enter the number of columns: 3
Matrix 1:
Enter the elements of the matrix:
3 5 3
2 1 7
9 5 6
Matrix 2:
Enter the elements of the matrix:
2 3 4
1 7 8
6 5 3

Output:

Sum Matrix:
Matrix:
5 8 7
3 8 15
15 10 9

*/

#include <iostream>
using namespace std;

int** createMatrix(int rows, int columns) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[columns];
    }
    return matrix;
}

void fillMatrix(int** matrix, int rows, int columns) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, int rows, int columns) {
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int** addMatrices(int** matrix1, int** matrix2, int rows, int columns) {
    int** result = createMatrix(rows, columns);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

void deleteMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int** matrix1 = createMatrix(rows, columns);
    int** matrix2 = createMatrix(rows, columns);

    cout << "Matrix 1:" << endl;
    fillMatrix(matrix1, rows, columns);

    cout << "Matrix 2:" << endl;
    fillMatrix(matrix2, rows, columns);

    int** sumMatrix = addMatrices(matrix1, matrix2, rows, columns);

    cout << "Sum Matrix:" << endl;
    printMatrix(sumMatrix, rows, columns);

    deleteMatrix(matrix1, rows);
    deleteMatrix(matrix2, rows);
    deleteMatrix(sumMatrix, rows);

    return 0;
}

/*
This program performs matrix addition using dynamic memory allocation.
It defines functions to create a matrix, fill it with elements, print the matrix, add two matrices, and delete a matrix.
The main function asks the user for the number of rows and columns, creates two matrices, fills them, performs addition,
prints the sum matrix, and deallocates the memory.
*/

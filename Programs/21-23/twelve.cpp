/*
Write a C++ program to perform addition, subtraction, and multiplication of two matrices.

Enter the number of rows and columns of matrix 1: 2 2
Enter the elements of matrix 1:
1 2
3 4
Enter the number of rows and columns of matrix 2: 2 2
Enter the elements of matrix 2:
1 2
3 4
Sum of two matrices:
2 4
6 8
Difference of two matrices:
0 0
0 0
Product of two matrices:
7 10
15 22

*/

#include<iostream>

const int MAX_SIZE = 100;

// Print a matrix
void printMatrix(int mat[MAX_SIZE][MAX_SIZE], int rows, int columns)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

// Add two matrices
void addMatrix(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int rows, int columns)
{
    int result[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    std::cout << "Sum of two matrices: " << std::endl;
    printMatrix(result, rows, columns);
}

// Subtract two matrices
void subtractMatrix(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int rows, int columns)
{
    int result[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }

    std::cout << "Difference of two matrices: " << std::endl;
    printMatrix(result, rows, columns);
}

// Multiply two matrices
void multiplyMatrix(int mat1[MAX_SIZE][MAX_SIZE], int mat2[MAX_SIZE][MAX_SIZE], int rows1, int columns1, int columns2)
{
    int result[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < columns1; k++)
            {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    std::cout << "Product of two matrices: " << std::endl;
    printMatrix(result, rows1, columns2);
}



int main()
{
    int rows1, columns1, rows2, columns2;
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE];

    // Matrix 1
    std::cout << "Enter the number of rows and columns of matrix 1: ";
    std::cin >> rows1 >> columns1;

    std::cout << "Enter the elements of matrix 1:" << std::endl;
    for (int i = 0; i < rows1; i++)
    {
        for (int j = 0; j < columns1; j++)
        {
            std::cin >> mat1[i][j];
        }
    }

    // Matrix 2
    std::cout << "Enter the number of rows and columns of matrix 2: ";
    std::cin >> rows2 >> columns2;

    std::cout << "Enter the elements of matrix 2:" << std::endl;
    for (int i = 0; i < rows2; i++)
    {
        for (int j = 0; j < columns2; j++)
        {
            std::cin >> mat2[i][j];
        }
    }

    // Addition
    if (rows1 == rows2 && columns1 == columns2)
    {
        addMatrix(mat1, mat2, rows1, columns1);
    }
    else
    {
        std::cout << "Matrix addition is not possible. Dimensions do not match." << std::endl;
    }

    // Subtraction
    if (rows1 == rows2 && columns1 == columns2)
    {
        subtractMatrix(mat1, mat2, rows1, columns1);
    }
    else
    {
        std::cout << "Matrix subtraction is not possible. Dimensions do not match." << std::endl;
    }

    // Multiplication
    if (columns1 == rows2)
    {
        multiplyMatrix(mat1, mat2, rows1, columns1, columns2);
    }
    else
    {
        std::cout << "Matrix multiplication is not possible. Number of columns of matrix 1 should match the number of rows of matrix 2." << std::endl;
    }

    return 0;
}

/*
Above program calculates the addition, multiplication and subtraction of two matrices.
It check the particular condition is satisfied to perform particular operation on matrices.

*/



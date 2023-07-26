/*
 Implement a program that creates a dynamic 2D array and finds the maximum element.

Input:  Enter the number of rows: 2
        Enter the number of columns: 3
        Enter the elements of the matrix:
        3 6 9
        12 26 5

Output:  Maximum element: 26

*/

#include <iostream>

int main() {
  int rows, cols;
  std::cout << "Enter the number of rows: ";
  std::cin >> rows;
  std::cout << "Enter the number of columns: ";
  std::cin >> cols;

  int** matrix = new int*[rows];
  for (int i = 0; i < rows; i++) {
    matrix[i] = new int[cols];
  }

  std::cout << "Enter the elements of the matrix:\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      std::cin >> matrix[i][j];
    }
  }

  int maxElement = matrix[0][0];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (matrix[i][j] > maxElement) {
        maxElement = matrix[i][j];
      }
    }
  }

  std::cout << "Maximum element: " << maxElement << std::endl;

  for (int i = 0; i < rows; i++) {
    delete[] matrix[i];
  }
  delete[] matrix;

  return 0;
}

/*
This program demonstrates dynamic memory allocation for a 2D array.
It prompts the user to enter the number of rows and columns and then allocates memory accordingly.
The user is asked to input the elements of the matrix. The program finds the maximum element in the matrix and outputs it.
Finally, it releases the dynamically allocated memory using nested delete[] operators.
*/

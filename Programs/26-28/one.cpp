/*
Implement a program that creates a dynamic array of integers and calculates their sum.

Input: Enter the size of the array: 8
       Enter the elements of the array: 2 4 343 23 13 32 42 2

Output: Sum of the elements: 461

*/

#include <iostream>

int main() {
  int size;
  std::cout << "Enter the size of the array: ";
  std::cin >> size;

  int* arr = new int[size];

  std::cout << "Enter the elements of the array:\n";
  for (int i = 0; i < size; i++) {
    std::cin >> arr[i];
  }

  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }

  std::cout << "Sum of the elements: " << sum << std::endl;

  delete[] arr;
  return 0;
}

/*
This program demonstrates dynamic memory allocation by creating an integer array of user-defined size.
It prompts the user to enter the elements of the array, calculates their sum, and outputs the result.
Finally, it frees the dynamically allocated memory using the delete[] operator.
*/

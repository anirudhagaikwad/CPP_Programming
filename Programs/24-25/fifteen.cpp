/*
Write a program that takes an array, its size, and the number of rotations as input, and rotates the array left by
the given number of positions using pointer arithmetic. Output the rotated array.

Input:
Enter the size of the array: 6
Enter the elements of the array: 2 3 6 4 1 2
Enter the number of rotations: 2

Output: Rotated array: 6 4 1 2 2 3

*/

#include <iostream>

void rotateArray(int* arr, int size, int rotations) {
    rotations %= size;
    if (rotations < 0) {
        rotations += size;
    }

    int* temp = new int[rotations];
    for (int i = 0; i < rotations; ++i) {
        temp[i] = arr[i];
    }

    for (int i = rotations; i < size; ++i) {
        arr[i - rotations] = arr[i];
    }

    for (int i = 0; i < rotations; ++i) {
        arr[size - rotations + i] = temp[i];
    }

    delete[] temp;
}

int main() {
    int size, rotations;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int* arr = new int[size];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the number of rotations: ";
    std::cin >> rotations;

    // Rotate the array using pointer arithmetic
    rotateArray(arr, size, rotations);

    std::cout << "Rotated array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}

/*


The rotateArray function is defined to perform the left rotation. It takes three parameters:

arr: A pointer to the integer array to be rotated.
size: The size of the array.
rotations: The number of positions by which the array should be rotated.
To handle negative rotation values and rotation values greater than the size of the array, the rotations value is normalized to be within the range [0, size) by using the modulo operator.

A dynamic memory allocation is done using the new operator to create a temporary integer array temp to store the first rotations elements of the original array.

The first rotations elements of the original array are copied to the temp array using a for loop and pointer arithmetic.

The remaining elements of the original array (from index rotations to size-1) are shifted to the left (by rotations positions) in the same memory space using pointer arithmetic.

The temp array is then used to fill the last rotations positions of the original array.

The temp array is deallocated using the delete[] operator to free the dynamically allocated memory.

In the main function, the user is prompted to enter the size of the array and the array elements.

Next, the user is asked to input the number of rotations to be performed.

The rotateArray function is called with the user-provided inputs to perform the rotation.

Finally, the rotated array is displayed on the console.

The dynamically allocated memory for the array arr is released using the delete[] operator to avoid memory leaks.

This program is useful for scenarios where you need to perform cyclic shifts or left rotations on an array of integers. It demonstrates how to use pointer arithmetic to efficiently rotate elements in the array without the need for additional space.
However, it's essential to ensure that the input values are within the valid range to avoid undefined behavior.
*/

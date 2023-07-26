/*
In a small town, there's a group of children who love to play a game called "Array Reversal."
The game involves an array of numbers, and the objective is to reverse the order of elements in the array.
Implement a Program to reverse the elements of an array

Input: Original array: 1 2 3 4 5
Output: Reversed array: 5 4 3 2 1

*/

#include <iostream>

// Function to reverse the elements of an array using pointer arithmetic
void reverseArray(int* arr, int size) {
    int* start = arr;
    int* end = arr + size - 1;

    while (start < end) {
        // Swap the elements using pointer arithmetic
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    reverseArray(arr, size);

    std::cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
This program demonstrates how to reverse the elements of an array using pointer arithmetic.
It uses two pointers, start and end, initially pointing to the first and last elements of the array, respectively.
It then swaps the elements pointed by the two pointers and continues until the pointers meet in the middle.
*/

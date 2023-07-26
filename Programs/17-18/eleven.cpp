/*
The teacher has a list of exam scores (an array of integers) from a recent test.
The scores need to be sorted in ascending order, from the lowest score to the highest score.
Implement the bubble sort algorithm to sort an array of integers in ascending order.

Input: 3 8 98 76 32 31
Output: Sorted array: 3 8 31 32 76 98

*/

#include <iostream>

// Function to sort an array using bubble sort algorithm
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare adjacent elements and swap them if they are in the wrong order
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size;

    // Prompt the user to enter the size of the array
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    int arr[size];

    // Prompt the user to enter the elements of the array
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Sort the array using bubble sort
    bubbleSort(arr, size);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
The bubbleSort function takes an integer array (arr) and its size (size) as parameters.
It uses two nested loops to iterate through the array and compare adjacent elements.
If the elements are in the wrong order (the current element is greater than the next element), the function swaps them using a temporary variable temp.
This process is repeated until the array is sorted, with the largest elements "bubbling" to the end of the array in each iteration.
*/

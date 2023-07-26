/*
We have two sorted arrays, it needs to be merged into a single sorted array.
Write a program to merge two sorted arrays using dynamic memory allocation and pointers.

Input:
Enter the size of the first array: 3
Enter the size of the second array: 2
Enter the elements of the first array (sorted in ascending order): 2 4 6
Enter the elements of the second array (sorted in ascending order): 1 3

Output:
Merged Array: 1 2 3 4 6
*/


#include <iostream>
using namespace std;

// Function to merge two sorted arrays using dynamic memory allocation and pointers.
int* mergeArrays(int* arr1, int* arr2, int size1, int size2) {
    int* merged = new int[size1 + size2]; // Create a new dynamic array to hold the merged elements.

    int i = 0, j = 0, k = 0; // Initialize pointers for array traversal.

    // Compare elements from both arrays and merge them into the 'merged' array in sorted order.
    while (i < size1 && j < size2) {
        if (*(arr1 + i) <= *(arr2 + j)) {
            *(merged + k) = *(arr1 + i); // Assign the smaller element to the merged array.
            i++; // Move the pointer in the first array.
        } else {
            *(merged + k) = *(arr2 + j); // Assign the smaller element to the merged array.
            j++; // Move the pointer in the second array.
        }
        k++; // Move the pointer in the merged array.
    }

    // Copy any remaining elements from the first array into the merged array.
    while (i < size1) {
        *(merged + k) = *(arr1 + i);
        i++;
        k++;
    }

    // Copy any remaining elements from the second array into the merged array.
    while (j < size2) {
        *(merged + k) = *(arr2 + j);
        j++;
        k++;
    }

    return merged; // Return the pointer to the merged array.
}

// Function to print an array.
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " "; // Print each element of the array.
    }
    cout << endl; // Move to the next line after printing the array.
}

int main() {
    int size1, size2;
    cout << "Enter the size of the first array: ";
    cin >> size1; // Read the size of the first array from the user.
    cout << "Enter the size of the second array: ";
    cin >> size2; // Read the size of the second array from the user.

    // Create dynamic arrays to hold the elements of the two arrays.
    int* arr1 = new int[size1];
    int* arr2 = new int[size2];

    // Read elements of the first array from the user (assumed to be in sorted ascending order).
    cout << "Enter the elements of the first array (sorted in ascending order): ";
    for (int i = 0; i < size1; i++) {
        cin >> *(arr1 + i);
    }

    // Read elements of the second array from the user (assumed to be in sorted ascending order).
    cout << "Enter the elements of the second array (sorted in ascending order): ";
    for (int i = 0; i < size2; i++) {
        cin >> *(arr2 + i);
    }

    // Call the mergeArrays function to merge the two sorted arrays.
    int* mergedArray = mergeArrays(arr1, arr2, size1, size2);

    cout << "Merged Array: ";
    printArray(mergedArray, size1 + size2); // Print the merged array.

    // Deallocate the dynamic arrays to free the memory.
    delete[] arr1;
    delete[] arr2;
    delete[] mergedArray;

    return 0;
}

/*
This program merges two sorted arrays using dynamic memory allocation and pointers.
It defines a function mergeArrays that takes pointers to two integer arrays, the sizes of the arrays, and merges them into a new
dynamically allocated array. The main function asks the user for the sizes and elements of the two arrays, performs the merging operation,
and prints the merged array.
Finally, it deallocates the memory.
*/

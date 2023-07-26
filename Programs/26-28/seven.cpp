/*
We have two arrays of numbers. The task is to swap the two arrays using pointers.


Input:
Array 1 before swapping: 1 2 3 4 5
Array 2 before swapping: 6 7 8 9 10

Output:
Array 1 after swapping: 6 7 8 9 10
Array 2 after swapping: 1 2 3 4 5
*/

#include <iostream>
using namespace std;

void swapArrays(int* arr1, int* arr2, int size) {
    for (int i = 0; i < size; i++) {
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    const int size = 5;

    int arr1[size] = { 1, 2, 3, 4, 5 };
    int arr2[size] = { 6, 7, 8, 9, 10 };

    cout << "Array 1 before swapping: ";
    printArray(arr1, size);

    cout << "Array 2 before swapping: ";
    printArray(arr2, size);

    swapArrays(arr1, arr2, size);

    cout << "Array 1 after swapping: ";
    printArray(arr1, size);

    cout << "Array 2 after swapping: ";
    printArray(arr2, size);

    return 0;
}

/*
This program swaps two arrays using pointers. It defines a function swapArrays that takes pointers to two arrays and the size
of the arrays as arguments. It iterates over the arrays and swaps the elements at each index.
The main function demonstrates the usage of the swapArrays function by swapping two arrays and printing them before and after the swapping operation.

*/




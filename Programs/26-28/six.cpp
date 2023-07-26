/*
Write a program to sort an array using dynamic memory allocation and pointers.

Input:
Enter the size of the array: 5
Enter the elements of the array: 34 2 23 43 2

Output:
Array before sorting: 34 2 23 43 2
Array after sorting: 2 2 23 34 43

*/

#include <iostream>
using namespace std;

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    cout << "Array before sorting: ";
    printArray(arr, size);

    sortArray(arr, size);

    cout << "Array after sorting: ";
    printArray(arr, size);

    delete[] arr;

    return 0;
}

/*
This program sorts an array using dynamic memory allocation and pointers.
It defines functions to sort the array using the bubble sort algorithm and print the array.
The main function asks the user for the size of the array and its elements, prints the array before sorting, performs the sorting,
prints the array after sorting, and deallocates the memory.
*/

/*
Write a program to calculate the sum of elements in an array using recursion.

Input: {1, 2, 3, 4, 5}
Output: Sum of array elements = 15

*/

#include <iostream>
using namespace std;

// Recursive function to calculate the sum of array elements
int sumOfArray(int arr[], int size) {
    if (size == 0)
        return 0;
    return arr[size - 1] + sumOfArray(arr, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of array elements = " << sumOfArray(arr, size);

    return 0;
}

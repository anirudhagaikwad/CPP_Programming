/*
Given an array of integers, write a program to find the maximum product of two integers in the array.

Input: {1, 2, 3, 4, 5}
Output: Maximum Product: 20

*/
#include <iostream>

// Function to find the maximum product of two integers in an array
int findMaxProduct(int arr[], int size) {
    if (size < 2) {
        return -1; // Not enough elements in the array
    }

    int maxProduct = arr[0] * arr[1];

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] * arr[j] > maxProduct) {
                maxProduct = arr[i] * arr[j];
            }
        }
    }

    return maxProduct;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxProduct = findMaxProduct(arr, size);
    std::cout << "Maximum Product: " << maxProduct << std::endl;

    return 0;
}

/*
This program finds the maximum product of two integers in an array by brute force.
It checks all possible pairs of elements and updates the maxProduct if the product of the current pair is greater.
Finally, it returns the maximum product
*/

/*
Program to find the equilibrium index of an array,
where the equilibrium index is the position where the sum of elements to the left is equal to the sum of elements to the right

Input: {-7, 1, 5, 2, -4, 3, 0}
Output: Equilibrium Index: 3

*/

#include <iostream>

// Function to find the equilibrium index of an array
int findEquilibriumIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of array elements
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < size; i++) {
        totalSum -= arr[i]; // Reduce the total sum by the current element

        if (leftSum == totalSum) {
            return i; // Equilibrium index found
        }

        leftSum += arr[i]; // Add the current element to the left sum
    }

    return -1; // Equilibrium index not found
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    int equilibriumIndex = findEquilibriumIndex(arr, size);
    std::cout << "Equilibrium Index: " << equilibriumIndex << std::endl;

    return 0;
}

/*
This program finds the equilibrium index of an array by calculating the total sum of elements and comparing the left sum and right sum.
It subtracts the current element from the total sum and checks if the left sum is equal to the total sum.
If so, it returns the current index as the equilibrium index.
Otherwise, it adds the current element to the left sum and continues the traversal. If no equilibrium index is found, it returns -1.
*/

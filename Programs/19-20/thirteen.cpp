/*
Given an array of integers, write a program to find the length of the longest increasing subarray in the array.

Input:  {5, 6, 3, 5, 7, 8, 9, 1, 2}
Output: Length of Longest Increasing Subarray: 5
*/
#include <iostream>

// Function to find the length of the longest increasing subarray
int findLongestIncreasingSubarray(int arr[], int size) {
    int maxLength = 1;
    int currentLength = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) {
            currentLength++;
        } else {
            maxLength = std::max(maxLength, currentLength);
            currentLength = 1;
        }
    }

    return std::max(maxLength, currentLength);
}

int main() {
    int arr[] = {5, 6, 3, 5, 7, 8, 9, 1, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    int longestIncreasingSubarray = findLongestIncreasingSubarray(arr, size);
    std::cout << "Length of Longest Increasing Subarray: " << longestIncreasingSubarray << std::endl;

    return 0;
}


/*
This program finds the length of the longest increasing subarray in the array.
It initializes maxLength and currentLength to 1. It traverses the array starting from the second element.
If the current element is greater than the previous element, it increments currentLength.
If the current element is not greater, it updates maxLength to the maximum of maxLength and currentLength, and resets currentLength to 1.
Finally, it returns the maximum of maxLength and currentLength.
*/

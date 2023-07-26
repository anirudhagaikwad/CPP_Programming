/*
Program to find the maximum difference between two elements in an array,
where the larger element appears after the smaller element:

Input: {2, 3, 10, 6, 4, 8, 1}
Output: Maximum Difference: 8

*/
#include <iostream>

// Function to find the maximum difference between two elements in an array
int findMaxDifference(int arr[], int size) {
    int minElement = arr[0];
    int maxDiff = arr[1] - arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] - minElement > maxDiff) {
            maxDiff = arr[i] - minElement;
        }

        if (arr[i] < minElement) {
            minElement = arr[i];
        }
    }

    return maxDiff;
}

int main() {
    int arr[] = {2, 3, 10, 6, 4, 8, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maxDifference = findMaxDifference(arr, size);
    std::cout << "Maximum Difference: " << maxDifference << std::endl;

    return 0;
}


/*
This program finds the maximum difference between two elements in an array using a single traversal.
It keeps track of the minimum element encountered so far (minElement) and the maximum difference encountered so far (maxDiff).
For each element, it checks if the difference between the element and minElement is greater than maxDiff.
If so, it updates maxDiff. It also updates minElement if the current element is smaller. Finally, it returns the value of maxDiff.
*/

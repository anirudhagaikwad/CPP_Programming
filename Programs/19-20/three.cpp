/*
In a school's annual sports event, the coach wants to determine the second-highest score achieved by the students in the long jump competition.
The coach asks each participant to perform a long jump and records their distances in meters.
The distances are stored in an array, and the coach needs a program to find the second largest distance among all the recorded jumps.

Input: {5, 9, 3, 7, 1}
Output:  Second Largest element: 7

*/

#include <iostream>

// Function to find the second largest element in an array using pointer arithmetic
int findSecondLargestElement(int* arr, int size) {
    int largest = *arr; // Initialize the largest element with the first element
    int secondLargest = -1; // Initialize the second largest element as -1

    // Find the largest element
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            secondLargest = largest;
            largest = *(arr + i);
        } else if (*(arr + i) < largest && *(arr + i) > secondLargest) {
            secondLargest = *(arr + i);
        }
    }

    return secondLargest;
}

int main() {
    int arr[] = {5, 9, 3, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int secondLargest = findSecondLargestElement(arr, size);
    if (secondLargest != -1) {
        std::cout << "Second Largest element: " << secondLargest << std::endl;
    } else {
        std::cout << "No second largest element exists." << std::endl;
    }

    return 0;
}


/*
This program finds the second largest element in an array using pointer arithmetic.
It iterates through the array and maintains two variables, largest and secondLargest, to track the largest and second largest elements.
The second largest element is updated whenever a new element is found that is smaller than the largest but larger than the current second largest.
*/

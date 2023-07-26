/*
In a school, there is a line of students waiting for their turn to participate in a basketball competition.
Each student has a different height, and the school wants to find the tallest student in the line to lead the team.
To accomplish this, t create a program using pointer arithmetic to find the tallest student in the line.
The students' heights are stored in an array, and the program should use pointer arithmetic to traverse through the array and identify the tallest student.

Input:{5, 9, 3, 7, 1}
Output: Largest element: 9

*/

#include <iostream>

// Function to find the largest element in an array using pointer arithmetic
int findLargestElement(int* arr, int size) {
    int largest = *arr; // Initialize largest with the first element

    // Iterate through the array using pointer arithmetic
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            largest = *(arr + i);
        }
    }

    return largest;
}

int main() {
    int arr[] = {5, 9, 3, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largest = findLargestElement(arr, size);
    std::cout << "Largest element: " << largest << std::endl;

    return 0;
}
/*
This program demonstrates how to find the largest element in an array using pointer arithmetic.
It iterates through the array using a pointer and compares each element with the current largest element.
*/

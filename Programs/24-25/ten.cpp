/*
In a school, the teacher wants to calculate the average test score of a group of students.
The teacher has already collected the test scores of each student and stored them in an array.
However, to save memory and improve performance, the teacher decides to use pointers to calculate the average instead of copying the entire array.
Give a program to fulfill teacher's requirements.

Input: 1, 2, 3, 4, 5
Output: Average of array elements: 3

*/
#include <iostream>

// Function to find the average of an array
double findAverage(int* arr, int size) {
    int sum = 0;  // Variable to store the sum of array elements

    // Iterate through each element of the array
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // Add the current element to the sum
    }

    return static_cast<double>(sum) / size;  // Calculate and return the average
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Declare and initialize an integer array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    double average = findAverage(arr, size);  // Call the function to find the average
    std::cout << "Average of array elements: " << average << std::endl;  // Print the average
    return 0;  // Return 0 to indicate successful execution
}

/*
The findAverage() function takes an integer array (int* arr) and the size of the array (int size) as input and returns the
average of the array elements as a double.
It initializes a variable sum to 0 to store the sum of array elements.

The function uses a for loop to iterate through each element of the array.
On each iteration, it adds the current element to the sum by dereferencing the pointer (*(arr + i)).

After the loop, the function calculates the average by dividing the sum by the size of the array.
The static_cast<double>(sum) is used to ensure that the division is performed with floating-point arithmetic, resulting in a
double average.
*/

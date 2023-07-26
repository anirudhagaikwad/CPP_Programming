/*
Write a program that reads the heights of the students from the teacher's input and stores them in an array.
Use pointers to compare the heights and determine the second tallest student in the class.

Input: {5, 8, 3, 9, 2}
Output: Second largest : 8

*/
#include <iostream>

// Function to find the second largest element in an array
int findSecondLargest(int* arr, int size) {
    int largest = *arr;  // Variable to store the largest element
    int secondLargest = *arr;  // Variable to store the second largest element

    // Iterate through each element of the array
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            // If the current element is greater than the largest element,
            // update the second largest element and the largest element accordingly
            secondLargest = largest;
            largest = *(arr + i);
        } else if (*(arr + i) > secondLargest && *(arr + i) < largest) {
            // If the current element is greater than the second largest element
            // and smaller than the largest element, update the second largest element
            secondLargest = *(arr + i);
        }
    }

    return secondLargest;  // Return the second largest element
}

int main() {
    int arr[] = {5, 8, 3, 9, 2};  // Declare and initialize an integer array
    int size = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array
    int secondLargest = findSecondLargest(arr, size);  // Call the function to find the second largest element
    std::cout << "Second largest : " << secondLargest << std::endl;  // Print the second largest element
    return 0;  // Return 0 to indicate successful execution
}

/*
The findSecondLargest() function takes an integer array (int* arr) and the size of the array (int size) as input and returns
the second largest element in the array as an int. It initializes two variables, largest and secondLargest,
to the first element of the array.

The function uses a for loop to iterate through each element of the array starting from the second element (index 1).
On each iteration, it compares the current element with the largest element. If the current element is greater than largest,
it updates secondLargest with the previous largest value and assigns the current element as the new largest.
If the current element is greater than secondLargest but smaller than largest, it updates secondLargest with the current element.

After the loop completes, the function returns the secondLargest element.
*/

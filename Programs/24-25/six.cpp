/*
Write a program to find the maximum number in an array using pointers.

Input: {10, 30, 50, 20, 40}
Output: The maximum number is: 50

*/

#include <iostream>

// Function to find the maximum number using pointers
int findMax(int* numbers, int size) {
    int max = *numbers;

    for (int i = 1; i < size; i++) {
        if (*(numbers + i) > max) {
            max = *(numbers + i);
        }
    }

    return max;
}

int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {10, 30, 50, 20, 40};

    // Call the function to find the maximum number
    int maxNumber = findMax(numbers, SIZE);

    std::cout << "The maximum number is: " << maxNumber << std::endl;

    return 0;
}

/*
This program finds the maximum number in an array using pointers.
The findMax function takes an array and its size as parameters. It initializes the variable max with the value of the first
element in the array. Then, it iterates through the remaining elements of the array and updates max if a larger element is found.
Finally, the main function initializes an array of numbers, calls the findMax function, and displays the maximum number.
*/

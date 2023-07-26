/*
Given an array of integers containing only 0s and 1s,
write a program to segregate the 0s and 1s in the array,
where all the 0s should come before all the 1s.

Input: {1, 0, 1, 0, 1, 0, 0, 1}
Output: Segregated Array: 0 0 0 0 1 1 1 1

*/

#include <iostream>

// Function to segregate 0s and 1s in an array
void segregateZerosAndOnes(int arr[], int size) {
    int countZeros = 0;

    // Count the number of zeros
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            countZeros++;
        }
    }

    // Place the zeros at the beginning of the array
    for (int i = 0; i < countZeros; i++) {
        arr[i] = 0;
    }

    // Place the ones after the zeros
    for (int i = countZeros; i < size; i++) {
        arr[i] = 1;
    }
}

int main() {
    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    segregateZerosAndOnes(arr, size);

    std::cout << "Segregated Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
 This program segregates the 0s and 1s in an array by counting the number of zeros (countZeros).
 It then places the zeros at the beginning of the array by assigning 0 to the first countZeros elements.
 Finally, it places the ones after the zeros by assigning 1 to the remaining elements.
*/

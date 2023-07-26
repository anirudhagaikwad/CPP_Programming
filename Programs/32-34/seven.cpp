/*
Write a program to calculate the sum of elements in an array using tail recursion.

Input: {1, 2, 3, 4}
Output: Sum of array elements: 10

*/

#include <iostream>
using namespace std;

int sum(int arr[], int size, int index = 0, int result = 0) {
    if (index == size)
        return result;
    else
        return sum(arr, size, index + 1, result + arr[index]); // Tail recursion
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int total = sum(arr, size);
    cout << "Sum of array elements: " << total << endl;
    return 0;
}

/*
The program calculates the sum of elements in an array using tail recursion.
The function sum takes the array, size, index, and an accumulator result as arguments.
In each recursive call, the current element of the array is added to the result, and the index is incremented.
The recursion stops when the index becomes equal to the size of the array, and the accumulated result is returned.
*/

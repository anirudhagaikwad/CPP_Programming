/*
You are a skilled software developer working on an exciting project to develop an inventory management system for a local grocery store.
As part of this endeavor, you have been assigned the task of creating a function template to efficiently calculate the total sum of
product quantities in the store's inventory.

Input: {1, 2, 3, 4, 5}
Output: Sum: 15

Input: {3.0, 4.5, 1.2, 2.7}
Output: Sum: 11.4

*/

#include <iostream>
using namespace std;

// Function template 'calculateSum' finds the sum of elements in an array.
// The template takes two parameters: 'arr', representing the array of type 'T',
// and 'N', the size of the array.
// The function iterates through the array and accumulates the elements to calculate the sum.
template <typename T, size_t N>
T calculateSum(T arr[N]) {
    T sum = 0;
    for (size_t i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    // Example 1: Calculate the sum of an array of integers.
    int intArr[] = {1, 2, 3, 4, 5};
    cout << "Sum: " << calculateSum<int, 5>(intArr) << endl;            // Output: Sum: 15

    // Example 2: Calculate the sum of an array of doubles.
    double doubleArr[] = {3.0, 4.5, 1.2, 2.7};
    cout << "Sum: " << calculateSum<double, 4>(doubleArr) << endl;      // Output: Sum: 11.4

    return 0;
}

/*
This C++ program demonstrates the use of a function template to efficiently find the sum of an array.
The 'calculateSum' function template takes an array 'arr' of type 'T' and size 'N',
and calculates the total sum of elements in the array.

*/


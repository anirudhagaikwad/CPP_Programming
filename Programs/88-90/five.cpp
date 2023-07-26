/*
You are an innovative software engineer working on a challenging project to create an automated sorting system for a busy warehouse.
As part of this critical endeavor, you have been assigned the task of designing a function template to find the minimum element in an array
of products based on their numerical attributes.

Input: {10, 5, 8, 3, 15}
Output: Min: 3

Input: {3.0, 4.5, 1.2, 2.7}
Output: Min: 1.2

*/

#include <iostream>
using namespace std;

// Function template 'findMin' finds the minimum element in an array.
// The template takes two parameters: 'arr', representing the array of type 'T', and 'N', the size of the array.
// The function iterates through the array to identify the minimum value using a comparison algorithm.
// It then returns the minimum value found in the array.
template <typename T, size_t N>
T findMin(T arr[N]) {
    T minVal = arr[0];
    for (size_t i = 1; i < N; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

int main() {
    // Create an array of integers and find the minimum value.
    int intArr[] = {10, 5, 8, 3, 15};
    cout << "Min: " << findMin<int, 5>(intArr) << endl;           // Output: Min: 3

    // Create an array of doubles and find the minimum value.
    double doubleArr[] = {3.0, 4.5, 1.2, 2.7};
    cout << "Min: " << findMin<double, 4>(doubleArr) << endl;     // Output: Min: 1.2

    return 0;
}

/*
This C++ program demonstrates the use of a function template to find the minimum element in an array.
The 'findMin' function template takes an array 'arr' of type 'T' and size 'N', and returns the minimum value in the array.

*/


/*
You are a software engineer working for a health and wellness startup that aims to revolutionize the fitness industry with cutting-edge
technology. As part of the development team, you have been assigned a critical task:
to create a flexible program to calculate the average of an array of fitness data.

Input: {10, 20, 30, 40, 50}
Output:Average: 30

Input:  {3.0, 4.0, 5.0}
Output: Average: 4

*/


#include <iostream>
using namespace std;

// Function template 'calculateAverage' calculates the average of an array of numeric values.
// The template takes two parameters: 'arr', representing the array, and 'N', representing the size of the array.
// The function returns the calculated average of type 'T'.
template <typename T, size_t N>
T calculateAverage(T arr[N]) {
    T sum = 0;
    for (size_t i = 0; i < N; i++) {
        sum += arr[i];
    }
    return sum / static_cast<T>(N);
}

int main() {
    // Integer array with values 10, 20, 30, 40, 50.
    int intArr[] = {10, 20, 30, 40, 50};
    cout << "Average: " << calculateAverage<int, 5>(intArr) << endl;       // Output: Average: 30

    // Double array with values 3.0, 4.0, 5.0.
    double doubleArr[] = {3.0, 4.0, 5.0};
    cout << "Average: " << calculateAverage<double, 3>(doubleArr) << endl;  // Output: Average: 4

    return 0;
}

/*
This C++ program demonstrates the use of a function template to calculate the average of an array of numeric values.
The template function 'calculateAverage' takes an array and its size as parameters and returns the average value.

*/




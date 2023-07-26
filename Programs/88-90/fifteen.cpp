/*
As part of the platform's development, you are tasked with creating a function template to concatenate two arrays of different data types.
This function will enable the platform to merge and present content from multiple sources, ensuring users receive a diverse and rich set
of posts in their newsfeeds.

Input: {1, 2, 3}
       {4, 5}
Output: Result: 1 2 3 4 5

Input: {1.1, 2.2, 3.3}
       {0.5, 0.6}
Output: Result: 1.1 2.2 3.3 0.5 0.6

*/

#include <iostream>
using namespace std;

template <typename T, size_t N, size_t M>
void concatenateArrays(const T arr1[N], const T arr2[M], T result[N + M]) {
    for (size_t i = 0; i < N; i++) {
        result[i] = arr1[i];
    }
    for (size_t i = 0; i < M; i++) {
        result[N + i] = arr2[i];
    }
}

int main() {
    int intArr1[] = {1, 2, 3};
    int intArr2[] = {4, 5};
    int intResult[5];
    concatenateArrays<int, 3, 2>(intArr1, intArr2, intResult);
    cout << "Result: ";
    for (int i = 0; i < 5; i++) {
        cout << intResult[i] << " ";   // Output: Result: 1 2 3 4 5
    }
    cout << endl;

    double doubleArr1[] = {1.1, 2.2, 3.3};
    double doubleArr2[] = {0.5, 0.6};
    double doubleResult[5];
    concatenateArrays<double, 3, 2>(doubleArr1, doubleArr2, doubleResult);
    cout << "Result: ";
    for (int i = 0; i < 5; i++) {
        cout << doubleResult[i] << " ";   // Output: Result: 1.1 2.2 3.3 0.5 0.6
    }
    cout << endl;
    return 0;
}

/*
This C++ program demonstrates the use of a function template to concatenate two arrays of different data types efficiently. The function template concatenateArrays takes three template parameters: T, N, and M. T represents the data type of the arrays, while N and M represent the sizes of the input arrays.

The concatenateArrays function template efficiently combines the elements of two input arrays arr1 and arr2 into a new array result. The result array has a size equal to the sum of the sizes of arr1 and arr2 (i.e., N + M).

The template function uses pointer arithmetic to iterate over the elements of arr1 and arr2 and copy them to the appropriate positions in the result array. The elements of arr1 are copied to the first N positions of result, and the elements of arr2 are copied to the remaining M positions starting from position N in the result array.

*/



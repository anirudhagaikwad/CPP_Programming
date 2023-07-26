/*
You are a skilled audio engineer working on an exciting project to enhance the sound quality of audio recordings.
As part of this critical endeavor, you have been assigned the task of creating a function template to perform element-wise addition
of two arrays representing audio signals captured from different microphones.

Input: {1, 2, 3}
       {4, 5, 6}
Output: Result: 5 7 9


Input: {1.1, 2.2, 3.3}
       {0.5, 0.6, 0.7}
Output: Result: 1.6 2.8 4


*/


#include <iostream>
using namespace std;

// Function template 'arrayElementWiseAddition' performs element-wise addition of two arrays.
// The template takes three parameters: 'arr1', representing the first input array of type 'T',
// 'arr2', representing the second input array of type 'T', and 'result', the output array of type 'T' to store the results.
// The function iterates through the arrays and adds corresponding elements of 'arr1' and 'arr2' to 'result' array.
template <typename T, size_t N>
void arrayElementWiseAddition(const T arr1[N], const T arr2[N], T result[N]) {
    for (size_t i = 0; i < N; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    // Example 1: Perform element-wise addition of two integer arrays.
    int intArr1[] = {1, 2, 3};
    int intArr2[] = {4, 5, 6};
    int intResult[3];
    arrayElementWiseAddition<int, 3>(intArr1, intArr2, intResult);
    cout << "Result: ";
    for (int i = 0; i < 3; i++) {
        cout << intResult[i] << " ";   // Output: Result: 5 7 9
    }
    cout << endl;

    // Example 2: Perform element-wise addition of two double arrays.
    char charArr1[] = {'a', 'b', 'c'};
    char charArr2[] = {'.', '#', '@'};
    char charResult[3];
    arrayElementWiseAddition<char, 3>(charArr1, charArr2, charResult);
    cout << "Result: ";
    for (int i = 0; i < 3; i++) {
        cout << charResult[i] << " ";   // Result: Å à ú
    }
    cout << endl;
    return 0;
}

/*
 This C++ program demonstrates the use of a function template to perform element-wise addition of two arrays.
 The 'arrayElementWiseAddition' function template takes two input arrays 'arr1' and 'arr2' of type 'T' and size 'N',
 and calculates the element-wise addition to produce an output array 'result'.

*/


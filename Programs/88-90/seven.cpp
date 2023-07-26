/*
You are a talented software engineer working on an exciting project to develop a playlist reordering system for a popular music
streaming platform. As part of this endeavor, you have been tasked with creating a function template to efficiently reverse the order of
songs in a playlist, allowing users to enjoy their favorite tracks in a different sequence.

Input: {1, 2, 3, 4, 5}
Output: Reversed array: 5 4 3 2 1

Input: {1.1, 2.2, 3.3, 4.4}
Output: Reversed array: 4.4 3.3 2.2 1.1

*/


#include <iostream>
using namespace std;

// Function template 'reverseArray' reverses the order of elements in an array.
// The template takes two parameters: 'arr', representing the array of type 'T',
// and 'N', the size of the array.
// The function efficiently reverses the array by swapping corresponding elements from both ends.
template <typename T, size_t N>
void reverseArray(T arr[N]) {
    for (size_t i = 0; i < N / 2; i++) {
        T temp = arr[i];
        arr[i] = arr[N - 1 - i];
        arr[N - 1 - i] = temp;
    }
}

int main() {
    // Example 1: Reverse an array of integers.
    int intArr[] = {1, 2, 3, 4, 5};
    reverseArray<int, 5>(intArr);
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++) {
        cout << intArr[i] << " ";   // Output: Reversed array: 5 4 3 2 1
    }
    cout << endl;

    // Example 2: Reverse an array of doubles.
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4};
    reverseArray<double, 4>(doubleArr);
    cout << "Reversed array: ";
    for (int i = 0; i < 4; i++) {
        cout << doubleArr[i] << " ";   // Output: Reversed array: 4.4 3.3 2.2 1.1
    }
    cout << endl;
    return 0;
}

/*
This C++ program demonstrates the use of a function template to efficiently reverse an array.
The 'reverseArray' function template takes an array 'arr' of type 'T' and size 'N',
and reverses the order of elements in the array.

*/

/*
Write a program to find the maximum element in an array using indirect recursion.

Input: {3, 8, 1, 6, 2, 9, 5}
Output: Maximum element: 9

*/

#include <iostream>
using namespace std;

int findMax2(int arr[], int size); // Function prototype

int findMax1(int arr[], int size) {
    if (size == 1)
        return arr[0];
    else {
        int max1 = arr[0];
        int max2 = findMax2(arr + 1, size - 1); // Indirect recursion
        return (max1 > max2) ? max1 : max2;
    }
}

int findMax2(int arr[], int size) {
    if (size == 1)
        return arr[0];
    else {
        int max1 = arr[0];
        int max2 = findMax1(arr + 1, size - 1); // Indirect recursion
        return (max1 > max2) ? max1 : max2;
    }
}

int main() {
    int arr[] = {3, 8, 1, 6, 2, 9, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxElement = findMax1(arr, size);
    cout << "Maximum element: " << maxElement << endl;
    return 0;
}

/*
The program finds the maximum element in an array using indirect recursion.
It defines two functions, findMax1 and findMax2, which call each other to find the maximum element.
The base case is when the size of the array becomes 1, where the recursion stops. In each recursive call,
the function compares the first element of the current subarray with the maximum element obtained from the
recursive call with the rest of the array.

*/

/*
Write a Program to find the leaders in an array, where a leader is an element that is greater than all the elements to its right

Input: {16, 17, 4, 3, 5, 2}
Output: Leaders: 2 5 17

*/

#include <iostream>
using namespace std;

// Function to find the leaders in an array
void findLeaders(int arr[], int size) {
    int maxRight = arr[size - 1];

    cout << "Leaders: " << maxRight << " ";

    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > maxRight) {
            cout << arr[i] << " ";
            maxRight = arr[i];
        }
    }

    cout <<endl;
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    findLeaders(arr, size);

    return 0;
}

/*
This program finds the leaders in an array by traversing the array from right to left.
It starts with the last element as the maximum right element (maxRight).
It prints maxRight and updates it if an element greater than maxRight is found.
Finally, it prints the leaders in the array.
*/

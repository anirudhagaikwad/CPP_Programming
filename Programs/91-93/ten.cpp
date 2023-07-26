/*
Given a sequence of integers, implement a deque to find the median of each subarray of size k.

Input: N= 5
       K= 3
       array= 32 12 43 56 76
Output: 32 43 56

Input: N= 4
       K= 2
       array= 21 32 43 22
Output: 26.5 37.5 32.5

*/

#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

// Function to find and print the median for each subarray of size 'k'
void medianInSubarray(int arr[], int n, int k) {
    deque<int> dq; // Declaring a deque (double-ended queue) to store the elements of the subarray
    for (int i = 0; i < k; i++) {
        dq.push_back(arr[i]); // Pushing the first 'k' elements into the deque
    }
    sort(dq.begin(), dq.end()); // Sorting the deque in ascending order to find the median

    // Calculating and printing the median of the first subarray
    if (k % 2 == 0)
        cout << (dq[k / 2 - 1] + dq[k / 2]) / 2.0 << " "; // If 'k' is even, average of middle two elements
    else
        cout << dq[k / 2] << " "; // If 'k' is odd, middle element

    // Sliding the subarray by one element at a time and finding the median for each subarray
    for (int i = k; i < n; i++) {
        dq.push_back(arr[i]); // Adding the next element to the deque
        dq.pop_front(); // Removing the first element to maintain the size 'k' subarray
        sort(dq.begin(), dq.end()); // Sorting the deque to find the median

        // Calculating and printing the median of the current subarray
        if (k % 2 == 0)
            cout << (dq[k / 2 - 1] + dq[k / 2]) / 2.0 << " "; // If 'k' is even, average of middle two elements
        else
            cout << dq[k / 2] << " "; // If 'k' is odd, middle element
    }
}

int main() {
    int n, k;
    cin >> n >> k; // User input for the size of the array 'n' and the subarray size 'k'
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i]; // User input for the elements of the array 'arr'

    medianInSubarray(arr, n, k); // Calling the function to find and print the median for each subarray

    return 0; // Indicates successful execution of the program
}


/*
This program uses a deque to efficiently find the median of each subarray of size k in a given sequence of integers.
*/

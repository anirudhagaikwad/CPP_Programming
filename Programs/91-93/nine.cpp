/*
Given a sequence of integers, implement a deque to find the maximum element in each subarray of size k.

Input: N=6
       K=2
       array= 45 32 41 67 54 12
Output: 45 41 67 67 54

*/

#include <iostream>
#include <deque>
using namespace std;

void maxInSubarray(int arr[], int n, int k) {
    deque<int> dq;
    for (int i = 0; i < n; i++) {
        if (!dq.empty() && dq.front() == i - k)
            dq.pop_front();
        while (!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();
        dq.push_back(i);
        if (i >= k - 1)
            cout << arr[dq.front()] << " ";
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    maxInSubarray(arr, n, k);
    return 0;
}

/*
This program uses a deque to efficiently find the maximum element in each subarray of size k in a given sequence of integers.
*/

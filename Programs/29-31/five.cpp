/*
Write a program to perform binary search on an array using recursion.

Input: {1, 3, 5, 7, 9, 11, 13}
Output:
Enter the element to search: 6
Element not found

Input: {1, 3, 5, 7, 9, 11, 13}
Output:
Enter the element to search: 9
Element found at index 4

*/

#include <iostream>
using namespace std;

// Recursive function to perform binary search
int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2; //get mid index
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            return binarySearch(arr, mid + 1, high, key); //search in upper half
        else
            return binarySearch(arr, low, mid - 1, key); //search in lower half
    }
    return -1;  // Key not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int index = binarySearch(arr, 0, n - 1, key);
    if (index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}

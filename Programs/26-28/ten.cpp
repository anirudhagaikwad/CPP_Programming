/*
 Suppose we have a magical treasure chest that contains a collection of enchanted gems.
 Each gem is unique and has a specific magical power. The gems are arranged in ascending order based on their power.
 One day, a young wizard named Alex arrives at the treasure chest and wants to find a particular gem. Help them to find gem in O(log n) time.

Input:
Enter the size of the array: 6
Enter the elements  (sorted in ascending order): 98 22 43 12 123 13
Enter the target element: 123

Output:
Element found at index: 4

*/

#include <iostream>
using namespace std;

int binarySearch(int* arr, int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (*(arr + mid) == target) {
            return mid;
        } else if (*(arr + mid) < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter the elements (sorted in ascending order): ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }

    int target;
    cout << "Enter the target element: ";
    cin >> target;

    int index = binarySearch(arr, size, target);

    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }

    delete[] arr;

    return 0;
}

/*
This program performs binary search on a sorted array using pointers.
It defines a function binarySearch that takes a pointer to an integer array, the size of the array, and the target element as arguments.
It performs the binary search algorithm by comparing the middle element with the target element and narrowing down the search range accordingly.
The main function asks the user for the size of the array, the sorted elements, and the target element, performs the binary search, and displays the result.
*/

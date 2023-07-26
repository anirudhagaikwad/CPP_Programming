/*
Write a CPP function to Increment each element of an integer array by 1 by using pointer arithmetic operation.

Input: {1, 2, 3, 4, 5}
Output: Modified array: 2 3 4 5 6

*/

#include <iostream>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;

    for (int i = 0; i < 5; i++) {
        *ptr += 1;
        ptr++;
    }

    std::cout << "Modified array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}


/*
The program initializes an integer array arr and a pointer ptr pointing to the first element of the array.
It uses a for loop to iterate through the array using pointer arithmetic. Inside the loop, the value pointed to by ptr is incremented by 1,
and the pointer is incremented to point to the next element.
After modifying the array elements, the program uses another for loop to print the modified array.
*/

/*
Write a program to dynamically allocate an array of integers of size 'n' and deallocate the memory.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int* arr = new int[n]; // Dynamic memory allocation

    cout<<"Enter ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    // Use the allocated memory

    delete[] arr; // Deallocate the memory

    return 0;
}

/*
This program demonstrates the dynamic allocation and deallocation of memory using the new and delete operators.
It asks the user for the size of the array, allocates memory accordingly, and then releases the memory using delete[].
*/

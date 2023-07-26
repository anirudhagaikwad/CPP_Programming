/*
Once upon a time in a software kingdom, there was a young programmer named Alice.
She was working on a magical program that involved handling pointers, one pointer was pointing to a mysterious location.
Access "The Unpredictable Pointer" and see what lies hidden at its destination.

*/

#include <iostream>

int* createArray(int size) {
    int* arr = new int[size];
    return arr;
}

int main() {
    int* ptr = createArray(5);
    delete[] ptr;

    // Accessing the dangling pointer
    std::cout << "Value at the dangling pointer: " << *ptr << std::endl;

    return 0;
}

/*
This program demonstrates a dangling pointer scenario. It creates an array dynamically using createArray function and assigns it to ptr.
Afterward, the memory is deallocated using delete[]. However, accessing the dangling pointer ptr afterwards leads to undefined behavior.
*/

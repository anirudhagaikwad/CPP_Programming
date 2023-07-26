/*
You are working on a secret project at your top-notch research lab.
Your team has received a mysterious data structure that contains valuable information, but its internal layout is unknown.
The data structure is represented as a void pointer to keep its contents hidden.

To unravel the secrets hidden within, you need to perform pointer arithmetic on this void pointer. .
*/

#include <iostream>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    void* ptr = numbers;

    int* intPtr = static_cast<int*>(ptr); //cast void pointer to int

    std::cout << "First element: " << *intPtr << std::endl;
    std::cout << "Third element: " << *(intPtr + 2) << std::endl;

    return 0;
}

/*
 This program demonstrates performing pointer arithmetic on a void pointer.
 The ptr is initially assigned the address of the numbers array.
 It is then cast to an int pointer using static_cast.
 The program dereferences the pointer and also accesses the third element of the array using pointer arithmetic
*/

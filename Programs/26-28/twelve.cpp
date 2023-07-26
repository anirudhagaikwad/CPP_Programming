/*
Sherlock's pointer is a magical instrument that can dynamically point to various data types and reveal their values.
With the help of this pointer, Sherlock can roam through the town, peek into various data structures, and print out the values hidden within them.
Write a program for Sherlock's pointer to point different data structures.

*/

#include <iostream>

int main() {
    int number = 10;
    float pi = 3.14;
    char letter = 'A';

    void* ptr;

    ptr = &number;
    std::cout << "Value of number: " << *(int*)ptr << std::endl;

    ptr = &pi;
    std::cout << "Value of pi: " << *(float*)ptr << std::endl;

    ptr = &letter;
    std::cout << "Value of letter: " << *(char*)ptr << std::endl;

    return 0;
}

/*
In this program, a void pointer ptr is created. \
It is then assigned the addresses of number, pi, and letter variables, respectively.
The program casts the void pointer to the appropriate data type before dereferencing it to print the values.
*/

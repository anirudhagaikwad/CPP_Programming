/*
A group of spies received a secret message encoded as a character string.
They need to decode and print the hidden message to gather critical information about an enemy operation.
Print a character string using pointer arithmetic.

Input: Hello
Output: Hello

*/

#include <iostream>

int main() {
    char str[] = "Hello";
    char* ptr = str;

    while (*ptr != '\0') {
        std::cout << *ptr;
        ptr++;
    }

    return 0;
}


/*
The program initializes a character array str and a pointer ptr pointing to the first character of the string.
It uses a while loop to iterate through the string using pointer arithmetic. The character pointed to by ptr is printed,
and the pointer is incremented to point to the next character.
The loop continues until the null character ('\0') is encountered, indicating the end of the string.
*/

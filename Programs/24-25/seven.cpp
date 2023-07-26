/*
In a busy conference hall, there is an event where participants are wearing name badges with their names printed on them.
The organizers notice that some name badges were printed incorrectly, with the names spelled backward.
To quickly correct these badges, they decide to use a computer program that reverses the names using pointers.

Write a program to reverse a name badge using pointers.
The program should take the name as input and use pointers to reverse the order of characters in the name, correcting any badges with backward names.

Input: Before reverse: Hello, World!
Output: After reverse: !dlroW ,olleH
*/

#include <iostream>
#include <cstring>

// Function to reverse a string in-place
void reverseString(char* str) {
    int length = strlen(str);  // Calculate the length of the string
    char* start = str;  // Pointer to the start of the string
    char* end = str + length - 1;  // Pointer to the end of the string

    // Swap characters from the start and end pointers until they meet in the middle
    while (start < end) {
        char temp = *start;  // Store the character at the start pointer
        *start = *end;  // Replace the character at the start pointer with the character at the end pointer
        *end = temp;  // Replace the character at the end pointer with the stored character
        start++;  // Move the start pointer to the next character
        end--;  // Move the end pointer to the previous character
    }
}

int main() {
    char str[] = "Hello, World!";  // Create a character array (C-style string)
    std::cout << "Before reverse: " << str << std::endl;  // Print the original string
    reverseString(str);  // Call the function to reverse the string
    std::cout << "After reverse: " << str << std::endl;  // Print the reversed string
    return 0;
}

/*
The reverseString() function takes a C-style string (char* str) as input and reverses it in-place.
It calculates the length of the string using the strlen() function and initializes two pointers, start and end, to
the start and end of the string respectively.

The function uses a while loop to swap characters between the start and end pointers.
It starts from the outermost characters of the string and progresses towards the middle by incrementing the start pointer
and decrementing the end pointer on each iteration.
It continues until the start pointer crosses or meets the end pointer.

Inside the loop, the function uses a temporary variable temp to store the character at the start pointer, then assigns the
character at the end pointer to the start pointer, and finally assigns the stored character (temp) to the end pointer. This swapping operation effectively reverses the string.

*/



/*
Emma, a student, has been assigned a task by her computer science teacher.
The task is to write a program that counts the number of words in a given string.
To make it more interesting, her teacher challenges her to use pointers in the program.
Help Emma to complete the task.

Input: "Hello, how are you?"
Output: Number of words: 4
*/

#include <iostream>
#include <cstring>
#include <cctype>

// Function to count the number of words in a string
int countWords(char* str) {
    int count = 0;  // Counter to keep track of the number of words
    bool inWord = false;  // Flag to track whether currently inside a word or not

    // Iterate through each character in the string until the null terminator is reached
    while (*str) {
        if (std::isalpha(*str)) {  // Check if the current character is alphabetic
            if (!inWord) {  // If not already in a word, increment the word count
                count++;
                inWord = true;  // Set the flag to indicate being inside a word
            }
        } else {
            inWord = false;  // Reset the flag when encountering a non-alphabetic character
        }
        str++;  // Move to the next character in the string
    }
    return count;  // Return the total count of words
}

int main() {
    char str[] = "Hello, how are you?";  // Create a character array (C-style string)
    int count = countWords(str);  // Call the function to count the words
    std::cout << "Number of words: " << count << std::endl;  // Print the word count
    return 0;
}

/*
The countWords() function takes a C-style string (char* str) as input and returns the count of words in that string.
It initializes a counter variable count to keep track of the number of words and a boolean variable inWord to indicate
whether the function is currently inside a word or not.

The function uses a while loop to iterate through each character in the string until it encounters the null terminator ('\0').
Inside the loop, it checks if the current character is alphabetic using the std::isalpha() function from <cctype>.
If the character is alphabetic, it further checks if it is the start of a new word by verifying if inWord is false.
If it is the start of a new word, the word count is incremented, and inWord is set to true to indicate being inside a word.

If the current character is not alphabetic, the function sets inWord to false to indicate being outside a word.
This handles cases where non-alphabetic characters like spaces or punctuation mark the end of a word.

After processing each character in the string, the function returns the final word count.

*/


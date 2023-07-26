/*
In a thrilling treasure hunt game, players navigate through a mysterious and ancient maze to find hidden treasures.
To ensure their safety during the treasure hunt, players must follow a rule: "Check if a pointer is null before dereferencing it."
Write a simple program to help player in thrilling treasure hunt game.

Input: ptr=NULL
Output:  Pointer is null!
*/

#include <iostream>

int main() {
    int* ptr = NULL;

    if (ptr != NULL) {
        *ptr = 10; // Dereferencing the pointer
    } else {
        std::cout << "Pointer is null!" << std::endl;
    }

    return 0;
}

/*
This program showcases the usage of null pointers. It initializes ptr as a null pointer using NULL.
It then checks if ptr is not null before attempting to dereference it.
Since it is indeed a null pointer, it prints a message instead of dereferencing.
*/

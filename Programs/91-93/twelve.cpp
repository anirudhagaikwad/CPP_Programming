/*
Given a linked list, check if it is a palindrome using the std::list container from the STL library.

Input: {1, 2, 3, 2, 1}
Output: Palindrome

Input: {1, 2, 3, 4, 5}
Output: Not Palindrome

*/

#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a linked list named 'linkedList' with elements 1, 2, 3, 2, and 1
    list<int> linkedList = {1, 2, 3, 2, 1};

    // Create a new linked list named 'reversedLinkedList' and copy 'linkedList' to it
    list<int> reversedLinkedList = linkedList;
    // Reverse the 'reversedLinkedList'
    reversedLinkedList.reverse();

    // Check if the 'linkedList' and its reverse 'reversedLinkedList' are equal
    // i.e., if the linked list is a palindrome
    bool isPalindrome = (linkedList == reversedLinkedList);

    // Output whether the linked list is a palindrome or not
    cout << (isPalindrome ? "Palindrome" : "Not Palindrome") << endl;

    return 0; // Indicates successful execution of the program
}

/*
The given C++ program checks if a linked list is a palindrome or not.
A palindrome is a sequence that reads the same forwards and backward.
*/

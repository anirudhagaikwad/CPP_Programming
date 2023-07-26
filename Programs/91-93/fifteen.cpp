/*
Given a linked list, reverse a specified part of it using the std::list container from the STL library.

Input: {10, 20, 30, 40, 50}
       startIndex = 1, endIndex = 3
Output:
10 40 30 20 50

*/

#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    // Create a linked list named 'linkedList' with elements 10, 20, 30, 40, and 50
    list<int> linkedList = {10, 20, 30, 40, 50};

    // Define the start and end indices for the sublist to be reversed
    int startIndex = 1, endIndex = 3;

    // Create iterators 'itStart' and 'itEnd' to point to the start and end positions of the sublist
    auto itStart = linkedList.begin();
    advance(itStart, startIndex); // Move 'itStart' to the starting position of the sublist

    auto itEnd = linkedList.begin();
    advance(itEnd, endIndex + 1); // Move 'itEnd' to the position one past the ending position of the sublist

    // Use the 'reverse' function from the algorithm library to reverse the sublist
    reverse(itStart, itEnd);

    // Output the linked list after reversing the specified part
    for (const auto& num : linkedList) {
        cout << num << " ";
    }

    return 0; // Indicates successful execution of the program
}

/*
The given C++ program reverses a specific part of the linked list indicated by the startIndex and endIndex.
*/

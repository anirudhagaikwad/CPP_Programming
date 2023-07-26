/*
Given a sorted linked list, insert an element into it while maintaining the sorted order using the std::list container
from the STL library.

Input:  list={10, 20, 30, 40, 50}
        elementToInsert = 25
Output: 10 20 25 30 40 50

*/

#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a sorted linked list named 'sortedList' with elements 10, 20, 30, 40, and 50
    list<int> sortedList = {10, 20, 30, 40, 50};

    // Define the element to insert into the sorted list
    int elementToInsert = 25;

    // Find the correct position to insert the 'elementToInsert' into the sorted list
    for (auto it = sortedList.begin(); it != sortedList.end(); ++it) {
        if (*it >= elementToInsert) {
            // Insert the 'elementToInsert' before the current position pointed by 'it'
            sortedList.insert(it, elementToInsert);
            break; // Stop the loop as the element is inserted at the correct position
        }
    }

    // Output the updated sorted list
    for (const auto& num : sortedList) {
        cout << num << " ";
    }

    return 0; // Indicates successful execution of the program
}

/*
The given C++ program inserts an element into a sorted linked list while maintaining the sorted order of the list.
*/


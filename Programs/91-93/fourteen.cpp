/*

Given a linked list, split it into two linked lists based on a condition of even and odd using the std::list container from the STL library.

Input: list= {1, 2, 3, 4, 5}

Output:
Even List: 2 4
Odd List: 1 3 5

*/

#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a linked list named 'linkedList' with elements 1, 2, 3, 4, and 5
    list<int> linkedList = {1, 2, 3, 4, 5};

    // Create two new linked lists named 'evenList' and 'oddList' to store even and odd numbers, respectively
    list<int> evenList, oddList;

    // Traverse through each element of the 'linkedList'
    for (const auto& num : linkedList) {
        // Check if the current number 'num' is even (divisible by 2)
        if (num % 2 == 0) {
            // If 'num' is even, add it to the 'evenList'
            evenList.push_back(num);
        } else {
            // If 'num' is odd, add it to the 'oddList'
            oddList.push_back(num);
        }
    }

    // Output the 'evenList'
    cout << "Even List: ";
    for (const auto& num : evenList) {
        cout << num << " ";
    }
    cout << endl;

    // Output the 'oddList'
    cout << "Odd List: ";
    for (const auto& num : oddList) {
        cout << num << " ";
    }
    cout << endl;

    return 0; // Indicates successful execution of the program
}

/*
The given C++ program separates even and odd numbers from a linked list into two separate linked lists: evenList and oddList
*/

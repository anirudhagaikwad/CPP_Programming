/*
Given two linked lists, find the intersection of the lists using the std::list container from the STL library.

Input: list1={1, 2, 3, 4, 5}
       list2={3, 4, 5, 6, 7}
Output:  3 4 5

*/

#include <iostream>
#include <list>
#include <unordered_set>

using namespace std;

int main() {
    // Create two linked lists list1 and list2
    list<int> list1 = {1, 2, 3, 4, 5};
    list<int> list2 = {3, 4, 5, 6, 7};

    // Create an unordered_set named set1 to store the elements of list1
    unordered_set<int> set1(list1.begin(), list1.end());

    // Create a new linked list named intersection to store the elements that are common to both list1 and list2
    list<int> intersection;

    // Traverse through each element of list2
    for (const auto& num : list2) {
        // Check if the current element (num) exists in the set1 (elements of list1)
        if (set1.count(num) > 0) {
            // If the element is found in list1, add it to the intersection list
            intersection.push_back(num);
        }
    }

    // Output the intersection of the linked lists
    for (const auto& num : intersection) {
        cout << num << " ";
    }

    return 0; // Indicates successful execution of the program
}

/*
The given C++ program creates two linked lists named list1 and list2, and then it finds the intersection of these two lists.
The intersection consists of elements that are common to both list1 and list2.

*/





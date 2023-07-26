/*
Conceptual program to demonstrate the usage of set container in STL library.
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    // Create an empty set of integers
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(5);
    mySet.insert(2);
    mySet.insert(8);
    mySet.insert(3);
    mySet.insert(1);

    // Print the set using iterators
    cout << "Set elements: ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Check if an element exists in the set
    int key = 3;
    if (mySet.find(key) != mySet.end()) {
        cout << key << " is present in the set" << endl;
    } else {
        cout << key << " is not present in the set" << endl;
    }

    // Size of the set
    cout << "Size of the set: " << mySet.size() << endl;

    // Erase an element from the set
    mySet.erase(2);

    // Print the set using a range-based loop
    cout << "Set elements after erasing 2: ";
    for (int num : mySet) {
        cout << num << " ";
    }
    cout << endl;

    // Clear the set
    mySet.clear();
    cout << "Size of the set after clearing: " << mySet.size() << endl;

    return 0;
}
/*
The program starts by creating an empty set of integers using set<int> mySet.
We insert elements into the set using the insert function. In this case, we insert 5, 2, 8, 3, and 1 into the set.
To print the elements of the set, we use iterators. The begin() function returns an iterator pointing to the first element, and the end() function returns an iterator pointing just beyond the last element.
The program checks if the element with value 3 exists in the set using the find function. If found, it prints that the element is present; otherwise, it prints that the element is not present.
We can find the size of the set using the size() function.
An element can be erased from the set using the erase function, as shown for element 2.
After erasing 2, the program prints the set using a range-based loop to show that 2 has been removed.
Finally, the clear() function is used to empty the set, and the size is printed again to show that it is now empty.
*/

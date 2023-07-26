/*
Conceptual program to demonstrate the usage of map container in STL library.
*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    // Creating a map to store the names of students along with their ages.
    map<string, int> studentAges;

    // Inserting elements into the map using the insert() function.
    studentAges.insert(make_pair("Alice", 20));
    studentAges.insert(make_pair("Bob", 22));
    studentAges.insert(make_pair("Charlie", 21));
    studentAges.insert(make_pair("David", 19));

    // Accessing elements in the map using the [] operator.
    cout << "Age of Bob: " << studentAges["Bob"] << endl;

    // Using the find() function to check if a key exists in the map.
    auto it = studentAges.find("Charlie");
    if (it != studentAges.end()) {
        cout << "Age of Charlie: " << it->second << endl;
    } else {
        cout << "Charlie not found in the map" << endl;
    }

    // Using the count() function to check the occurrence of a key.
    if (studentAges.count("Eve") > 0) {
        cout << "Eve exists in the map" << endl;
    } else {
        cout << "Eve does not exist in the map" << endl;
    }

    // Using the size() function to get the number of elements in the map.
    cout << "Number of students: " << studentAges.size() << endl;

    // Using the erase() function to remove elements from the map.
    studentAges.erase("David");

    // Iterating through the map using a for-each loop.
    cout << "Remaining students and their ages:" << endl;
    for (auto& pair : studentAges) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Using the clear() function to remove all elements from the map.
    studentAges.clear();

    // Checking if the map is empty using the empty() function.
    if (studentAges.empty()) {
        cout << "The map is now empty" << endl;
    } else {
        cout << "The map is not empty" << endl;
    }

    return 0;
}

/*
insert() - The insert() function is used to add elements to the map. We use make_pair() to insert key-value pairs.

Accessing Elements - Elements in the map can be accessed using the [] operator. The program demonstrates how to access the age of a student named "Bob".

find() - The find() function is used to check if a key exists in the map. It returns an iterator to the element if found, else it returns end().

count() - The count() function is used to check the occurrence of a key in the map. It returns 1 if the key exists and 0 otherwise.

size() - The size() function is used to get the number of elements in the map.

erase() - The erase() function is used to remove elements from the map based on the key.

Iterating through the Map - The program demonstrates how to iterate through the map using a for-each loop to print all the remaining students and their ages.

clear() - The clear() function is used to remove all elements from the map.

empty() - The empty() function is used to check if the map is empty or not.
*/

/*
Conceptual program to define usage of vector data structure in STL library.
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> numbers; // Declare a vector of integers

    // Add elements to the vector using the push_back method
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    // Display the elements of the vector using the index operator []
    cout << "Vector elements: ";
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Accessing individual elements of the vector
    cout << "First element: " << numbers[0] << endl;
    cout << "Last element: " << numbers[numbers.size() - 1] << endl;

    // Size and capacity of the vector
    cout << "Size of the vector: " << numbers.size() << endl;
    cout << "Capacity of the vector: " << numbers.capacity() << endl;

    // Resizing the vector
    numbers.resize(3);
    cout << "After resizing, Size of the vector: " << numbers.size() << endl;

    // Checking if the vector is empty
    if (numbers.empty())
    {
        cout << "Vector is empty." << endl;
    }
    else
    {
        cout << "Vector is not empty." << endl;
    }

    // Clearing the vector
    numbers.clear();
    cout << "After clearing, Size of the vector: " << numbers.size() << endl;

    return 0;
}

/*
The above C++ program demonstrates the basic usage of the vector container in the STL library.

The program starts by declaring a vector of integers named numbers.

Elements are added to the vector using the push_back method, which adds elements at the end of the vector.

The elements of the vector are displayed using a for loop and the index operator [].

Individual elements of the vector can be accessed using the index operator [].

The size method returns the number of elements in the vector, and the capacity method returns the maximum number of
elements that can be stored without reallocation.

The resize method is used to change the size of the vector. It reduces the size to the specified value, and any extra
elements are discarded.

The empty method is used to check if the vector is empty or not.

The clear method is used to remove all elements from the vector, making it an empty vector.

The program demonstrates some basic vector operations like adding elements, accessing elements, getting size and capacity,
resizing, checking if the vector is empty, and clearing the vector. The vector container is a dynamic array that grows and
shrinks automatically as elements are added or removed, making it a versatile and widely used data structure in C++.

*/

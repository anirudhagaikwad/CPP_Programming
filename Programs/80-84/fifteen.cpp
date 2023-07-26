/*
Write a C++ program that simulates the allocation of resources and throws a custom exception if the resources
cannot be allocated.

Input:
(try below)
int* resource = new int[1000000000]

Output:
terminate called after throwing an instance of 'std::bad_array_new_length'
  what():  std::bad_array_new_length

*/

#include <iostream>
using namespace std;

class ResourceAllocationException : public exception {
public:
    const char* what() const throw() {
        return "Resource allocation failed!";
    }
};

int main() {
    int* resource;

    try {
        resource = new int[1000000000]; // Try allocating a large amount of memory
        if (!resource) {
            throw ResourceAllocationException();
        }
        cout << "Resource allocation successful." << endl;
    } catch (const ResourceAllocationException& e) {
        cout << "Exception: " << e.what() << endl;
    }

    return 0;
}

/*

This C++ program demonstrates custom exception handling for resource allocation failure during dynamic memory allocation.
It defines a custom exception class named ResourceAllocationException that inherits from the standard exception class.
The program attempts to allocate a large amount of memory using the new operator, and if the allocation fails, it throws the custom exception.
The caught exception is then handled, and an appropriate error message is displayed, indicating that the resource allocation has failed.

*/



/*
You have been tasked with creating a grocery list manager program for a local supermarket.
The program should allow users to create and manipulate their grocery lists efficiently.
To achieve this, you need to create a class called GroceryList representing an array, and overload the '[]' operator
to enable easy access to array elements.

Input:
sugar rice oil bread salt

Output:
sugar rice oil bread salt

*/

#include <iostream>
#include <stdlib.h>  // standard library function

using namespace std;

const int SIZE = 5;

class MyArray {
private:
    string arr[SIZE];

public:
    MyArray() {
        for (int i = 0; i < SIZE; i++) {
            cin>>arr[i];
        }
    }

    // Overloading the array index '[]' operator
    string& operator[](int index) {
        if (index < 0 || index >= SIZE) {
            cout << "Index out of range." << endl;
            exit(1);
        }
        return arr[index];
    }

    void display() {
        for (int i = 0; i < SIZE; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MyArray arr;

    cout << "Original Array: ";
    arr.display();

    arr[2] ="Tea" ; // Change element at index 2
    cout << "Modified Array: ";
    arr.display();

    return 0;
}

/*
This program implements a class MyArray to represent an array.
The '[]' operator is overloaded to access array elements.
The display() function is used to print the array before and after modification.

*/



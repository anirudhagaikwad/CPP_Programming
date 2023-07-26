/*
You are tasked to create a flexible function to concatenate various data types based on two or more parameters.

Input: x = 5 y = 10
Output: Sum of integers: 15

Input: x = 3.14 y = 2.71
Output: Sum of doubles: 5.85

Input: x=Hello, y=World!
Output; Concatenated String: Hello, world!

Input: x=Hello, y=World! z=Welcome
Output: Concatenated String with three strings: Hello, world!Welcome

*/
#include <iostream>
using namespace std;

// Function template to add two values of the same data type.
template <typename T>
T add(T a, T b) {
    return a + b;
}

// Function template overloaded to concatenate two strings.
template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int x = 5, y = 10;
    cout << "Sum of integers: " << add(x, y) << endl;           // Output: Sum of integers: 15

    double a = 3.14, b = 2.71;
    cout << "Sum of doubles: " << add(a, b) << endl;            // Output: Sum of doubles: 5.85

    string str1 = "Hello, ", str2 = "world!";
    cout << "Concatenated String: " << add(str1, str2) << endl; // Output: Concatenated String: Hello, world!

    string str3 = "Welcome ";
    cout << "Concatenated String with three strings: " << add(str1, str2, str3) << endl;
    // Output: Concatenated String with three strings: Hello, world!Welcome

    return 0;
}

/*
In this program, we have two function templates named add. The first add function template is used to add two values of the same data
type (integers or doubles), and the second add function template is overloaded to concatenate two strings.
The key point to note is that function templates can be overloaded just like regular functions.

In the main() function, we demonstrate the use of both versions of the add function template.
We first add two integers, then two doubles, and finally concatenate two strings.
Additionally, we also demonstrate the overloaded version of add that concatenates three strings.

*/


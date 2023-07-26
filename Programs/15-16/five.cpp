// Write a program to demonstrate token concatenation using preprocessor directives.

#include <iostream>
using namespace std;

#define CONCAT(x, y) x ## y

int main() {
    int xy = 10;

    cout << CONCAT(x, y) << endl;

    return 0;
}
/*
## is used to concatenate tokens
*/

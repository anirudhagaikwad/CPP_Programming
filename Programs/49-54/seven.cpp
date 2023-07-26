/*
Implement a class representing a boolean value and overload the logical operators (&& and ||).
*/

#include <iostream>
using namespace std;

class BooleanValue {
private:
    bool value;

public:
    BooleanValue(bool v) : value(v) {}

    // Overloading the logical '&&' operator
    bool operator&&(const BooleanValue& other) {
        return value && other.value;
    }

    // Overloading the logical '||' operator
    bool operator||(const BooleanValue& other) {
        return value || other.value;
    }

    void display() {
        cout << (value ? "true" : "false") << endl;
    }
};

int main() {
    BooleanValue b1(true);
    BooleanValue b2(false);

    BooleanValue resultAnd = b1 && b2;
    BooleanValue resultOr = b1 || b2;

    resultAnd.display();
    resultOr.display();

    return 0;
}


/*
This program implements a class BooleanValue to represent a boolean value.
The logical '&&' and '||' operators are overloaded to perform logical AND and OR operations.
The display() function is used to print the result.

*/


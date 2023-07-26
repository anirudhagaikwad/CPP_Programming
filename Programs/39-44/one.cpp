/*
 C++ program that demonstrates the use of access specifiers (public, private, and protected) in a class.

*/

#include <iostream>
using namespace std;

// Class definition
class MyClass {
public:    // Access specifier 'public'
    int publicVar; // Public member variable

    // Public member function to set the value of publicVar
    void setPublicVar(int value) {
        publicVar = value;
    }

    // Public member function to display the value of publicVar
    void displayPublicVar() {
        cout << "Public variable value: " << publicVar << endl;
    }

private:   // Access specifier 'private'
    int privateVar; // Private member variable

    // Private member function to set the value of privateVar
    void setPrivateVar(int value) {
        privateVar = value;
    }

public:    // Access specifier 'public'
    // Public member function that indirectly sets the privateVar
    void setPrivateVarFromOutside(int value) {
        setPrivateVar(value); // Calling private member function from a public function
    }

    // Public member function to display the value of privateVar
    void displayPrivateVar() {
        cout << "Private variable value: " << privateVar << endl;
    }

protected: // Access specifier 'protected'
    int protectedVar; // Protected member variable

    // Protected member function to set the value of protectedVar
    void setProtectedVar(int value) {
        protectedVar = value;
    }
};

int main() {
    MyClass obj;

    // Accessing and modifying public member variable directly
    obj.publicVar = 42;
    obj.displayPublicVar(); // Output: Public variable value: 42

    // Error: 'int MyClass::privateVar' is private within this context
    // obj.privateVar = 20;

    // Accessing and modifying private member variable indirectly
    obj.setPrivateVarFromOutside(20);
    obj.displayPrivateVar(); // Output: Private variable value: 20

    // Error: 'int MyClass::protectedVar' is protected within this context
    // obj.protectedVar = 10;

    return 0;
}

/*
The program defines a class MyClass with three access specifiers: public, private, and protected.
Inside the class, there are three member variables: publicVar, privateVar, and protectedVar.
Each variable has a different access specifier.
The class also contains member functions to set (setPublicVar, setPrivateVarFromOutside, setProtectedVar) and
display (displayPublicVar, displayPrivateVar) the values of these member variables.
The publicVar and its related member functions are accessible from anywhere in the program.
The privateVar and its related member functions are accessible only within the class and cannot be accessed from outside the class directly.
The protectedVar and its related member functions are similar to private, but they can also be accessed by derived classes
(not demonstrated in this example).
In the main function, we create an object of MyClass and demonstrate the use of different access specifiers.
*/




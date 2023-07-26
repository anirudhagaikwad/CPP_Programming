/*
You are working on a C++ program that involves inheritance with exception handling.
There is a Base class that defines a virtual function performAction(). The Derived class inherits from the Base class and overrides the performAction()
function. Your task is to understand the exception handling behavior in the derived class and main function.

Input:
Derived derived;
derived.performAction();
Output:
Derived caught exception: Error in Base class!
Main caught exception: Error in Base class!

*/


#include <iostream>

class Base {
public:
    virtual void performAction() {
        throw std::runtime_error("Error in Base class!");
    }
};

class Derived : public Base {
public:
    void performAction() override {
        try {
            Base::performAction();
        }
        catch (const std::exception& ex) {
            std::cout << "Derived caught exception: " << ex.what() << std::endl;
            throw; // Rethrow the exception
        }
    }
};

int main() {
    try {
        Derived derived;
        derived.performAction();
    }
    catch (const std::exception& ex) {
        std::cout << "Main caught exception: " << ex.what() << std::endl;
    }

    return 0;
}

/*
The provided C++ program demonstrates the interaction between the Base and Derived classes with exception handling. The Base class has a virtual function performAction() that throws a std::runtime_error with the error message "Error in Base class!".

The Derived class inherits from the Base class and overrides the performAction() function. In the Derived class's implementation of performAction(), it calls the Base::performAction() function within a try-catch block.

Your task is to understand the flow of exception handling and rethrowing in the program:

The Base::performAction() function throws a std::runtime_error when it is called.

Inside the Derived::performAction(), the Base::performAction() is called within a try-catch block. If an exception is caught (which will be the std::runtime_error from the Base::performAction()), it is displayed with the message "Derived caught exception:", followed by the exception's error message.

After catching the exception in Derived::performAction(), the throw; statement rethrows the caught exception.

In the main function, an object of the Derived class, named derived, is created. The performAction() function of derived is called within a try-catch block.

When derived.performAction() is called, the flow enters the Derived::performAction() function, which, in turn, calls the Base::performAction() function.

The Base::performAction() throws a std::runtime_error, which is caught in the Derived::performAction() catch block. The message "Derived caught exception:" along with the error message is displayed.

After rethrowing the caught exception with throw;, the flow of execution jumps back to the main function's catch block.

In the main catch block, the rethrown exception is caught and displayed with the message "Main caught exception:", followed by the exception's error message.

*/


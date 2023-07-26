/*
 Create a class called "Singleton" with a private constructor and a static factory method to ensure
 only one instance of the class can be created. Display a message when creating the object.
*/

#include <iostream>

class Singleton {
private:
    // Private constructor
    Singleton() {
        std::cout << "Singleton object created!" << std::endl;
    }

public:
    // Static factory method to create the instance
    static Singleton& getInstance() {
        static Singleton instance;
        return instance;
    }
};

int main() {
    Singleton& s1 = Singleton::getInstance(); // Singleton object created here
    Singleton& s2 = Singleton::getInstance(); // No new object created, returns the existing instance
    return 0;
}

/*
This program defines a class Singleton with a private constructor to prevent direct object creation.
The class provides a static factory method getInstance() that returns a reference to the only instance of the class.
This ensures that only one object of the class can be created, and subsequent calls to the factory method return
the same instance.
*/

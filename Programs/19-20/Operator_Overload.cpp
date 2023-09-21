#include <iostream>
#include <string>

class MyString {
private:
    std::string str;

public:
    MyString(const std::string& s) : str(s) {}

    // Operator overloading for concatenation using the / operator
    MyString operator/(const MyString& other) {
        // Concatenate the strings and create a new MyString object
        std::string result = str + other.str;
        return MyString(result);
    }

    // Display the string
    void display() {
        std::cout << str << std::endl;
    }
};

int main() {
    MyString str1("Hello, ");
    MyString str2("world!");

    // Concatenate two MyString objects using the overloaded / operator
    MyString result = str1 / str2;

    // Display the concatenated string
    std::cout << "Concatenated String: ";
    result.display();

    return 0;
}

/*
we've overloaded the / operator to perform string concatenation,Please note that this usage of the / operator for string concatenation is unconventional and not recommended in practice. It's important to use operators in a way that follows established conventions and is easily understandable to others who read your code.
*/

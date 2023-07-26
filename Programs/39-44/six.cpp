/*
Create a class called EncapsulatedData that encapsulates a sensitive data member (e.g., a password).
Implement methods to set and get the password. The password should not be directly accessible outside the class.
*/

#include <iostream>
#include <string>

class EncapsulatedData {
private:
    std::string password;

public:
    void setPassword(const std::string& newPassword);
    std::string getPassword() const;
};

void EncapsulatedData::setPassword(const std::string& newPassword) {
    // Additional logic can be added here for validation, e.g., minimum length, strong password rules, etc.
    password = newPassword;
}

std::string EncapsulatedData::getPassword() const {
    return password;
}

int main() {
    EncapsulatedData data;
    data.setPassword("SecretPassword");

    // Attempting to directly access the password (which should not be allowed)
    std::cout << "Password: " << data.getPassword() << std::endl;

    return 0;
}

/*
This program demonstrates the concept of encapsulation in C++.
The EncapsulatedData class has a private data member (password), and the password is not directly accessible outside the class.
Instead, we use public member functions (setPassword and getPassword) to set and retrieve the password securely.
Additional validation logic can be added to the setPassword method for stronger security if needed
*/

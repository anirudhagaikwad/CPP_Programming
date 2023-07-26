/*
Create a phonebook using a map to store names and corresponding phone numbers.
And search for particular contact.

Input: Alice
Output: Alice's phone number is 1234567890

*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, string> phonebook;
    phonebook["Alice"] = "1234567890";
    phonebook["Bob"] = "9876543210";
    phonebook["Charlie"] = "4567890123";
    string name;
    cout << "Enter a name: ";
    cin >> name;
    if (phonebook.count(name) != 0) {
        cout << name << "'s phone number is " << phonebook[name] << endl;
    } else {
        cout << name << " not found in the phonebook" << endl;
    }
    return 0;
}

/*
This program demonstrates using a map as a phonebook, associating names with their corresponding phone numbers.
Users can enter a name, and the program will display the associated phone number if found.
*/

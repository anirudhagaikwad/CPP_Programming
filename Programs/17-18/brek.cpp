#include <iostream>
#include <string>

void findSubString_labeledContinue(std::string s, std::string subS) {
    bool foundIt = false;
    int max = s.length() - subS.length();

    for (int i = 0; i <= max; i++) {
        int n = subS.length();
        int j = i;
        int k = 0;

        while (n-- != 0) {
            if (s[j++] != subS[k++]) {
                break; // Break out of inner while loop
            }
        } // inner while

        if (k == subS.length()) {
            foundIt = true;
            break; // Break out of outer for loop
        }
    } // outer for

    std::cout << (foundIt ? "Found It" : "Didnt find it") << std::endl; // ternary
}

int main() {
    std::string s = "This is a test string";
    std::string subS = "test";

    findSubString_labeledContinue(s, subS);

    return 0;
}


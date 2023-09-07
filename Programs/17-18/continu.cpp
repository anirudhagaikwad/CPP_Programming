#include <iostream>
#include <string>

void findCharacter_Continue(std::string s, char ch) {
    int max = s.length();
    int numCh = 0;

    for (int i = 0; i < max; i++) {
        if (s[i] != ch) {
            continue; //  Continue
        }
        numCh++;
    } // for

    std::cout << ch << " Found in String " << numCh << " Number of times" << std::endl;
}
int main() {
    std::string s = "This is a test string";
    char ch = 'i';

    findCharacter_Continue(s, ch);

    return 0;
}


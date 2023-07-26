/*
Given a string s consisting of uppercase and lowercase alphabetic characters.
Return the  number of distinct substrings of size 2 that appear in s as contiguous substrings.

Example

Input :
s = "ABCAB"
Output :
3
Explanation:  For "ABCAB", the three distinct substrings of size 2 are "AB", "BC" and "CA".


Input :
s = "ABACUS"
Output :
5

*/

#include <bits/stdc++.h>
using namespace std;

// Function prototype to find the number of distinct consecutive pairs in a string.
int fun(string s);

int main()
{
    string s;
    cin >> s; // Input the string.

    cout << fun(s) << endl; // Output the result returned by the 'fun' function.
    return 0;
}

// Function to find the number of distinct consecutive pairs in a string.
int fun(string s)
{
    unordered_set<string> st; // Create an unordered set to store distinct consecutive pairs.

    for (int i = 0; i < (s.size() - 1); i++)
    {
        string str;
        str += s[i]; // Form a consecutive pair by appending the current character and the next character.
        str += s[i + 1];
        st.insert(str); // Insert the consecutive pair into the set to keep track of distinct pairs.
    }

    return st.size(); // Return the size of the set, which represents the number of distinct consecutive pairs.
}

/*
The given C++ program calculates the number of distinct consecutive pairs in a given string using an unordered set.

The fun function takes the following parameter:

s: The input string.
The function uses an unordered set (st) to keep track of distinct consecutive pairs.
It iterates through the characters of the string s, considering each character (s[i]) and its next character (s[i + 1]) as a consecutive pair. It forms the consecutive pair by appending the current character and the next character to an empty string (str).

If the formed consecutive pair is not already present in the set (i.e., it is a distinct pair),
it inserts it into the set using the insert method. This ensures that only unique consecutive pairs are stored in the set.

After iterating through the entire string, the function returns the size of the set using the size method.
The size of the set represents the number of distinct consecutive pairs in the given string.

In the main function, the user inputs the string (s). The fun function is then called with the string as an argument,
and the result (number of distinct consecutive pairs) is printed to the console.

*/


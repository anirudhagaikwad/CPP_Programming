/*
Given an input stream A of n characters consisting only of lower case alphabets.
While reading characters from the stream, you have to tell which character has appeared only once in the stream upto that point.
If there are many characters that have appeared only once, you have to tell which one of them was the first one to appear. If there is no such character then append '#' to the answer.

Input: A = "aabc"
Output: "a#bb"
Explanation: For every character first non
repeating character is as follow-
"a" - first non-repeating character is 'a'
"aa" - no non-repeating character so '#'
"aab" - first non-repeating character is 'b'
"aabc" - first non-repeating character is 'b'


Input: A = "zz"
Output: "z#"
*/

#include <iostream>
#include <queue>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    // Function to find the first non-repeating character in a string.
    string FirstNonRepeating(string A)
    {
        // Create an unordered map to store character frequencies.
        unordered_map<char, int> mp;
        // Create a queue to store characters in the order of their appearance.
        queue<char> q;
        // Initialize an empty string to store the result.
        string ans = "";

        // Loop through the input string 'A'.
        for (char c : A)
        {
            // Step 1: Increment the frequency of the current character 'c'.
            mp[c]++;
            // If the frequency of 'c' is 1, it is a non-repeating character, so add it to the queue.
            if (mp[c] == 1)
            {
                q.push(c);
            }

            // Step 2: Remove any repeating characters from the front of the queue.
            while (!q.empty() && mp[q.front()] > 1)
            {
                q.pop();
            }

            // Step 3: Store the first non-repeating character encountered so far in 'ans'.
            if (q.empty())
            {
                ans += '#'; // If there are no non-repeating characters, add '#' to 'ans'.
            }
            else
            {
                ans += q.front(); // Otherwise, add the front element of the queue to 'ans'.
            }
        }

        // After processing the entire string, 'ans' will contain the first non-repeating character
        // for each prefix of the input string 'A'.
        return ans;
    }
};

int main()
{
    string A;
    cin >> A; // Read the input string from the user.

    Solution obj;
    string ans = obj.FirstNonRepeating(A); // Call the FirstNonRepeating function.

    cout << ans << "\n"; // Print the result, i.e., the first non-repeating characters for each prefix.

    return 0;
}

/*
The given C++ code aims to find the first non-repeating character for each prefix of the input string 'A'. It does so using an unordered map to keep track of the frequency of each character in the string and a queue to maintain the order of the characters' appearance.

The Solution class contains a member function FirstNonRepeating, which takes a string A as input and returns a string ans containing the first non-repeating character for each prefix of A.

The FirstNonRepeating function iterates through each character of the input string 'A'. For each character 'c', it follows these steps:

Increments the frequency of 'c' in the unordered map 'mp'.
If the frequency of 'c' becomes 1, it means 'c' is a non-repeating character, so it's added to the queue 'q'.
The function then checks and removes any repeating characters from the front of the queue 'q'.
After handling 'c', the function determines the first non-repeating character encountered so far and appends it to the result string 'ans'.
If there are no non-repeating characters in the current prefix, it appends '#' to 'ans'.
*/

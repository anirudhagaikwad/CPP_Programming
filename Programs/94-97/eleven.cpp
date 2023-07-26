/*
Given a list of N words. Count the number of words that appear exactly twice in the list.

Input: Input:
N = 3
list = {bhag, milkha, bhag}

Output: 1

*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to count the number of words with frequency 2 in the given array of strings.
    int countWords(string arr[], int n)
    {
        map<string, int> m; // Using a map to store word-frequency pairs.

        // Counting the frequency of each word in the array and storing it in the map.
        for (int i = 0; i < n; ++i)
        {
            m[arr[i]]++;
        }

        int count = 0; // Variable to store the count of words with frequency 2.

        // Looping through the map to find words with frequency 2 and increment the count.
        for (auto i : m)
        {
            if (i.second == 2)
            {
                count++;
            }
        }

        return count; // Returning the count of words with frequency 2.
    }
};

int main()
{
    int n;
    cin >> n;
    string list[n];

    // Inputting the array of strings.
    for (int i = 0; i < n; i++)
        cin >> list[i];

    Solution ob;

    // Calling the countWords function to count words with frequency 2.
    cout << ob.countWords(list, n) << endl;

    return 0;
}

/*

The given C++ program counts the number of words with a frequency of 2 in the given array of strings. It uses the map container to efficiently count the occurrences of each word.

The Solution class contains a member function countWords that takes a string array arr and its size n as input. It returns an integer representing the count of words with a frequency of 2.

Inside the countWords function, a map named m is used to store the word-frequency pairs. The loop iterates through the array of strings, and for each word encountered, its frequency is incremented in the map.

After counting the frequencies of all words, the variable count is used to keep track of the count of words with a frequency of 2. A second loop iterates through the map, and whenever a word with a frequency of 2 is encountered, the count is incremented.

Finally, the function returns the value of count, which represents the count of words with a frequency of 2 in the array.

*/

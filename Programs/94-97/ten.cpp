/*
Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.


Input:
4
2 1 1 -1
Output:
Yes

Input:
5
4 2 0 1 6

Output:
Yes
*/


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if a subarray with sum 0 exists.
    bool subArrayExists(int arr[], int n)
    {
        int sum = 0;
        unordered_map<int, int> mp; // Using unordered_map to store sum-frequency pairs.
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i]; // Calculate the cumulative sum.
            mp[sum]++; // Increment the frequency of the cumulative sum in the map.

            // If the cumulative sum becomes 0 or its frequency becomes greater than 1,
            // then a subarray with sum 0 exists in the array.
            if (mp[sum] > 1 || sum == 0)
            {
                return true;
            }
        }
        return false; // If no subarray with sum 0 is found, return false.
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    Solution obj;

    // Checking if a subarray with sum 0 exists in the given array.
    if (obj.subArrayExists(arr, n))
        cout << "Yes\n"; // If a subarray with sum 0 exists, print "Yes".
    else
        cout << "No\n"; // If no such subarray exists, print "No".

    return 0;
}

/*
The given C++ program checks whether there exists a subarray in the given array with a sum of 0.
It uses the cumulative sum approach along with an unordered_map to efficiently find such a subarray.

The Solution class contains a member function subArrayExists that takes an integer array arr and its size n as input.
It returns a boolean value (true or false) indicating whether a subarray with sum 0 exists in the array or not.

Inside the subArrayExists function, the variable sum is used to keep track of the cumulative sum of elements as the loop
iterates through the array. The unordered_map mp is used to store the cumulative sum-frequency pairs encountered during the iteration.

For each element in the array, the cumulative sum is updated, and its frequency is incremented in the mp map.
If the cumulative sum becomes 0 or its frequency becomes greater than 1, it means that a subarray with sum 0 exists in
the array, and the function returns true.

If no subarray with sum 0 is found during the entire iteration, the function returns false.

*/


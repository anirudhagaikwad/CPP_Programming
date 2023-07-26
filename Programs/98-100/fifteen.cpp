/*
Given an array of negative and non-negative integers. You have to make the array beautiful.
An array is beautiful if two adjacent integers, arr[i] and arr[i+1] are either negative or non-negative.
And you can do the following operation any number of times until the array becomes beautiful.

If two adjacent integers are different i.e. one of them is negative and other is non-negative, remove them.
Return the beautiful array after performing the above operation.

Note:An empty array is also a beautiful array. There can be many adjacent integers which are different as stated above.
So remove different adjacent integers as described above from left to right.

Input: 4 2 -2 1
Output: 4 1

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to make the given array beautiful.
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> res; // Create a new vector to store the beautiful array.
        for (int i = 0; i < arr.size(); i++) {
            if (res.size() == 0)
                res.push_back(arr[i]); // If 'res' is empty, add the current element to it.
            else {
                // Check for conditions to make the array beautiful.
                if ((res.back() > 0 && arr[i] < 0) || (res.back() < 0 && arr[i] > 0) ||
                    (arr[i] == 0 && res.back() < 0) || (res.back() == 0 && arr[i] < 0))
                    res.pop_back(); // If the conditions are met, remove the last element from 'res'.
                else
                    res.push_back(arr[i]); // Otherwise, add the current element to 'res'.
            }
        }
        return res; // Return the resulting beautiful array.
    }
};

int main() {
    int n;
    cin >> n; // Read the size of the array from the user.
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read the elements of the array from the user.
    }

    Solution obj;
    vector<int> res = obj.makeBeautiful(arr); // Call the makeBeautiful function.

    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " "; // Print the elements of the beautiful array.
    }

    cout << "\n";
}

/*
The given C++ code aims to make the given array beautiful by removing specific elements based on certain conditions. A beautiful array is defined as an array where consecutive elements have different signs (i.e., one positive, one negative) or are nonzero.

The Solution class contains a member function makeBeautiful, which takes a vector of integers arr as input and returns a vector of integers res, which represents the beautiful array.

The makeBeautiful function iterates through each element of the input array 'arr'. For each element 'arr[i]', it follows these steps:

If the result vector 'res' is empty, it means there are no elements in 'res', so it directly adds 'arr[i]' to 'res'.
If 'res' is not empty, it checks four conditions to make the array beautiful:
a) If the last element of 'res' is positive and 'arr[i]' is negative.
b) If the last element of 'res' is negative and 'arr[i]' is positive.
c) If 'arr[i]' is zero and the last element of 'res' is negative.
d) If the last element of 'res' is zero and 'arr[i]' is negative.
If any of the above conditions are met, it means 'arr[i]' should not be included in the beautiful array, so the last element of 'res' is removed.
If none of the conditions are met, 'arr[i]' is added to 'res'.
After processing all elements of 'arr', the 'res' vector will contain the beautiful array, and it is returned as the final result.

In the main function, the user is asked to input the size of the array 'n' and the elements of the array 'arr'. Then, the makeBeautiful function of the Solution class is called, and the resulting beautiful array is printed to the console.
*/

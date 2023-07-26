/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Input: nums = [2,7,11,15], target = 9
Output: [0,1]

Input: nums = [3,2,4], target = 6
Output: [1,2]

*/

#include <iostream>

using namespace std;

// Function to find the indices of two elements in the array that sum up to the target.
void targetSum(int a[], int target, int n, int res[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            // Check if the sum of elements at indices i and j is equal to the target.
            if (a[i] + a[j] == target)
            {
                // Store the indices of the elements in the 'res' array.
                res[0] = i;
                res[1] = j;
                return; // Return immediately after finding the indices.
            }
        }
    }
}

int main()
{
    int a[] = {2, 7, 11, 15};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the array 'a'.

    int target = 9;
    int res[2] = {}; // Create an array to store the indices of the elements that sum up to the target.

    targetSum(a, target, n, res); // Call the function to find the indices.

    // Print the indices of the elements that sum up to the target.
    for (int i = 0; i < 2; i++)
    {
        cout << res[i] << " ";
    }

    cout << '\n';
}

/*
The given C++ code is a program to find the indices of two elements in an array that sum up to a given target value.

In the targetSum function, two nested loops are used to iterate through all possible pairs of elements in the array a.
The function takes the array a, target value target, and size of the array n as input parameters.

For each pair of elements (a[i] and a[j]), the function checks if their sum is equal to the target.
If a pair with the desired sum is found, the indices i and j are stored in the res array, and the function returns immediately.
*/

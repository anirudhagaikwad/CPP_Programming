/*
Given an array arr[] of N elements. Find the number of non-empty subsets whose product of elements is less than or equal
to a given integer K.

Input:
N = 4
arr[] = {2, 4, 5, 3}
K = 12
Output:
8
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    map<pair<int, int>, int> m; // Map to store memoization results.

    // Recursive function to find the number of subsets with product less than or equal to K.
    int fun(int i, int arr[], int k, int n, int p)
    {
        // Base case: If product p exceeds K, return 0.
        if (p > k)
            return 0;

        // Base case: If all elements are considered and product p is less than or equal to K, return 1.
        if (i == n && p <= k)
            return 1;

        // If memoization exists for the current state, return the memoized result.
        if (m.find({i, p}) != m.end())
            return m[{i, p}];

        p = (p * 1ll * arr[i]); // Calculate the product by multiplying the current element.

        // Recursive call to include the current element and move to the next element.
        int val = fun(i + 1, arr, k, n, p);

        p /= arr[i]; // Backtrack and remove the current element from the product.

        // Recursive call to exclude the current element and move to the next element.
        int val1 = fun(i + 1, arr, k, n, p);

        // Store the result in the memoization map and return the total count.
        return m[{i, p}] = val + val1;
    }

    // Function to find the number of subsets with product less than or equal to K.
    int numOfSubsets(int arr[], int N, int K)
    {
        // Call the recursive function 'fun' starting from index 0 and with initial product 1.
        // Subtract 1 from the result to exclude the empty subset (product=1).
        return fun(0, arr, K, N, 1) - 1;
    }
};

int main()
{
    int N, K;
    cin >> N; // Input size of the array

    int arr[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i]; // Input array elements

    cin >> K; // Input value of K

    Solution ob;

    // Call the numOfSubsets function to find the number of subsets with product less than or equal to K.
    cout << ob.numOfSubsets(arr, N, K) << endl;

    return 0;
}

/*
The given C++ program calculates the number of subsets of an array with a product less than or equal to a given value K.
It uses a recursive approach with memoization to efficiently compute the result.

The Solution class contains a member variable m, which is a map used for memoization to store the results of subproblems
that have already been computed.

Inside the class, there is a recursive function fun, which takes the following parameters:

i: The current index of the array.
arr: The input array.
k: The given value K.
n: The size of the array.
p: The current product of elements in the current subset being considered.
The function fun recursively explores all possible subsets of the array and counts the subsets with a product less than
or equal to K.

The base cases of the recursion are:

If the product p exceeds K, return 0, as the subset is not valid.
If all elements have been considered, and the product p is less than or equal to K, return 1, as it is a valid subset.
The recursive function uses memoization to store the results of subproblems to avoid redundant calculations and improve
efficiency.

In the numOfSubsets function, the recursive function fun is called with initial parameters (i=0, p=1) to calculate the
number of subsets with a product less than or equal to K.
The result is then returned, subtracting 1 to exclude the empty subset (with product=1).

In the main function, the user inputs the size of the array N, the array elements, and the value of K. The Solution object ob is created, and the numOfSubsets function is called to find the desired count. The result is then printed to the console.
*/

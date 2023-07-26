/*
Given an array arr[] of N elements.
Find the number of non-empty subsets whose product of elements is less than or equal to a given integer K.

Input:
N = 4
arr[] = {2, 4, 5, 3}
K = 12
Output:
8
Explanation:
All possible subsets whose
products are less than 12 are:
(2), (4), (5), (3), (2, 4), (2, 5), (2, 3), (4, 3)

*/


#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Recursive helper function to find the number of subsets with product less than or equal to K.
    int helper(int ind, int prod, int arr[], int n, int k) {
        // Base case: If all elements have been considered, return 1 if product is less than or equal to K, otherwise return 0.
        if (ind == n) {
            if (prod <= k) return 1;
            return 0;
        }

        int b = 0;
        // Recursive call to exclude the current element and move to the next index.
        int a = helper(ind + 1, prod, arr, n, k);
        // Recursive call to include the current element and move to the next index, if the product remains less than or equal to K.
        if (prod * arr[ind] <= k)
            b = helper(ind + 1, prod * arr[ind], arr, n, k);

        // Return the sum of subsets with the current element included or excluded.
        return (a + b);
    }

    // Function to find the number of subsets with product less than or equal to K.
    int numOfSubsets(int arr[], int N, int K) {
        // Call the helper function with initial index 0 and initial product 1.
        // Subtract 1 from the result to exclude the empty subset (product=1).
        return helper(0, 1, arr, N, K) - 1;
    }
};

int main() {
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
The given C++ program calculates the number of subsets of an array with a product less than or equal to a given value K. It uses a recursive approach to explore all possible subsets and count the valid ones.

The Solution class contains a member function helper, which is a recursive function to calculate the number of subsets with product less than or equal to K. It takes the following parameters:

ind: The current index of the array.
prod: The current product of elements in the current subset being considered.
arr: The input array.
n: The size of the array.
k: The given value K.
The base case of the recursion is when all elements have been considered (i.e., ind == n). In this case, the function checks if the current product prod is less than or equal to K. If it is, it returns 1 (valid subset), otherwise it returns 0 (invalid subset).

The recursive function has two recursive calls:

The first call (a) is to exclude the current element and move to the next index (ind + 1).
The second call (b) is to include the current element and move to the next index, but only if the product remains less than or equal to K (prod * arr[ind] <= k).
The function returns the sum of the two recursive calls (a + b), representing the total count of subsets with the current element included or excluded.

In the numOfSubsets function, the recursive function helper is called with initial parameters (ind = 0, prod = 1) to calculate the number of subsets with product less than or equal to K.
The result is then returned, subtracting 1 to exclude the empty subset (with product=1).

In the main function, the user inputs the size of the array N, the array elements, and the value of K. The Solution object ob is created, and the numOfSubsets function is called to find the desired count. The result is then printed to the console.
*/

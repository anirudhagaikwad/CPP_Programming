/*
There are given N ropes of different lengths, we need to connect these ropes into one rope.
The cost to connect two ropes is equal to sum of their lengths. The task is to connect the ropes with minimum cost.
Given N size array arr[] contains the lengths of the ropes.

Example 1:

Input:
n = 4
arr[] = {4, 3, 2, 6}
Output:
29
Explanation:
We can connect the ropes in following ways.
1) First connect ropes of lengths 2 and 3.Which makes the array {4, 5, 6}. Cost of this operation 2+3 = 5.
2) Now connect ropes of lengths 4 and 5. Which makes the array {9, 6}. Cost of this operation 4+5 = 9.
3) Finally connect the two ropes and all ropes have connected. Cost of this operation 9+6 =15
Total cost for connecting all ropes is 5+ 9 + 15 = 29. This is the optimized cost for connecting ropes.


Input:
n = 5
arr[] = {4, 2, 7, 6, 9}
Output:
62

*/
#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n)
    {
        // Create a priority queue (min heap) to store the elements of the input array.
        // Using min heap ensures that the ropes with minimum lengths are always at the top.
        priority_queue<long long, vector<long long>, greater<long long> > pq;

        // Push all the elements of the input array into the priority queue.
        for (long long i = 0; i < n; i++)
        {
            pq.push(arr[i]);
        }

        long long ans = 0; // Initialize a variable to store the minimum cost.

        // Continue the loop until there is only one element left in the priority queue.
        // Each iteration connects the two smallest ropes and updates the total cost.
        while (pq.size() != 1)
        {
            long long t1 = pq.top(); // Get the smallest rope.
            pq.pop(); // Remove the smallest rope from the priority queue.
            long long t2 = pq.top(); // Get the second smallest rope.
            pq.pop(); // Remove the second smallest rope from the priority queue.

            ans = ans + t1 + t2; // Add the cost of connecting the two smallest ropes to the total cost.

            pq.push(t1 + t2); // Push the combined length of the two ropes back into the priority queue.
        }

        return ans; // Return the minimum cost of connecting all the ropes.
    }
};

int main()
{
    long long n;
    cin >> n; // Read the number of ropes from the user.

    long long i, a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i]; // Read the lengths of the ropes from the user and store them in the array 'a'.
    }

    Solution ob;
    cout << ob.minCost(a, n) << endl; // Call the minCost function and print the minimum cost of connecting the ropes.

    return 0;
}

/*
The given C++ code aims to find the minimum cost of connecting ropes of different lengths into one rope. The cost of connecting two ropes is equal to the sum of their lengths. The objective is to find the minimum possible cost of connecting all the ropes into a single rope.

The Solution class contains a member function minCost, which takes an array of long long integers (arr) and its size (n) as input and returns the minimum cost as a long long.

The minCost function uses a priority queue (min heap) to efficiently handle the ropes' lengths. It first pushes all the elements of the input array into the priority queue. The priority queue automatically arranges the ropes in ascending order, so the smallest rope length will always be at the top.

The function then initializes a variable ans to store the minimum cost. It repeatedly performs the following steps until there is only one rope left in the priority queue:

Pop the two smallest ropes (top two elements) from the priority queue.
Add their lengths to the ans variable to update the total cost.
Combine the two lengths into a single rope by pushing their sum back into the priority queue.
After the loop finishes, there will be only one rope left in the priority queue, and it will represent the single rope created by connecting all the original ropes with minimum cost. The function returns the final ans, which contains the minimum cost of connecting all the ropes.

In the main function, the user is asked to input the number of ropes (n) and the lengths of the ropes (a). Then, the minCost function of the Solution class is called, and the minimum cost of connecting the ropes is printed to the console.
*/

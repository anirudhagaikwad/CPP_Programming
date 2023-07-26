/*
There are N bags with diamonds in them. The i'th of these bags contains A[i] diamonds.
If you drop a bag with A[i] diamonds, it changes to A[i]/2 diamonds and you gain A[i] diamonds.
Dropping a bag takes 1 minute. Find the maximum number of diamonds that you can take if you are given K minutes.

Input:
N = 5, K = 3
A[] = {2, 1, 7, 4, 2}
Output:
14


Input:
N = 3, K = 2
A[] = {7, 1, 2}
Output:
10
Explanation:
You take all diamonds from First bag (7).
The state of bags becomes: 3 1 2
Take all diamonds from again First bag (3).
The state of bags becomes: 1 1 2
You can take a maximum of 10 diamonds.

*/

#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    // Function to calculate the maximum sum of diamonds that can be obtained after K operations.
    long long maxDiamonds(int A[], int N, int K) {
        priority_queue<int> p; // Create a max-heap to store the elements of the array.

        long long sum = 0; // Variable to store the sum of diamonds obtained.

        // Push all elements of the array into the max-heap.
        for (int i = 0; i < N; ++i) {
            p.push(A[i]);
        }

        // Perform K operations to maximize the sum of diamonds.
        while (K > 0) {
            sum += p.top(); // Add the top element (maximum element) to the sum.
            int faker = p.top() / 2; // Calculate half of the current maximum element.
            p.pop(); // Remove the top element (maximum element) from the max-heap.
            p.push(faker); // Push the half value (faker) back into the max-heap.
            K--; // Decrement K to keep track of the number of operations performed.
        }

        return sum; // Return the sum of diamonds obtained after K operations.
    }
};

int main() {
    int N, K;
    cin >> N >> K; // Read the number of elements in the array (N) and the number of operations (K) from the user.
    int A[N];
    for (int i = 0; i < N; i++)
        cin >> A[i]; // Read each element of the array from the user.

    Solution ob;
    cout << ob.maxDiamonds(A, N, K) << endl; // Call the maxDiamonds function to calculate and print the maximum sum.

    return 0;
}

/*
The given C++ code calculates the maximum sum of diamonds that can be obtained after performing a certain number of operations.

The Solution class contains a member function maxDiamonds, which takes three arguments: A (an array of integers representing the diamonds), N (the number of elements in the array), and K (the number of operations to perform).

The function starts by creating a max-heap p, which stores the elements of the array in descending order. All elements of the array are pushed into the max-heap.

Next, the function performs K operations to maximize the sum of diamonds. In each operation, it adds the top element (maximum element) of the max-heap to the variable sum, which keeps track of the sum of diamonds obtained so far. It then calculates half of the current maximum element (by dividing the top element by 2) and stores it in the variable faker. The top element (maximum element) is removed from the max-heap using pop, and the half value (faker) is pushed back into the max-heap using push. This process is repeated for K operations.

After performing all operations, the function returns the value of sum, which represents the maximum sum of diamonds that can be obtained after K operations.

In the main function, the user is asked to input the number of elements in the array (N), the number of operations to perform (K), and the elements of the array (A). The maxDiamonds function of the Solution class is then called with these inputs to calculate the maximum sum of diamonds after performing K operations. The result is printed to the console.
*/

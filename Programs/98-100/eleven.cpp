/*

You are given N numbers you can decrease each number by 10 % or K kg whichever is more.
If the number you choose is less than K you can make it zero.
Your task is to minimize the sum of the number as small as possible by performing N operations only

Note: Final answer should be typecasted to the nearest integer smaller or equal to the value.

Input:
N = 2
k = 10
arr = 100 15

Output:
95
Explanation:
You will remove 10 from 100
then once again remove 10
90.

*/

#include <iostream>
#include <queue>
using namespace std;

class Solution {
public:
    // Function to calculate the minimum sum after performing operations on the array.
    long long minSum(vector<int> a, int N, int K) {
        priority_queue<float> maxh; // Create a max-heap to store elements of the array.

        // Push all elements of the array into the max-heap.
        for (int i = 0; i < N; i++) {
            maxh.push(a[i]);
        }

        // Perform operations on the elements of the array in the max-heap.
        for (int i = 0; i < N; i++) {
            float t = maxh.top(); // Get the top element (maximum element) from the max-heap.
            maxh.pop(); // Remove the top element from the max-heap.

            if (t < K) {
                t = 0; // If the element is less than K, set it to 0 (as it cannot be further reduced).
            } else {
                float p = 0.1 * t; // Calculate 10% of the current element.
                if (p > K) {
                    t -= p; // If 10% of the current element is greater than K, subtract it from the current element.
                } else {
                    t -= K; // Otherwise, subtract K from the current element.
                }
            }

            maxh.push(t); // Push the modified element back into the max-heap.
        }

        // Calculate the sum of elements in the max-heap after performing operations.
        float sum = 0;
        for (int i = 0; i < N; i++) {
            sum += maxh.top(); // Add the top element to the sum.
            maxh.pop(); // Remove the top element from the max-heap.
        }

        return (long long)sum; // Return the sum as a long long data type.
    }
};

int main() {
    int N, K;
    cout << "N: ";
    cin >> N; // Read the number of elements in the array from the user.
    cout << "K: ";
    cin >> K; // Read the value of K from the user.
    cout << "Enter array elements: ";
    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i]; // Read each element of the array from the user.

    Solution ob;
    cout << ob.minSum(a, N, K) << endl; // Call the minSum function to calculate and print the minimum sum.

    return 0;
}

/*
The given C++ code calculates the minimum sum of elements in an array after performing certain operations on its elements.

The Solution class contains a member function minSum, which takes three arguments: a (a vector representing the array of integers), N (the number of elements in the array), and K (a constant integer value).

The function starts by creating a max-heap maxh, which stores the elements of the array in descending order. All elements of the array are pushed into the max-heap.

Next, the function performs operations on the elements of the array. For each element in the max-heap, it checks whether the element is less than K. If it is, the element is set to 0, as it cannot be further reduced. If the element is greater than or equal to K, it calculates 10% of the current element. If 10% of the current element is greater than K, it subtracts the 10% value from the current element; otherwise, it subtracts K from the current element. The modified element is then pushed back into the max-heap.

After performing operations on all elements, the function calculates the sum of elements in the max-heap. It iteratively adds the top element (maximum element) of the max-heap to the sum and removes it from the max-heap. The loop continues until all elements are processed.

Finally, the function returns the sum as a long long data type, as the problem specifies that the output should be a long long integer.

In the main function, the user is asked to input the number of elements in the array (N), the value of K, and the elements of the array. The minSum function of the Solution class is then called with these inputs to calculate the minimum sum after performing operations on the array elements. The result is printed to the console.
*/


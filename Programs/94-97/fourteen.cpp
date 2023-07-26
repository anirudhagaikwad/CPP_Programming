/*

One day Jay, on getting his first salary, decides to distribute apples among the poverty-stricken persons.
He gave each person 1kg of apples. People are coming in a queue and he makes sure that he gives every person 1 kg of
apples only once. Every person is identified by a specific integer.

Given the length of the queue N followed by an array of N integers, denoting the persons in that queue, find the
minimum kilograms of apples Jay will have to distribute.


Input : arr[ ] = {1, 1, 1, 1, 1}
Output : 1
Explanation:
For test case 1, the same person (identified by the integer '1' comes again and again in the queue, but Jay will not give him apples
again and again. He gave him apples only once so minimum kg's of apples here required-1kg).


Input : arr[ ] = {1, 2, 3, 1, 2}
Output :  3

*/

#include<bits/stdc++.h>
using namespace std;

// Function prototype to find the minimum number of distinct apples.
int minimum_apple(int arr[], int n);

int main()
{
    int n;
    cin >> n; // Input the size of the array.

    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i]; // Input array elements.

    int ans;
    ans = minimum_apple(arr, n); // Call the function to find the minimum number of distinct apples.
    cout << ans << "\n"; // Output the result.

    return 0;
}

// Function to find the minimum number of distinct apples.
int minimum_apple(int arr[], int n)
{
    unordered_set<int> s; // Create an unordered set to store distinct apples.

    for (int i = 0; i < n; i++)
    {
        if (s.find(arr[i]) == s.end()) // If the element is not present in the set.
        {
            s.insert(arr[i]); // Insert it into the set to keep track of distinct apples.
        }
    }

    return s.size(); // Return the size of the set, which represents the minimum number of distinct apples.
}

/*
The given C++ program calculates the minimum number of distinct apples from the given array of apples using an unordered set.

The minimum_apple function takes the following parameters:

arr: An array containing apples.
n: The size of the array.
The function uses an unordered set (s) to keep track of the distinct apples.
It iterates through each element of the array and checks if it is already present in the set using the find method.
If the element is not present (i.e., it is a distinct apple), it inserts it into the set using the insert method.

After iterating through the entire array, the function returns the size of the set using the size method.
The size of the set represents the minimum number of distinct apples in the given array.

In the main function, the user inputs the size of the array (n) and the array elements.
The minimum_apple function is then called with the array and its size as arguments, and the result
(minimum number of distinct apples) is printed to the console.

*/




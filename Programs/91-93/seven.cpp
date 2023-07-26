/*
You are given a vector V of size n. You need to sort it and reverse it.

Input:
n = 5
V = 3 53 21 23 89

Output:
3 21 23 53 89
89 53 23 21 3

*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function prototype declarations
vector<int> sortVector(vector<int>v);
vector<int> reverseVector(vector<int>v);

// Function to sort the elements of the vector in ascending order
vector<int> sortVector(vector<int>v)
{
    sort(v.begin(),v.end()); // Sorting the vector using the STL sort function
    return v; // Returning the sorted vector
}

// Function to reverse the elements of the vector
vector<int> reverseVector(vector<int>v)
{
    reverse(v.begin(),v.end()); // Reversing the vector using the STL reverse function
    return v; // Returning the reversed vector
}

int main()
{
    int n;
    cin>>n; // User input for the number of elements in the vector

    vector<int>v; // Declaring a vector to store the elements

    // Loop to take input for each element
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x); // Input vector elements and add them to the vector
    }

    v=sortVector(v); // Calling the sortVector() function to sort and store the sorted vector in 'v'

    // Printing the elements of the sorted vector
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;

    v=reverseVector(v); // Calling the reverseVector() function to reverse and store the reversed vector in 'v'

    // Printing the elements of the reversed vector
    for(auto x:v)
        cout<<x<<" ";
    cout<<endl;

    return 0; // Indicates successful execution of the program
}

/*
The given C++ program allows the user to enter a set of integers and then performs two operations on the input vector.
First, it sorts the vector in ascending order, and then it reverses the sorted vector.
The program uses two functions, sortVector() and reverseVector(), to achieve these tasks.

*/



/*
Pairs and vectors can be used together to achieve some amazing results. Here we will learn to use a vector that holds pairs.
You are given a vector V of size n. The vector hold pair of integers.
Example V={(1,2),(3,4)...}. Now, you need to sum the second elements.

Example 1:

Input:
N = 5
vector -> {(1, 2), (3, 4), (5, 6),(7, 8), (9, 10)}
Output:
30

*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Function prototype declaration
void sum(vector<pair<int,int>>v);

// Function to print the sum of the second elements in the pairs
void sum(vector<pair<int,int>>v)
{
    long long sum=0; // Variable to hold the sum, using 'long long' to handle large sums
    for(auto val : v){
        sum += val.second; // Accumulating the second element of each pair to the sum
    }
    cout<<sum; // Printing the sum to the console
    cout<<endl; // Adding a newline for formatting
}

int main() {
    int n;
    cin>>n; // User input for the number of pairs

    vector<pair<int,int>>v; // Making a vector that holds pairs of integers

    // Loop to take input for each pair
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y; // Input for the two integers of the pair
        v.push_back(make_pair(x,y)); // Pushing the pair into the vector
    }

    sum(v); // Calling the 'sum' function to compute and print the sum of the second elements

    return 0; // Indicates successful execution of the program
}


/*

The given C++ program calculates the sum of the second elements in a vector of pairs.
It prompts the user to enter the number of pairs they want to input, followed by pairs of integers.
Each pair consists of two integers, and the program stores them in a vector.
The sum() function is then called to compute the sum of the second elements of all the pairs in the vector and
prints the result to the console.

*/






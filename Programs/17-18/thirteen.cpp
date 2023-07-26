/*
Given a positive integer n. Your task is to check if it is divisible as given below:
1. If it is divisible by 11, print "Eleven".
2. If it is divisible by 3, print "Three".
3. If it is divisible by 2, print "Two".
4. If not following the above three rules, print "-1".
Note: If n is divisible by more than one of the above-given numbers, print the one which is the largest.

Input: 55
Output: Eleven

Input: 9
Output: Three

Input: 56
Output: Two

*/


#include <iostream>
using namespace std;

// Prorotype of function
void isDivisibleByPrime(int);


// Function to check divisibility N is the input integer
void isDivisibleByPrime(int n)
{

    // Your code here
    if(n%11==0)
    {
        cout<<"Eleven";
    }
    else if(n%3==0)
    {
        cout<<"Three";
    }
    else if(n%2==0)
    {
        cout<<"Two";
    }
    else
    {
        cout<<"-1";
    }
    cout<<endl;

}
int main()
{

    int n;
    cin >> n;

    isDivisibleByPrime(n);


    return 0;
}

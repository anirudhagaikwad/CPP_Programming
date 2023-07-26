/*
Lucky numbers are subset of integers.

See the process of arriving at lucky numbers,
Take the set of integers

1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19,……
First, delete every second number, we get following reduced set.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19,…………
Now, delete every third number, we get
1, 3, 7, 9, 13, 15, 19,….….
Continue this process indefinitely……
Any number that does NOT get deleted due to above process is called “lucky”.

Input: 9
Output: 0

Input: 3
Output: 1

*/

#include<iostream>
using namespace std;

bool ans(int n,int i)
{
    if(n<i)
    {
        return 1;
    }
    if((n)%i==0)
    {
        return 0;
    }
    ans(n-(n/i),i+1);
}
bool isLucky(int n)
{
    return ans(n,2);
}

int main(){

    cout<<isLucky(3);
    return 0;
}

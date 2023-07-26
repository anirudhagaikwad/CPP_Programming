/*
Given an array of integers, find and print the frequency count of each element using a multiset.

Input: n= 7
       1 4 6 1 3 2 8
Output:
1 appears 2 times
1 appears 2 times
2 appears 1 times
3 appears 1 times
4 appears 1 times
6 appears 1 times
8 appears 1 times
*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    multiset<int> freqCount;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freqCount.insert(num);
    }
    for (int num : freqCount) {
        cout << num << " appears " << freqCount.count(num) << " times" << endl;
    }
    return 0;
}

/*
This program uses a multiset to count the frequency of each element in the input array.
It prints the element along with its frequency count.
*/

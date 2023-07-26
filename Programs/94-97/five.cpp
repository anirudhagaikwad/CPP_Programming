/*
Given two multisets of integers, find their union (combined elements) and print the result.

Input: {1, 2, 2, 3, 4, 5}
       {3, 4, 4, 5, 6, 7}

Output: 1 2 2 3 4 4 5 6 7

*/

#include <iostream>
#include <set>
#include<algorithm>

using namespace std;

int main() {
    multiset<int> multiset1 = {1, 2, 2, 3, 4, 5};
    multiset<int> multiset2 = {3, 4, 4, 5, 6, 7};
    multiset<int> unionSet;
    set_union(multiset1.begin(), multiset1.end(), multiset2.begin(), multiset2.end(), inserter(unionSet, unionSet.begin()));
    for (int num : unionSet) {
        cout << num << " ";
    }
    return 0;
}

/*
This program uses set_union from the algorithm library to find the union of two multisets.
It prints the combined elements from both multisets, considering duplicates.
*/

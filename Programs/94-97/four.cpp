/*
Given two sets of integers, find their intersection (common elements) and print the result.

Input: {1, 2, 3, 4, 5}
       {3, 4, 5, 6, 7}
Output:
3 4 5
*/

#include <iostream>
#include <set>
#include<algorithm>

using namespace std;

int main() {
    set<int> set1 = {1, 2, 3, 4, 5};
    set<int> set2 = {3, 4, 5, 6, 7};
    set<int> intersection;
    set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), inserter(intersection, intersection.begin()));
    for (int num : intersection) {
        cout << num << " ";
    }
    return 0;
}

/*
This program uses set_intersection from the algorithm library to find the common elements between two sets.
It prints the elements that are present in both sets.
*/

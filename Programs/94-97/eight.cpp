/*
 Given an array of integers, find and print the unique elements in it using a set.

Input: N= 5
        4 6 4 5 2
Output: 2 4 5 6

*/

#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> uniqueNums;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        uniqueNums.insert(num);
    }
    for (int num : uniqueNums) {
        cout << num << " ";
    }
    return 0;
}
/*
This program uses a set to store unique elements from an input array.
It ensures that only distinct elements are stored, and then prints them in ascending order.
*/

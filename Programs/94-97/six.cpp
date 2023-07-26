/*
Given a list of votes (represented as strings), count the number of votes for each candidate using a map.

Input: 5
A B B A A
Output:
A received 3 votes
B received 2 votes

*/

#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> voteCount;
    for (int i = 0; i < n; i++) {
        string candidate;
        cin >> candidate;
        voteCount[candidate]++;
    }
    for (auto it : voteCount) {
        cout << it.first << " received " << it.second << " votes" << endl;
    }
    return 0;
}

/*
This program uses a map to count the number of votes received by each candidate from a list of votes.
It prints the candidate name along with the number of votes received.
*/

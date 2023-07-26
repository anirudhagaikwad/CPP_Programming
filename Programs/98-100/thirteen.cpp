/*
N people from 1 to N are standing in the queue at a movie ticket counter.
It is a weird counter, as it distributes tickets to the first K people and then the last K people and
again first K people and so on, once a person gets a ticket moves out of the queue. The task is to find the last person
to get the ticket.

Input:
N = 9
K = 3
Output:
6
Explanation:
Starting queue will like {1, 2, 3, 4, 5, 6, 7, 8, 9}. After the first distribution queue will look like {4, 5, 6, 7, 8, 9}.
And after the second distribution queue will look like {4, 5, 6}. The last person to get the ticket will be 6.

Input:
N = 5
K = 1
Output:
3

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to distribute tickets and return the winner's ticket number.
    int distributeTicket(int n, int k) {
        int first = 1; // Initialize the first ticket number as 1.
        int last = n; // Initialize the last ticket number as 'n'.
        int i = (n / k) - 1; // Calculate the number of groups formed after each distribution.

        int count = 1; // Initialize a variable to keep track of the distribution rounds.

        // Continue the loop until there are tickets left for distribution (first < last).
        while (first < last) {
            if (count % 2 != 0)
                first += k; // In odd distribution rounds, increase 'first' by 'k'.
            else
                last -= k; // In even distribution rounds, decrease 'last' by 'k'.
            count++; // Increment the distribution round count.
        }

        // At this point, either 'first' or 'last' will represent the winning ticket number.
        // If the number of distribution rounds is odd, 'first' will be the winner; otherwise, 'last' will be the winner.
        if (count % 2 != 0)
            return first;
        else
            return last;
    }
};

int main() {
    int N;
    scanf("%d", &N); // Read the total number of tickets from the user.

    int K;
    scanf("%d", &K); // Read the number of tickets to be distributed in each round from the user.

    Solution obj;
    int res = obj.distributeTicket(N, K); // Call the distributeTicket function.

    cout << res << endl; // Print the ticket number of the winner.

    return 0;
}

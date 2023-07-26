/*
Given a linked list of N nodes where nodes can contain values 0s, 1s, and 2s only.
The task is to segregate 0s, 1s, and 2s linked list such that all zeros segregate to head side, 2s at the end of
the linked list, and 1s in the mid of 0s and 2s.

Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2

*/


#include <bits/stdc++.h>

using namespace std;

/* Link list Node */
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node *start = NULL;

class Solution
{
public:
    // Function to sort a linked list of 0s, 1s, and 2s.
    Node* segregate(Node *head) {

        // Step 1: Convert the linked list into a vector to perform sorting.
        vector<int> arr;
        while (head) {
            arr.push_back(head->data);
            head = head->next;
        }

        // Step 2: Use Dutch National Flag algorithm to sort the array (vector).
        int i = 0, j = 0, k = arr.size() - 1;
        while (j <= k) {
            if (arr[j] == 0) {
                swap(arr[i], arr[j]);
                ++i;
                ++j;
            } else if (arr[j] == 1) {
                ++j;
            } else if (arr[j] == 2) {
                swap(arr[j], arr[k]);
                --k;
            }
        }

        // Step 3: Convert the sorted vector back to a linked list.
        Node* dummy = new Node(-1);
        Node* ans = dummy;
        for (int i = 0; i < arr.size(); ++i) {
            dummy->next = new Node(arr[i]);
            dummy = dummy->next;
        }

        return ans->next;
    }
};

// Function to print the elements of the linked list.
void printList(struct Node *Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

// Function to insert elements into the linked list.
void insert(int n1) {
    int n, value, i;
    n = n1;
    struct Node *temp;
    for (i = 0; i < n; i++) {
        scanf("%d", &value);

        if (i == 0) {
            start = new Node(value);
            temp = start;
            continue;
        } else {
            temp->next = new Node(value);
            temp = temp->next;
            temp->next = NULL;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    insert(n);

    Solution ob;
    struct Node *newHead = ob.segregate(start);

    printList(newHead);

    return 0;
}

/*
The code contains a C++ implementation of sorting a linked list that contains only 0s, 1s, and 2s.
The Node struct represents a linked list node with an integer data value and a pointer to the next node.
The Solution class provides a segregate function to sort the linked list using the Dutch National Flag algorithm,
which sorts an array of 0s, 1s, and 2s in linear time.
In the main function, it reads the number of elements in the linked list and then calls the insert function to construct
the linked list.
After constructing the linked list, the segregate function from the Solution class is called to sort the linked list.
Finally, the printList function is used to print the sorted linked list elements.

*/

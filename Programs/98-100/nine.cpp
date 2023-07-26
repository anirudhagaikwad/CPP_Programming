/*
Given a binary tree and the task is to find the spiral order traversal of the tree.

Spiral order Traversal mean: Starting from level 0 for root node, for all the even levels we print the node's value from right to left and
for all the odd levels we print the node's value from left to right.


Input:
      1
    /   \
   3     2
Output:1 3 2


Input:
           10
         /     \
        20     30
      /    \
    40     60
Output: 10 20 30 60 40

*/

#include <iostream>
#include <queue>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

vector<int> findSpiral(Node *root);

// Function to Build Tree
Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after splitting by space
    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if(currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if(currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    string s;
    getline(cin, s);
    Node* root = buildTree(s);

    vector<int> vec = findSpiral(root);
    for(int x : vec)
        cout << x << " ";
    cout << endl;

    return 0;
}

vector<int> findSpiral(Node *root)
{
    queue<Node*> q;
    vector<int> v = {};
    q.push(root);
    int f = 0; // A flag to keep track of the direction (left-to-right or right-to-left) for the spiral order.

    while (!q.empty())
    {
        int size = q.size();
        int n = v.size();
        for (int i = 0; i < size; i++)
        {
            Node* temp = q.front();
            v.push_back(temp->data);
            q.pop();
            int n = v.size() - 1; // Keep track of the index of the last element inserted in 'v'.

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }

        if (f == 0)
            reverse(v.begin() + n, v.end()); // Reverse the elements from the last index 'n' to the end of 'v' for a right-to-left spiral order.
        f = (f + 1) % 2; // Toggle the flag 'f' to switch the direction for the next level of the tree.
    }
    return v; // Return the vector containing the elements in spiral order.
}

/*
The given C++ code performs a level-order traversal of a binary tree in a spiral or zigzag manner and prints the elements in the spiral order.

The Node struct represents a single node of the binary tree, with an integer data value and pointers to its left and right children.

The newNode function is a utility function to create a new node and initialize its data and child pointers.

The findSpiral function takes the root of the binary tree as input and returns a vector of integers representing the elements in spiral order.

The buildTree function is used to construct a binary tree from a string input.
The string represents the level-order traversal of the tree, where "N" denotes a NULL node.

In the main function, the user is asked to input the level-order traversal of the binary tree as a string. The function buildTree is then called to construct the binary tree from the input string. After that, the findSpiral function is called to obtain the elements in spiral order, which are stored in the vector vec. Finally, the elements in vec are printed in the spiral order to the console.

The findSpiral function performs a level-order traversal using a queue. It uses a vector v to store the elements in the spiral order. The function starts by pushing the root node into the queue. A flag f is used to keep track of the direction of traversal for the spiral order. For each level of the tree, the function iterates through the elements in the queue (all nodes at the current level) and adds them to the vector v. If the flag f is 0, it means the direction is left-to-right, so the elements are inserted in the vector normally. If the flag is 1, it means the direction is right-to-left, so the elements are inserted in reverse order. After processing all nodes at the current level, the flag f is toggled (switched between 0 and 1) to switch the direction for the next level. This process continues until the queue is empty.
Finally, the vector v containing the elements in spiral order is returned
*/

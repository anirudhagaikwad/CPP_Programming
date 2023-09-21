#include <iostream>
#include <vector>
#include <climits>

using namespace std;

#define INF INT_MAX
/*
- This part of the code includes necessary header files and defines a constant `INF` which represents infinity. It's used to initialize distances to an unreachable value.
'INT_MAX' It's typically defined in the <climits> header and is system-dependent. On most systems, it is equal to 2147483647, which is the maximum value that a 32-bit signed integer can hold.
*/
// Structure to represent a node in the network
struct Node {
    int id;
    vector<int> neighbors;
    vector<int> distance;
};
/*
- Here, we define a `Node` structure to represent a node in the network. Each node has an `id`, a list of `neighbors`, and a `distance` vector to store the distances from this node to all other nodes.
*/
// Function to initialize the distance vector for a node
void initializeDistanceVector(Node& node, int numNodes) {
    node.distance.resize(numNodes, INF);
    node.distance[node.id] = 0;
}
/*
- `initializeDistanceVector` is a function that sets up the initial distance vector for a node. It resizes the `distance` vector to the total number of nodes in the network, initializes all distances to `INF`, and sets the distance from the node to itself to 0.
*/
// Function to update the distance vector of a node
void updateDistanceVector(Node& node, const vector<Node>& network) {
    for (int neighbor : node.neighbors) {
        for (int i = 0; i < network.size(); ++i) {
            if (node.distance[i] > node.distance[neighbor] + network[neighbor].distance[i]) {
                node.distance[i] = node.distance[neighbor] + network[neighbor].distance[i];
            }
        }
    }
}
/*
- `updateDistanceVector` is a function that updates the distance vector of a node based on information from its neighbors. It iterates over the neighbors of the node and checks if a shorter path to other nodes is available through these neighbors. If a shorter path is found, it updates the distance accordingly.
*/
// Function to print the distance vector of a node
void printDistanceVector(const Node& node) {
    cout << "Node " << node.id << " Distance Vector: ";
    for (int distance : node.distance) {
        cout << (distance == INF ? "INF" : to_string(distance)) << " ";
    }
    cout << endl;
}
/*
- `printDistanceVector` is a function that prints the distance vector of a node in a readable format.
*/
int main() {
    int numNodes;
    cout << "Enter the number of nodes: ";
    cin >> numNodes;

    vector<Node> network(numNodes);

    // Initialize the network
    for (int i = 0; i < numNodes; ++i) {
        network[i].id = i;
        cout << "Enter the number of neighbors for Node " << i << ": ";
        int numNeighbors;
        cin >> numNeighbors;
        network[i].neighbors.resize(numNeighbors);
        network[i].distance.resize(numNodes, INF);
        for (int j = 0; j < numNeighbors; ++j) {
            cout << "Enter neighbor ID for Node " << i << ": ";
            cin >> network[i].neighbors[j];
            cout << "Enter distance from Node " << i << " to Node " << network[i].neighbors[j] << ": ";
            cin >> network[i].distance[network[i].neighbors[j]];
        }
        initializeDistanceVector(network[i], numNodes);
    }

    // Perform Distance Vector Routing Algorithm
    bool updated;
    do {
        updated = false;
        for (Node& node : network) {
            vector<int> oldDistanceVector = node.distance;
            updateDistanceVector(node, network);
            if (oldDistanceVector != node.distance) {
                updated = true;
            }
        }
    } while (updated);
/*
1. `bool updated;`: This declares a boolean variable named `updated` which will be used to keep track of whether any distance vectors have been updated during an iteration of the loop.

2. `do { ... } while (updated);`: This is a `do-while` loop, which means that the code block inside the `do { ... }` will be executed at least once before checking the condition in `while (updated)`. This ensures that the loop runs at least once, even if `updated` is initially `false`.

3. `updated = false;`: At the beginning of each iteration of the loop, the `updated` variable is reset to `false`. This assumes that no distance vectors have been updated yet in this iteration.

4. `for (Node& node : network) { ... }`: This is a `for` loop that iterates through all the nodes in the `network` vector.

5. `vector<int> oldDistanceVector = node.distance;`: Inside the loop, a temporary vector named `oldDistanceVector` is created to store a copy of the current distance vector of the current node. This copy is taken before the `updateDistanceVector` function is called.

6. `updateDistanceVector(node, network);`: The `updateDistanceVector` function is called for the current node. This function attempts to update the distance vector of the node based on information from its neighbors.

7. `if (oldDistanceVector != node.distance) { updated = true; }`: After the `updateDistanceVector` function is called, the code checks whether the distance vector of the node has been updated. If the updated vector is not equal to the old one, it means that at least one distance has changed, so the `updated` flag is set to `true`.

8. `while (updated);`: After processing all nodes in the network, the loop continues to run as long as `updated` is `true`. If `updated` is still `true` after processing all nodes, it means that at least one distance vector has been updated, so the loop will continue to run another iteration.

The loop keeps running until no more updates occur during an entire iteration. In the context of the Distance Vector Routing Algorithm, this loop is used to propagate distance information through the network until convergence, ensuring that each node's distance vector is updated as needed based on information from its neighbors. When no further updates occur, it means that the algorithm has converged, and the loop exits, and the final distance vectors are printed.
*/
    // Print the final distance vectors
    for (const Node& node : network) {
        printDistanceVector(node);
    }

    return 0;
}
/*
- In the `main` function, the program starts by taking input for the number of nodes and initializing a `vector` called `network` to represent the network of nodes.

- Inside a loop, it takes input for the number of neighbors and distances for each node in the network and initializes their distance vectors using the `initializeDistanceVector` function.

- The Distance Vector Routing Algorithm is performed in a loop until there are no more updates. In each iteration, it checks if any node's distance vector can be updated through its neighbors. If there are updates, it sets the `updated` flag to `true`.

- Finally, it prints the final distance vectors for all nodes in the network using the `printDistanceVector` function.

*/

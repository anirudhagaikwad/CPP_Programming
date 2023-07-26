/*
Given a grid of dimension nxm where each cell in the grid can have values 0, 1 or 2 which has the following meaning:
0 : Empty cell
1 : Cells have fresh oranges
2 : Cells have rotten oranges

We have to determine what is the minimum time required to rot all oranges.
A rotten orange at index [i,j] can rot other fresh orange at indexes [i-1,j], [i+1,j], [i,j-1], [i,j+1] (up, down, left and right)
in unit time.

Input: grid = {{0,1,2},{0,1,2},{2,1,1}}
Output: 1
Explanation: The grid is-
0 1 2
0 1 2
2 1 1
Oranges at positions (0,2), (1,2), (2,0) will rot oranges at (0,1), (1,1), (2,2) and (2,1) in unit time.

Input: grid = {{2,2,0,1}}
Output: -1
*/


#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    // Function to find the minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int> >& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // Create a queue to perform BFS (breadth-first search).
        queue<pair<pair<int, int>, int> > q;
        int vis[n][m]; // Create a 2D array to mark visited cells and store the time when each cell got rotten.
        int time = 0; // Initialize a variable to keep track of the time.

        // Iterate through the grid to initialize the queue and the 'vis' array.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 2) {
                    q.push({{i, j}, time}); // Push the coordinates and time of rotten oranges into the queue.
                    vis[i][j] = 2; // Mark the cell as rotten in the 'vis' array.
                } else {
                    vis[i][j] = 0; // Mark other cells as unvisited in the 'vis' array.
                }
            }
        }

        // Arrays to define possible moves (up, right, down, left).
        int drow[] = {-1, 0, +1, 0};
        int dcol[] = {0, +1, 0, -1};

        while (!q.empty()) {
            int r = q.front().first.first; // Get the row coordinate of the current rotten orange.
            int c = q.front().first.second; // Get the column coordinate of the current rotten orange.
            int t = q.front().second; // Get the time when the current orange got rotten.
            time = max(time, t); // Update the overall time to ensure the latest rotten orange time is recorded.
            q.pop(); // Remove the current rotten orange from the queue.

            // Check all possible adjacent cells of the current rotten orange.
            for (int i = 0; i < 4; i++) {
                int nrow = r + drow[i]; // Calculate the row coordinate of the adjacent cell.
                int ncol = c + dcol[i]; // Calculate the column coordinate of the adjacent cell.

                // Check if the adjacent cell is within the grid and contains a fresh orange (not rotten).
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1) {
                    q.push({{nrow, ncol}, t + 1}); // Push the adjacent cell into the queue with an increased time.
                    vis[nrow][ncol] = 2; // Mark the adjacent cell as rotten in the 'vis' array.
                }
            }
        }

        // After performing BFS, check if there are any remaining fresh oranges in the grid.
        // If there are, it means some oranges are not rotting, and it's impossible to rot all oranges.
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] != 2 && grid[i][j] == 1) {
                    return -1; // If there are fresh oranges that didn't get rotten, return -1.
                }
            }
        }

        return time; // Return the minimum time required to rot all oranges.
    }
};

int main() {
    int n, m;
    cin >> n >> m; // Read the number of rows and columns of the grid from the user.

    vector<vector<int> > grid(n, vector<int>(m, -1)); // Create a 2D vector 'grid' to represent the oranges grid.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j]; // Read the status (0, 1, or 2) of each orange cell from the user.
        }
    }

    Solution obj;
    int ans = obj.orangesRotting(grid); // Call the orangesRotting function.

    cout << ans << "\n"; // Print the minimum time required to rot all oranges.

    return 0;
}

/*
The given C++ code aims to find the minimum time required to rot all oranges in a 2D grid. Each cell in the grid is represented by a value:

0: Empty cell
1: Fresh orange
2: Rotten orange
The task is to determine how long it will take to rot all fresh oranges using rotten oranges as a medium.

The Solution class contains a member function orangesRotting, which takes a 2D vector grid representing the orange grid.

The function uses a queue and performs a BFS (breadth-first search) to simulate the rotting process. It starts by finding all the rotten oranges (value 2) in the grid and enqueues them into the queue along with their time of being rotten.
It also initializes a 2D array vis to track the visited cells and their respective time of rotting.

Next, it performs a BFS by continuously dequeuing the front element of the queue (a rotten orange) and then checking its adjacent cells (up, right, down, left) to see if they are fresh oranges (value 1) and can be rotted using the current rotten orange. If a fresh orange can be rotted, it is enqueued into the queue with an increased time (time of the current rotten orange + 1) and marked as rotten in the vis array.

The process continues until there are no more fresh oranges that can be rotted by the current rotten oranges. The maximum time recorded during this process represents the minimum time required to rot all oranges.

After the BFS is complete, the function checks if there are any remaining fresh oranges in the grid. If there are, it means that some oranges cannot be rotted, and the function returns -1 to indicate that it's impossible to rot all oranges. Otherwise, it returns the maximum time recorded during the BFS, which represents the minimum time required to rot all oranges successfully.

In the main function, the user is asked to input the number of rows (n) and columns (m) of the grid, and the status of each cell is read from the user. Then, the orangesRotting function of the Solution class is called, and the minimum time required to rot all oranges is printed to the console.
*/

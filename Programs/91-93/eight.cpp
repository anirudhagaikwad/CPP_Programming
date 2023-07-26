/*
Given an NxM 2D matrix, rearrange such that
Each diagonal in the lower left triangle of the rectangular grid is sorted in ascending order.
Each diagonal in the upper right triangle of the rectangular grid is sorted in descending order.
The major diagonal in the grid starting from the top-left corner is not rearranged.

Input:
N = 4, M = 5
matrix = {{3 6 3 8 2},
          {4 1 9 5 9},
          {5 7 2 4 8},
          {8 3 1 7 6}}
Output:
3 9 8 9 2
1 1 6 5 8
3 4 2 6 3
8 5 7 7 4

*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to diagonal sort the elements of the matrix
    void diagonalSort(vector<vector<int>>& mat, int n, int m) {

        // Diagonal sorting in the lower part of the matrix
        for(int i = 1; i < n; i++) {
            int k = i;
            int j = 0;
            vector<int> v;
            while(k < n && j < m) {
                v.push_back(mat[k][j]);
                j++;
                k++;
            }
            sort(v.begin(), v.end()); // Sorting the diagonal elements
            k = i;
            j = 0;
            int l = 0;
            while(k < n && j < m && l < v.size()) {
                mat[k][j] = v[l]; // Storing the sorted diagonal elements back in the matrix
                k++;
                j++;
                l++;
            }
        }

        // Diagonal sorting in the upper part of the matrix
        for(int j = 1; j < m; j++) {
            int k = j;
            int i = 0;
            vector<int> v;
            while(k < m && i < n) {
                v.push_back(mat[i][k]);
                i++;
                k++;
            }
            sort(v.begin(), v.end(), greater<int>()); // Sorting the diagonal elements in reverse order
            k = j;
            i = 0;
            int l = 0;
            while(k < m && i < n && l < v.size()) {
                mat[i][k] = v[l]; // Storing the sorted diagonal elements back in the matrix
                k++;
                i++;
                l++;
            }
        }

    }
};


int main()
{
    int n, m;
    cin >> n >> m; // User input for the dimensions of the matrix

    int inputline2[n * m];
    for (int i = 0; i < n * m; ++i)
        cin >> inputline2[i]; // User input for the matrix elements

    vector<vector<int>> matrix(n, vector<int>(m, 0));

    // Initializing the matrix with the input elements
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; ++j) {
            matrix[i][j] = inputline2[i * m + j];
        }
    }

    Solution ob;
    ob.diagonalSort(matrix, n, m); // Calling the diagonalSort function to sort the matrix diagonally

    // Printing the modified matrix after diagonal sorting
    cout << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0; // Indicates successful execution of the program
}

/*
The given C++ program reads a matrix from the user, then it sorts the diagonals of the matrix in two steps -
first the lower diagonals and then the upper diagonals.
It uses a class Solution with a member function diagonalSort() to perform the diagonal sorting.

*/



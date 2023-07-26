/*
Given a 2D array A[ ][ ] of size N x N consisting of integers. The task is to print all the elements in matrix (row and column order) form.

Input:
3
5 2 3
4 9 6
8 8 9
Output:
5 2 3
4 9 6
8 8 9

*/


#include <iostream>
using namespace std;

void twoDimensional(int **A,int N){

    // Loop to iterate through matrix
    for(int i = 0;i<N;i++){
        for(int j = 0;j<N;j++){
            cout<<A[i][j]<<" ";
        }
        cout << endl;
    }
}

int main() {


	    // Declaring mat as pointer to pointer
	    int **mat;
	    int N;
	    cin >> N;

	    // mat pointer contains array of pointer to array
    	mat = new int*[N];

    	// Taking input to mat[][]
    	for(int i = 0;i<N;i++){
    	    mat[i] = new int[N];
    	}

    	for(int i = 0;i<N;i++){
    	    for(int j = 0;j<N;j++){
    	        cin >> mat[i][j];
    	    }
    	}

    	twoDimensional(mat, N);


	return 0;
}

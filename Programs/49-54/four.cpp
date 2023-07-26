/*
Create a class representing a 2x2 matrix and overload the '+' operator to perform matrix addition.

Input:
1 2
3 4

5 6
7 8

Output:
6 8
10 12

*/

#include <iostream>
using namespace std;

class Matrix {
private:
    int mat[2][2];

public:
    Matrix(int m00, int m01, int m10, int m11) {
        mat[0][0] = m00;
        mat[0][1] = m01;
        mat[1][0] = m10;
        mat[1][1] = m11;
    }

    // Overloading the '+' operator
    Matrix operator+(const Matrix& other) {
        Matrix result(0, 0, 0, 0);
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result.mat[i][j] = mat[i][j] + other.mat[i][j];
            }
        }
        return result;
    }

    void display() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << mat[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m1(1, 2, 3, 4);
    Matrix m2(5, 6, 7, 8);

    Matrix result = m1 + m2;
    result.display();

    return 0;
}

/*
 This program implements a class Matrix to represent 2x2 matrices.
 The '+' operator is overloaded to perform matrix addition.
 The display() function is used to print the result.
*/

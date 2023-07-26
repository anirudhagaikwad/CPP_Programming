/*
Print numbers from 1 to N without the help of loops.

Input:
N = 10
Output: 1 2 3 4 5 6 7 8 9 10

*/

#include <iostream>

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        std::cout << n << " ";
    }
}

int main() {
    int N = 10;
    printNumbers(N);
    std::cout << std::endl;
    return 0;
}
/*
The program defines a recursive function printNumbers that takes an integer n as input.
Inside the function, it first checks if n is greater than 0. If it is, the function calls itself with n-1 as the argument. This recursive call continues until n becomes 0.

When n becomes 0, the recursive calls start unwinding. At each step of unwinding, the function prints the value of n and then returns to the previous call.
*/

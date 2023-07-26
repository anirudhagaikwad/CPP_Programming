/*
Given two integers A and B. The task is to swap two numbers. Swapping here means to interchange the values of A and B.

Example:

Before swap - x: 10, y: 20
After swap - x: 20, y: 10

*/

#include <iostream>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "Before swap - x: " << x << ", y: " << y << std::endl;
    swap(&x, &y);
    std::cout << "After swap - x: " << x << ", y: " << y << std::endl;

    return 0;
}


/*
 The program defines a function swap that takes two integer pointers as arguments. Inside the function, the values pointed to by the
 pointers are swapped using a temporary variable. In the main function, two integer variables x and y are initialized.
 The program calls the swap function, passing the addresses of x and y as arguments, to swap their values.
 The program then prints the values of x and y before and after the swap.
*/

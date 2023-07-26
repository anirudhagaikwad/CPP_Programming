/*
 Write a program to find maximum and minimum of two numbers without using loop and any condition.

Input: 17 19
Output: max = 19
        min = 17
*/
#include<iostream>
#include <cstdlib> // Header file for abs() method

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b; // Read two integer values 'a' and 'b' from the user.

    // Calculate the maximum and minimum of the two input integers 'a' and 'b'.
    // The formula for calculating the maximum of two numbers without using the max() function is:
    // max = ((a + b) + abs(a - b)) / 2

    int maxi = ((a + b) + abs(a - b)) / 2; // Calculate the maximum of 'a' and 'b'.
    int mini = ((a + b) - abs(a - b)) / 2; // Calculate the minimum of 'a' and 'b'.


    cout << "max = " << maxi << endl; // Print the calculated maximum value.
    cout << "min = " << mini; // Print the calculated minimum value.

    return 0;
}


// The abs() function is used to calculate the absolute value (magnitude) of the difference between 'a' and 'b'.
// The expression (a + b) + abs(a - b) gives the sum of 'a' and 'b' when 'a' is greater than or equal to 'b',
// and it gives the sum of 'a' and 'b' when 'b' is greater than 'a'.

// The expression (a + b) - abs(a - b) gives the sum of 'a' and 'b' when 'a' is smaller than 'b',
// and it gives the difference between 'a' and 'b' when 'a' is greater than or equal to 'b'.

// Therefore, (a + b) + abs(a - b) and (a + b) - abs(a - b) both represent the sum of 'a' and 'b',
// so dividing by 2 gives the maximum and minimum values, respectively.

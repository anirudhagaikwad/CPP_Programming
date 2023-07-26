/*
In a local school, a Math Club is organizing a competition for students to showcase their mathematical skills.
As part of the competition, the students are required to find the Greatest Common Divisor (GCD) of two given numbers.

Your task is to write a C++ program to help the participants solve this specific challenge during the competition.

Input: Enter two numbers: 6 9
Output: The greatest common divisor of 6 and 9 is 3

*/

#include <iostream> // Including the input-output stream library.

using namespace std; // Using the standard namespace for simplicity.

// Function to calculate the Greatest Common Divisor (GCD) using the Euclidean Algorithm.
int gcd(int a, int b) {
    if (b == 0) { // Base case: If b is zero, the GCD is a, and we return it.
        return a;
    } else { // Otherwise, we recursively call the function with b and a % b (remainder of a divided by b).
        return gcd(b, a % b);
    }
}

int main() {
    int a, b; // Declare two integer variables 'a' and 'b' to store user inputs.

    cout << "Enter two numbers: "; // Prompt the user to enter two numbers.
    cin >> a >> b; // Read the two numbers from the user.

    int gcd_value = gcd(a, b); // Call the 'gcd' function to calculate the GCD of 'a' and 'b'.

    // Display the result to the user.
    cout << "The greatest common divisor of " << a << " and " << b << " is " << gcd_value << endl;

    return 0; // Return 0 to indicate successful program execution.
}


/*
This program first defines the gcd() function, which takes two integers a and b as input and returns their greatest common divisor.
The greatest common divisor of two numbers is the largest number that is a factor of both numbers.
The gcd() function is declared as an inline function, which tells the compiler to expand the function in line when it is called.
This can improve the execution time of the program.
*/

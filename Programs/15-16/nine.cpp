/*
 Write CPP program to print sum of two integers without + operator
*/

#include <iostream>

using namespace std;

int main()
{
    int a = 5; // Initialize an integer variable 'a' with the value 5.
    int b = 5; // Initialize an integer variable 'b' with the value 5.

    // The expression -( -a - b ) is used to calculate the sum of 'a' and 'b' without using the '+' operator.
    // It utilizes the property of double negation to perform addition.

    int sum = -( -a - b ); // Calculate the sum of 'a' and 'b' using the double negation technique.

    cout << sum; // Print the calculated sum to the console.

    return 0;
}

/*
The given C++ code demonstrates an alternative way to calculate the sum of two integers a and b without using the addition (+) operator.

At the beginning of the code, two integer variables a and b are declared and initialized with the value 5.

The line int sum = -( -a - b ); calculates the sum of a and b using the double negation technique. Here's how it works:

-a negates the value of a, turning it into -5.
-b negates the value of b, turning it into -5.
-(-5 - 5) is equivalent to -(-10), which results in 10.
Finally, the outer - negates the result again, giving -10.
So, the variable sum will hold the value -10, which is the calculated sum of a and b using the double negation technique.

The code then prints the value of sum to the console using cout, which displays the sum -10.

The double negation technique is a mathematical trick that allows us to perform addition using only subtraction and negation. It is an alternative approach to calculate the sum of two integers without using the usual addition operator.
*/

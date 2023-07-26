/*
Given a stack of integers of size N, your task is to complete the function pairWiseConsecutive(),
that checks whether numbers in the stack are pairwise consecutive or not. The pairs can be increasing or decreasing,
and if the stack has an odd number of elements, the element at the top is left out of a pair.
The function should retain the original stack content.

Only following standard operations are allowed on stack.

push(X): Enter a element X on top of stack.
pop(): Removes top element of the stack.
empty(): To check if stack is empty.

Input:
6
1 2 3 4 5 6
Output: Yes

Input:
5
1 4 6 8 3
Output: No

*/

#include <bits/stdc++.h>
using namespace std;

// Function prototype to check if elements in the stack are pairwise consecutive.
bool pairWiseConsecutive(stack<int> s);

int main()
{
    stack<int> s;
    int n, tmp;
    cin >> n; // Read the number of elements to be inserted into the stack from the user.
    while (n--)
    {
        cin >> tmp; // Read each element and push it into the stack.
        s.push(tmp);
    }

    // Call the pairWiseConsecutive function to check if elements in the stack are pairwise consecutive.
    if (pairWiseConsecutive(s))
    {
        cout << "Yes" << endl; // If the elements are pairwise consecutive, print "Yes".
    }
    else
    {
        cout << "No" << endl; // If the elements are not pairwise consecutive, print "No".
    }

    return 0;
}

// Function to check if elements in the stack are pairwise consecutive.
bool pairWiseConsecutive(stack<int> s)
{
    stack<int> a; // Create a temporary stack 'a' to store the pairwise elements.

    a.push(s.top()); // Push the top element of 's' into 'a'.
    s.pop(); // Remove the top element from 's'.

    // Iterate through the remaining elements in 's'.
    while (!s.empty())
    {
        // Check if the difference between the top element of 'a' and 's' is 1.
        // If it is not 1, then the elements are not pairwise consecutive, so return false.
        if (a.top() - s.top() != 1)
        {
            return false;
        }

        a.pop(); // Remove the top element from 'a'.
        a.push(s.top()); // Push the top element of 's' into 'a'.
        s.pop(); // Remove the top element from 's'.
    }

    return true; // If all elements are pairwise consecutive, return true.
}

/*
The given C++ code aims to determine whether the elements in the stack are pairwise consecutive or not.

The pairWiseConsecutive function takes a stack s as input and checks whether its elements are pairwise consecutive. It does so by creating a temporary stack a to store the pairwise elements. It starts by pushing the top element of the original stack s into the temporary stack a and then removing it from s.

Next, it enters a loop that iterates through the remaining elements in the original stack s. In each iteration, it checks if the difference between the top element of the temporary stack a and the top element of s is equal to 1. If the difference is not 1, it means the elements are not pairwise consecutive, and the function returns false.

If the difference is 1, it indicates that the elements are pairwise consecutive, so the function continues the process. It removes the top element from the temporary stack a, pushes the top element of s into a, and removes it from s.

The loop continues until there are no more elements in the original stack s. If the loop completes successfully without returning false, it means all elements are pairwise consecutive, and the function returns true.

In the main function, the user is asked to input the number of elements to be inserted into the stack (n). Each element is read from the user and pushed into the stack. After that, the pairWiseConsecutive function is called to check if the elements in the stack are pairwise consecutive. If they are, "Yes" is printed; otherwise, "No" is printed.
*/

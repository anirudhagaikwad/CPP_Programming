/*
You want to implement a sorting feature for the "Smart Shopping List" application,
which will allow users to sort their list of products in non-decreasing order based on their prices.

Input:
Enter the number of elements: 5
Enter 5 elements: 45 2 22 46 9

Output: Sorted vector: 2 9 22 45 46

*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n; // Variable to store the number of elements
    std::cout << "Enter the number of elements: ";
    std::cin >> n; // User input for the number of elements

    std::vector<int> vec(n); // Create a vector to store 'n' elements

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i]; // Input each element of the vector from the user
    }

    std::sort(vec.begin(), vec.end()); // Sort the elements of the vector in ascending order

    std::cout << "Sorted vector: ";
    for (int num : vec) {
        std::cout << num << " "; // Output each element of the sorted vector
    }
    std::cout << std::endl;

    return 0; // Indicates successful execution of the program
}


/*
This program takes a vector of integers as input and sorts it in non-decreasing order using the sort algorithm from
the <algorithm> header.
*/

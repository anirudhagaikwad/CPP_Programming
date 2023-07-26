/*
Sarah is a data analyst working on a project that involves analyzing a dataset of students' test scores.
As part of her analysis, she needs to remove any duplicate test scores from the dataset to ensure the accuracy of her findings.
She decides to write a program that will help her remove duplicate elements from a list of integers.
Write a program to help her.


Input:
Enter the number of elements: 5
Enter 5 elements: 3 4 2 3 4

Output:
Vector after removing duplicates: 2 3 4

*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n; // User input for the number of elements

    std::vector<int> vec(n); // Create a vector to store 'n' elements

    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i]; // Input each element of the vector from the user
    }

    std::sort(vec.begin(), vec.end()); // Sort the elements of the vector in ascending order

    vec.erase(std::unique(vec.begin(), vec.end()), vec.end()); // Remove duplicate elements from the sorted vector

    std::cout << "Vector after removing duplicates: ";
    for (int num : vec) {
        std::cout << num << " "; // Output each element of the vector after duplicates are removed
    }
    std::cout << std::endl;

    return 0; // Indicates successful execution of the program
}


/*
This program takes a vector of integers as input and removes all duplicate elements by first sorting the vector
and then using the unique and erase algorithms from the <algorithm> header.

*/



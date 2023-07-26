/*

You are working on a C++ program that processes elements of a vector. Your task is to implement a function that accesses elements from the vector
using an index. However, you need to handle the scenario when the index is out of range. Additionally, you should observe how the exception handling
affects the flow of execution in the main function.

Input: vector<int> numbers = {1, 2, 3, 4, 5};
       processVectorElement(numbers, 10);
Output: Out of range exception: vector::_M_range_check: __n (which is 10) >= this->size() (which is 5)

Input: vector<int> numbers = {1, 2, 3, 4, 5};
       processVectorElement(numbers, 2);
Output: Value at index 2: 3

Input: vector<int> numbers = {1, 2, 3, 4, 5};
       processVectorElement(numbers, 5);
Output: Out of range exception: vector::_M_range_check: __n (which is 5) >= this->size() (which is 5)

*/

#include <iostream>
#include <vector>

void processVectorElement(const std::vector<int>& numbers, size_t index) {
    try {
        int value = numbers.at(index);
        std::cout << "Value at index " << index << ": " << value << std::endl;
    }
    catch (const std::out_of_range& ex) {
        std::cout << "Out of range exception: " << ex.what() << std::endl;
    }
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};

    try {
        processVectorElement(numbers, 5); // Should throw "Out of range exception!"
        processVectorElement(numbers, 2);
    }
    catch (const std::exception& ex) {
        std::cout << "Main caught exception: " << ex.what() << std::endl;
    }

    return 0;
}

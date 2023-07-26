/*
You are a software developer working on an educational application.
The application allows teachers to store and manage student scores for various assessments.
To achieve this, you decide to create a class called "DynamicArray" that will dynamically store an array of integers representing
the scores of students in a particular assessment.

Input:
Enter size of the array: 6
Enter array elements: 34 67 43 55 60 64

Output: Array elements: 34 67 43 55 60 64

*/

#include <iostream>

class DynamicArray {
private:
    int* arr;
    int size;

public:
    // Constructor with dynamic memory allocation
    DynamicArray(int arrSize) {
        size = arrSize;
        arr = new int[size];
        std::cout<<"Enter array elements: ";
        for (int i = 0; i < size; i++) {
            int k;
            std::cin>>k;
            arr[i] = k;
        }
    }

    void displayArray() {
        std::cout << "Array elements: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    // Destructor to free the dynamically allocated memory
    ~DynamicArray() {
        delete[] arr;
    }
};

int main() {
    int s;
    std::cout<<"Enter size of the array: ";
    std::cin>>s;
    DynamicArray arrObj(s);
    arrObj.displayArray();
    return 0;
}


/*
This program defines a class DynamicArray with a constructor that uses dynamic memory allocation to store
an array of integers with the given size. The displayArray() method prints the elements of the array.
The destructor is also implemented to free the dynamically allocated memory when the object goes out of scope.
*/

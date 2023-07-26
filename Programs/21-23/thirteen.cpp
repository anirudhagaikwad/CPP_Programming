/*

We have two types of arrays one is integer and another is float type.
Your task is to sort an array of integers and an array of floats using method overloading.

Example:

Enter the size of the array of integers: 5
Enter the elements of the array of integers: 34 56 78 9 1
Sorted array of integers: 1 9 34 56 78
Enter the size of the array of floats: 5
Enter the elements of the array of floats: 3.2 3.1 3.8 3.6 3.9
Sorted array of floats: 3.1 3.2 3.6 3.8 3.9

*/

#include<iostream>

const int MAX_SIZE = 100;


// Sort an array of integers
void sortArray(int arr[MAX_SIZE], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "Sorted array of integers: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Sort an array of floats
void sortArray(float arr[MAX_SIZE], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    std::cout << "Sorted array of floats: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{

    int size;
    int arrInt[MAX_SIZE];
    float arrFloat[MAX_SIZE];

    // Array of integers
    std::cout << "Enter the size of the array of integers: ";
    std::cin >> size;

    std::cout << "Enter the elements of the array of integers: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arrInt[i];
    }

    sortArray(arrInt, size);

    // Array of floats
    std::cout << "Enter the size of the array of floats: ";
    std::cin >> size;

    std::cout << "Enter the elements of the array of floats: ";
    for (int i = 0; i < size; i++)
    {
        std::cin >> arrFloat[i];
    }

    sortArray(arrFloat, size);

    return 0;
}

/*
We have used bubble sort technique to sort the arrays in above program.
*/

/*
You have to find the sum, average, and maximum element of an array of integers and an array of floats.
Write the program for same using method overloading.

Example:

Enter the size of the array of integers: 5
Enter the elements of the array of integers: 34 1 67 32 11
Sum of integers: 145
Average of integers: 29
Maximum element in integers: 67
Enter the size of the array of floats: 2.5 6.5 21.1 7.4 2.4
Enter the elements of the array of floats: Sum of floats: 27.6
Average of floats: 13.8
Maximum element in floats: 21.1

*/

#include<iostream>

const int MAX_SIZE = 100;


// Calculate the sum of an array of integers
int calculateSum(int arr[MAX_SIZE], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Calculate the sum of an array of floats
float calculateSum(float arr[MAX_SIZE], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

// Calculate the average of an array of integers
float calculateAverage(int arr[MAX_SIZE], int size)
{
    float sum = calculateSum(arr, size);
    return sum / size;
}

// Calculate the average of an array of floats
float calculateAverage(float arr[MAX_SIZE], int size)
{
    float sum = calculateSum(arr, size);
    return sum / size;
}

// Find the maximum element in an array of integers
int findMaximum(int arr[MAX_SIZE], int size)
{
    int maxElement = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }

    return maxElement;
}

// Find the maximum element in an array of floats
float findMaximum(float arr[MAX_SIZE], int size)
{
    float maxElement = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxElement)
            maxElement = arr[i];
    }

    return maxElement;
}


int main()
{

    int sizeInt;
    float sizeFloat;
    int arrInt[MAX_SIZE];
    float arrFloat[MAX_SIZE];

    // Array of integers
    std::cout << "Enter the size of the array of integers: ";
    std::cin >> sizeInt;

    std::cout << "Enter the elements of the array of integers: ";
    for (int i = 0; i < sizeInt; i++)
    {
        std::cin >> arrInt[i];
    }

    std::cout << "Sum of integers: " << calculateSum(arrInt, sizeInt) << std::endl;
    std::cout << "Average of integers: " << calculateAverage(arrInt, sizeInt) << std::endl;
    std::cout << "Maximum element in integers: " << findMaximum(arrInt, sizeInt) << std::endl;

    // Array of floats
    std::cout << "Enter the size of the array of floats: ";
    std::cin >> sizeFloat;

    std::cout << "Enter the elements of the array of floats: ";
    for (int i = 0; i < sizeFloat; i++)
    {
        std::cin >> arrFloat[i];
    }

    std::cout << "Sum of floats: " << calculateSum(arrFloat, sizeFloat) << std::endl;
    std::cout << "Average of floats: " << calculateAverage(arrFloat, sizeFloat) << std::endl;
    std::cout << "Maximum element in floats: " << findMaximum(arrFloat, sizeFloat) << std::endl;

    return 0;
}

/*
In above program we have overloaded 3 methods to find the sum, average, and maximum element of an array of integers and an array of floats.
*/


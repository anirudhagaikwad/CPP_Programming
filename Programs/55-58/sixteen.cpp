/*
Create a base class NumberSeries with a method to generate the next term in the series.
Derive two classes FibonacciSeries and PrimeSeries from NumberSeries to generate the next Fibonacci number and
the next prime number, respectively.

Input: n=10
Output:
Fibonacci Series: 1 2 3 5 8 13 21 34 55 89
Prime Series: 3 4 5 7 11 13 17 19 23 29

*/

#include <iostream> // Include the standard input/output stream library
#include <vector>   // Include the vector container

// Base class: NumberSeries
class NumberSeries {
public:
    // Virtual function to generate the next term in the series (to be overridden by derived classes)
    virtual int generateNextTerm() = 0;
};

// Derived class: FibonacciSeries (inherits from NumberSeries)
class FibonacciSeries : public NumberSeries {
private:
    int prev, curr; // Private data members to keep track of previous and current terms

public:
    // Constructor to initialize the first two terms of the Fibonacci series
    FibonacciSeries() : prev(0), curr(1) {}

    // Overridden function to generate the next term in the Fibonacci series
    int generateNextTerm() override {
        int next = prev + curr;
        prev = curr;
        curr = next;
        return next;
    }
};

// Derived class: PrimeSeries (inherits from NumberSeries)
class PrimeSeries : public NumberSeries {
private:
    std::vector<bool> isPrime; // Private vector to store whether a number is prime or not
    int num;                   // Private data member to keep track of the current number

public:
    // Constructor to initialize the PrimeSeries with the first prime number (2)
    PrimeSeries() : num(2) {
        isPrime.resize(1000, true); // Resize the vector to initially consider all numbers as prime
        isPrime[0] = isPrime[1] = false; // Mark 0 and 1 as non-prime since they are not considered prime
    }

    // Overridden function to generate the next prime number in the series
    int generateNextTerm() override {
        while (true) {
            ++num;
            if (num >= isPrime.size())
                isPrime.resize(isPrime.size() * 2, true); // Resize the vector if needed

            if (isPrime[num]) {
                // If the current number is prime, mark all its multiples as non-prime
                for (int i = num * 2; i < isPrime.size(); i += num) {
                    isPrime[i] = false;
                }
                return num; // Return the current prime number
            }
        }
    }
};

int main() {
    // Create a FibonacciSeries object and display the first 10 terms of the Fibonacci series
    FibonacciSeries fibSeries;
    std::cout << "Fibonacci Series: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << fibSeries.generateNextTerm() << " ";
    }
    std::cout << std::endl;

    // Create a PrimeSeries object and display the first 10 prime numbers
    PrimeSeries primeSeries;
    std::cout << "Prime Series: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << primeSeries.generateNextTerm() << " ";
    }
    std::cout << std::endl;

    return 0;
}

/*
This C++ program demonstrates the use of polymorphism and inheritance to generate and display two different number series: the Fibonacci series and the prime number series.

The NumberSeries class is a base class that contains a pure virtual function generateNextTerm(). This function is meant to be overridden by derived classes to generate the next term in the number series.

The FibonacciSeries class is a derived class from NumberSeries, representing the Fibonacci series. It overrides the generateNextTerm() function to calculate the next term based on the previous two terms (starting with 0 and 1).

The PrimeSeries class is another derived class from NumberSeries, representing the prime number series. It overrides the generateNextTerm() function to generate the next prime number using the Sieve of Eratosthenes algorithm. It uses a boolean vector isPrime to keep track of whether a number is prime or not.

In the main() function, we create objects of both FibonacciSeries and PrimeSeries. We then use a loop to call the generateNextTerm() function for each object and display the first 10 terms of each series.

*/





/*
As a part of conversion calculator you are tasked to Convert temperature from Fahrenheit to Celsius

Input: 75.0
Output: The temperature in Celsius is: 23.8889

*/


#include <iostream>

int main() {
    double fahrenheit = 75.0;
    double celsius = (fahrenheit - 32) * 5 / 9;
    std::cout << "The temperature in Celsius is: " << celsius << std::endl;
    return 0;
}
/*
Implement a program that takes a temperature value in Fahrenheit as input and converts it to Celsius
using the formula:
celsius = (fahrenheit - 32) * 5 / 9

*/

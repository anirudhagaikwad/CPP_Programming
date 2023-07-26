/*
Help fitness manager to Calculate the Body Mass Index (BMI) of clients.

Input: Enter weight(kg) and height(m^2) 72.57 1.78
Output: The Body Mass Index (BMI) is: 22.9043

Constraints:
The values of weight(kg) and height(m^2) should be positive integers.

*/

#include <iostream>
using namespace std;

int main() {
    double weight;
    double height;
    cout<<"Enter weight(kg) and height(m^2) ";
    cin>>weight>>height;
    double bmi = weight / (height * height);
    cout << "The Body Mass Index (BMI) is: " << bmi << std::endl;
    return 0;
}

/*

Implement a program that takes the weight (in kilograms) and height (in meters) of a person as input and
calculates their BMI using the formula: BMI = weight / (height * height)

*/

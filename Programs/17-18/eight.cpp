/*
Given the number N, reverse the digits of N.

Input: 3748
Output: 8473

*/

#include <iostream>

int reverseDigits(int num) {
    int reversedNum = 0;
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return reversedNum;
}

int main() {
    int num = 3748;
    int reversedNum = reverseDigits(num);
    std::cout << "Original number: " << num << std::endl;
    std::cout << "Reversed number: " << reversedNum << std::endl;
    return 0;
}
/*
The program defines a function reverseDigits that takes an integer num as input and returns the reversed number.

Inside the reverseDigits function, a variable reversedNum is initialized to 0. The program then enters a loop that continues until num becomes 0. In each iteration of the loop, the program extracts the last digit of num using the modulo operator % and stores it in the variable digit. It then updates the reversedNum by multiplying it by 10 and adding the digit. Finally, num is divided by 10 to discard the last digit.

By the end of the loop, reversedNum will contain the reversed digits of the original number. The function returns this reversed number.

*/

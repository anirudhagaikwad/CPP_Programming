/*
Write a program to Implement the following pattern:

Input: n = 5

Output:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/


#include <iostream>
using namespace std;

int main()
{
	int rows = 1, columns = 0, n = 5;

	// 1 value is assigned to the number helpful to print the number pattern
	int number = 1;

	// while loops check the condition and repeat the loop until the condition is false
	while (rows <= n) {
		while (columns <= rows - 1) {

			// printing number to get required pattern
			cout << number << " ";

			// incrementing columns value
			columns++;

			// incrementing number value to print the next number
			number++;
		}
		columns = 0;

		// incrementing rows value
		rows++;
		cout << endl;
	}
	return 0;
}


#include<iostream>
using namespace std;
void findNumber(int arr[5] , int key) {
		int i;
		bool foundIt=false;
		for(i=0;i<5;i++) {
			if(arr[i]==key) {
				foundIt=true;
				break;  // Unlabeled Break
			}// if
		} //for
		if(foundIt) {
			cout<<key<<" Found at array index "<<i;
		}else {
			cout<<key<<" Not-Found in array";
		}
	}//findNumber_unlabeledBreak(int[] arr , int key)
	
	
void switchDemo(int year,int monthNumber) {
		/* calculates number of days in particular month */
int numDays=0;
switch(monthNumber) {
case 1: case 3: case 5: case 7: case 8: case 10: case 12: numDays=31; break;
		case 4: case 6: case 9: case 11: numDays=30;break;
		case 2: if(((year%4==0)&& !(year%100==0)) || (year %400==0)) {numDays=29;}
else {numDays=28;} break;
default : cout<<"Invalid Input"; break;		           
		}
cout<<numDays<<" Number of Days in month "<<monthNumber;
	}
	
int main(){
switchDemo(2023,9);
int arr[]={5,99,77,44,66};
findNumber(arr,77);
return 0;
}	

/*
year % 4 == 0: This checks if the year is divisible by 4. Leap years must be divisible by 4 to be considered.

year % 100 == 0: This checks if the year is divisible by 100. However, there's a special rule: if a year is divisible by 100 but not divisible by 400, it's not a leap year. That's why you see !(year % 100 == 0). The exclamation mark ! negates the result, so it checks if the year is not divisible by 100.

year % 400 == 0: This checks if the year is divisible by 400. If a year is divisible by 400, it's considered a leap year.

Now, let's combine these conditions with logical operators:

(year % 4 == 0) && !(year % 100 == 0): This part checks if the year is divisible by 4 but not by 100. If this condition is met, it means it's a leap year, except when it's divisible by 400.

year % 400 == 0: This checks if the year is divisible by 400.

*/

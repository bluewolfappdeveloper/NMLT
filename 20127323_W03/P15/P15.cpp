#pragma region TestCase
// Test case 1
// Input: 29 2 2020
// Output: 1 3 2020

// Test case 2
// Input: 28 2 2019
// Output: 1 3 2019

// Test case 3
// Input: 28 2 2020
// Output: 29 2 2020

// Test case 4
// Input: 31 3 2015
// Output: 1 4 2015

// Test case 5
// Input: 30 4 2021
// Output: 1 5 2021

// Test case 6
// Input: 24 2 2002
// Output: 25 2 2002

// Test case 7
// Input: 31 12 2020
// Output: 1 1 2021
#pragma endregion

#include <iostream>

using namespace std;

int main() {

	int day, month, year; bool isLeapYear;

	cin >> day >> month >> year;

	#pragma region Check Leap Year

		if (year % 10 == 0 && (year / 10) % 10 == 0) {
			if (year % 400 == 0) isLeapYear = true;
			else isLeapYear = false;
		}
		else
		{
			if (year % 4 == 0) isLeapYear = true;
			else isLeapYear = false;
		}
	#pragma endregion

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) {
		if (day == 31) cout << "1 " << month + 1 << " " << year;
		if (day < 31) cout << day + 1 << " " << month << " " << year;
	}
	
	if (month == 12) {
		if (day == 31)  cout << "1 1 " << year + 1;
		if (day < 31) cout << day + 1 << " " << month << " " << year;
	}

	if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day == 30) cout << "1 " << month + 1 << " " << year;
		if (day < 30) cout << day + 1 << " " << month << " " << year;
	}

	if (month == 2) {
		if (isLeapYear) {
			if (day == 29)  cout << "1 " << month + 1 << " " << year;
			if (day < 29) cout << day + 1 << " " << month << " " << year;
		}
		else
			if (day == 28)  cout << "1 " << month + 1 << " " << year;
			if (day < 28) cout << day + 1 << " " << month << " " << year;
	}

	return 0;
}
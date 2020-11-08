#pragma region TestCase
// Test case 1
// Input: 3 2020
// Output: 31

// Test case 2
// Input: 2 2600
// Output: 28

// Test case 3
// Input: 2 2024
// Output: 29
#pragma endregion

#include <iostream>

using namespace std;

int main()
{
	int year, month; bool isLeapYear;

	cin >> month >> year;

	if (year % 10 == 0 && (year / 10) % 10 == 0) {
		if (year % 400 == 0) isLeapYear = true;
		else isLeapYear = false;
	}
	else
	{
		if (year % 4 == 0) isLeapYear = true;
		else isLeapYear = false;
	}

	switch (month)
	{
		case 1: cout<<"31";
			break;
		case 3: cout << "31";
			break;
		case 5: cout << "31";
			break;
		case 7: cout << "31";
			break;
		case 8: cout << "31";
			break;
		case 10: cout << "31";
			break;
		case 12: cout << "31";
			break;

		case 4: cout << "30";
			break;
		case 6: cout << "30";
			break;
		case 9: cout << "30";
			break;
		case 11: cout << "30";
			break;
		
		case 2: if (isLeapYear) cout << "29"; else cout << "28";
	}



	return 0;
}

#pragma region TestCase
// Test case 1
// Input: 2020
// Output: Nam nhuan

// Test case 2
// Input: 2600
// Output: Khong phai nam nhuan

// Test case 3
// Input: 2019
// Output: Khong phai nam nhuan
#pragma endregion

#include <iostream>

using namespace std;

int main()
{
	int year;

	cin >> year;

	if (year % 10 == 0 && (year / 10) % 10 == 0) {
		if (year % 400 == 0) cout << "Nam nhuan" << endl;
			else cout << "Khong phai nam nhuan" << endl;
	}
	else
	{
		if (year % 4 == 0) cout << "Nam nhuan" << endl;
			else cout << "Khong phai nam nhuan" << endl;
	}

	return 0;
}
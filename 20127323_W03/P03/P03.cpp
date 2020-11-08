#pragma region TestCase
// Test case 1
// Input: 9.5 8.5 8 0
// Output:8.6 PASSED

// Test case 2
// Input: 9.5 8.5 8 1
// Output:8.6 FAILED

// Test case 3
// Input: 4 3 4 0
// Output: 3.7 FAILED

// Test case 4
// Input: 4 3 4 1
// Output: 3.7 FAILED
#pragma endregion

#include <iostream>

using namespace std;

int main()
{

	cout.precision(2);

	float assign, lab, finalTest; bool isCheated;
	cin >> assign >> lab >> finalTest >>isCheated; 

	float total = assign * 30 / 100 + lab * 30 / 100 + finalTest * 40 / 100;
	cout << round(total * 10) / 10;

	if (isCheated || total < 5) {
		cout << " FAILED";
	}
	else {
		cout << " PASSED";
	}
}


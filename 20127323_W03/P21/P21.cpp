#pragma region TestCase
// Test case 1
// Input: 3.5
// Output: 3.5

// Test case 2
// Input: 3.234
// Output: 3

// Test case 3
// Input: 3.259
// Output: 3.5

// Test case 4
// Input: 3.758
// Output: 4
#pragma endregion

#include <iostream>

using namespace std;

int main() {
	double x, k; int a;

	cin >> x;

	a = (int)x;
	k = x - a;

	if (k >= 0 && k < 0.25) cout << a;
	else
		if (k >= 0.25 && k < 0.75) cout << a+0.5 << endl;
			else cout << a + 1;
	return 0;
}
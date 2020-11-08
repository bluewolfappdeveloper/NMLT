#pragma region TestCase
// Test case 1
// Input: 5 6 4 8
// Output: 8 4

// Test case 2
// Input: 15 12 10 5
// Output: 15 5

// Test case 3
// Input: -3 -5 -7 4
// Output: 4 -7
#pragma endregion
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	int max = a, min = a;

	if (max < b) max = b;
	if (max < c) max = c;
	if (max < d) max = d;

	if (min > b) min = b;
	if (min > c) min = c;
	if (min > d) min = d;

	cout << max << " " << min;
}

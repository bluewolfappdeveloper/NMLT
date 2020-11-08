#pragma region TestCase
// Test case 1
// Input: 0 0
// Output: Vo so nghiem

// Test case 2
// Input: 0 2
// Output: Vo Nghiem

// Test case 3
// Input: 2 -4
// Output: 2.00

// Test case 4
// Input: 2 1
// Output:-0.50
#pragma endregion

#include <iostream>

using namespace std;

int main()
{
	cout.precision(2);

	double a, b;
	cin >> a >> b;
	if (a == 0) {
		if (b == 0) cout << "Vo so nghiem"; else cout << "Vo nghiem";
	}
	else {
		cout << fixed << "x = " << round((-b / a) * 100) / 100 ;
	}
}

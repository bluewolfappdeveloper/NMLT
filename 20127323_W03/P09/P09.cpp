#pragma region TestCase
// Test case 1
// Input: 2 -7 5
// Output:x1 = 1.00 x2 = 2.50

// Test case 2
// Input: 3 2 5
// Output: Vo nghiem

// Test case 3
// Input: 1 -8 16
// Output: 4

// Test case 4
// Input: 0 0 3
// Output: Vo nghiem

// Test case 5
// Input: 0 0 0
// Output: Vo so nghiem

// Test case 6
// Input: 0 1 -2
// Output: 2
#pragma endregion

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout.precision(2);

	double a, b, c;
	cin >> a >> b >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) cout << "Vo so nghiem"; else cout << "Vo nghiem";
		}
		else  cout << fixed << "x = " << round((-c / b) * 100) / 100;
	}
	else {
		double d = pow(b, 2) - 4 * a*c;
		if (d < 0) cout << "Vo nghiem";
		else {
			if (d == 0) cout << fixed << "x1 = x2 = " << round((-b / (2 * a)) * 100) / 100 << endl;
			else {
				double x1 = (-b - sqrt(d)) / (2 * a);
				double x2 = (-b + sqrt(d)) / (2 * a);
				cout << fixed << "x1 = " << round(x1 * 100) / 100 << " ";
				cout << fixed << "x2 = " << round(x2 * 100) / 100 << endl;
			}
		}

	}

	return 0;

}

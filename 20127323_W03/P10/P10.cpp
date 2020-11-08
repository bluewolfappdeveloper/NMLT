#pragma region TestCase
// Test case 1
// Input: 0 1 2
// Output: Vo Nghiem

// Test case 2
// Input: 0 1 -4
// Output: x1 = 2.00 x2 = -2.00

// Test case 3
// Input: 3 -2 -5
// Output: x1 = 1.29 x2 = -1.29

// Test case 4
// Input: 2 -7 5
// Output: 1 = -1.00 x2 = 1.00 x3 = -1.58 x4 = 1.58

// Test case 5
// Input: 2 5 6
// Output: Vo Nghiem
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
		if ((-c) / b > 0) {
			double x = sqrt((-c) / b);
			cout << fixed << "x1 = " << round(x * 100) / 100 << " ";
			cout << fixed << "x2 = " << round(-x * 100) / 100 << endl;
		}
		else {
			cout << "Vo Nghiem";
		}
	}
	else {
		double d = pow(b, 2) - 4 * a*c;
		if (d < 0) cout << "Vo nghiem";
		else {
			if (d == 0) {
				double x = -b / (2 * a);

				if (x > 0)
				{
					cout << fixed << "x1 = " << round(sqrt(x) * 100) / 100 << " ";
					cout << fixed << "x2 = " << round(-sqrt(x) * 100) / 100 << endl;
				}
				else cout << "Vo nghiem";
			}
			else {
				double x1 = (-b - sqrt(d)) / (2 * a);
				double x2 = (-b + sqrt(d)) / (2 * a);

				if (x1 > 0)
				{
					cout << fixed << "x1 = " << round(sqrt(x1) * 100) / 100 << " ";
					cout << fixed << "x2 = " << round(-sqrt(x1) * 100) / 100 << " ";

					if (x2 > 0) {
						cout << fixed << "x3 = " << round(sqrt(x2) * 100) / 100 << " ";
						cout << fixed << "x4 = " << round(-sqrt(x2) * 100) / 100 << endl;
					}
				}
				else {
					if (x2 > 0) {
						cout << fixed << "x1 = " << round(sqrt(x2) * 100) / 100 << " ";
						cout << fixed << "x2 = " << round(-sqrt(x2) * 100) / 100 << endl;
					}
				}


			}
		}
	}

	return 0;

}

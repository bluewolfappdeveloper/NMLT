#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	cout.precision(2);

	double a, b, c;
	cin >> a >> b >> c;

	double p = (a + b + c) / 2;

	cout << fixed << a + b + c <<endl;
	cout << fixed << sqrt(p*(p - a)*(p - b)*(p - c)) <<endl;

	return 0;
}
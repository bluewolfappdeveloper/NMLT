#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	const double PI = 3.14;
	const double e = 2.71;

	cout.precision(10);

	double x;
	cin >> x ;

	double y1 = 4 * (x*x + 10 * x*sqrt(x) + 3 * x + 1);
	double y2 = (sin(PI*x*x) + sqrt(x*x+1))/(pow(e,2*x) + cos(PI/4*x));

	cout << fixed << y1 << " ";
	cout << fixed << y2 << endl;

	return 0;
}
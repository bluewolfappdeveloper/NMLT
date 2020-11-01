#include <iostream>
#include <math.h>

using namespace std;

int main() {

	cout.precision(2);

	double a, r;
	cin >> a >> r;

	cout << fixed <<0.5*(3.14*r*r) + 3 * ((sqrt(3) / 4) * a * a);
	

	return 0;
}
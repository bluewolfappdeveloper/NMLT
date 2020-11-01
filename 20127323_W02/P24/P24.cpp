#include <iostream>

using namespace std;

int main() {

	cout.precision(2);

	unsigned int quote, percent;
	cin >> percent >> quote ;

	cout << fixed << quote / ((double)percent / 100);


	return 0;
}
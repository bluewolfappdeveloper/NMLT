#include <iostream>

using namespace std;

int main() {
	cout.precision(2);

	double km, h, m, s;
	cin >> km >> h >> m >> s;

	double sumMin = h * 60 + m + s / 60;
	double sumHour = h + m / 60 + s / 3600;
	double pace = sumMin / km;
	double speed = km / sumHour;

	cout << fixed << speed << " " << pace;
	return 0;
}
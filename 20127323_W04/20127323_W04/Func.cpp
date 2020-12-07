#include <iostream>

double giaithua(double n) {
	int tich = 1;
	for (int i = 2; i <= n; i++) tich *= i;
	return tich;
}

double mu(double x, long n) {
	double tich = 1;
	for (int i = 1; i <= n; i++)
		tich *= x;

	return tich;
}
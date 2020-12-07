#include <iostream>
#include <math.h>

using namespace std;

int P43(unsigned long n) {

	int count=0;
	for (long k = n; n != 0; n = n / 10) count++;

	return count;
}

int P47(unsigned long n) {

	int sum = 0;
	for (long k = n; k != 0; k = k / 10) 
		if ((k%10) % 2  == 0) sum += k % 10;

	return sum;
}

int P51(unsigned long n) {

	int max = -1;
	for (long k = n; k != 0; k = k / 10)
		if ((k % 10)  > max) max = k % 10;

	return max;
}

string P55(unsigned long n) {

	bool isOdd = true;
	for (long k = n; k != 0; k = k / 10)
		if ((k % 10) % 2 == 0) {
			isOdd = false;
			break;
		}

	if (isOdd) return "YES"; else return "NO";
}

string P59(unsigned long n) {

	bool isDecreasement = true;  int check = -1;
	for (long k = n; k != 0; k = k / 10)
		if ((k % 10) < check) {
			isDecreasement = false;
			break;
		}
		else check = k % 10;

	if (isDecreasement) return "YES"; else return "NO";
}

double luythua(double x, int t) {
	double tich = 1;
	for (int i = 1; i <= t; i++) tich *= x;
	return tich;
}

double P63(double x, unsigned long n) {

	int max = -1; double sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) sum -= luythua(x, i); else sum += luythua(x, i);
	}

	return sum;
}

double P67(double x, unsigned long n) {

	int max = -1; double sum = 0, t=0; 
	for (int i = 1; i <= n; i++) {
		t += i;
		if (i % 2 == 0) sum += luythua(x, i)/t; else sum -= luythua(x, i)/t;
	}

	return sum;
}

string P71(unsigned long n) {

	double k = log(n) / log(2);
	if (k == (int)k)
		return "YES";
	else return "NO";
}


long P75(int day, int month, int year) {
	long sumDay = 0;
	int d = 1, m = 1, y = 1970;

	while (y != year) {
		if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
			sumDay += 366;
		else sumDay += 365;
		y += 1;
	}

	while (m != month) {
		
		switch (m) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			sumDay += 31;
			break;
		case 4: case 6: case 9: case 11: 
			sumDay += 30;
			break;

		case 2:
			if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
				sumDay += 29;
			else sumDay += 28;
			
			break;
		}
		m += 1;
	}

	return sumDay + day;
}

bool nguyento(int n) {
	if (n < 2) return false;
	for (int i=2; i<=sqrt(n); i++)
		if (n % i == 0) {
			return false;
		}
	return true;
}
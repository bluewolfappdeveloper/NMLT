#include <iostream>
#include <math.h>
#include "Func.h"

using namespace std;

void P3() {
	cout.precision(2);

	long n; double s = 0;

	cout << "P3" << endl;
	cout << "S(n) = 1 + 1/2 + 1/3 + ... + 1/n"<<endl;
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 1; i <= n; i++) {
		s += 1 / (i*1.0);
	}

	cout << fixed << "Ket qua la: " << round(s*100)/100 << endl;
}

void P7() {
	cout.precision(2);

	long n; double s = 0;

	cout << "P7" << endl;
	cout << "S(n) = 1/2 + 2/3 + 3/4 + .... + n/(n + 1)" << endl;
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 1; i <= n; i++) {
		s += i / ((i+1)*1.0);
	}

	cout << fixed << "Ket qua la: " << round(s * 100) / 100 << endl;
}

void P11() {
	long n, tich = 1, s = 0;

	cout << "P11" << endl;
	cout << "S(n) = 1 + 1.2 + 1.2.3 + ... + 1.2.3....n" << endl;
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 1; i <= n; i++) {
		tich *= i;
		s += tich;
	}

	cout << "Ket qua la: " << s << endl;
}

void P15() {
	cout.precision(2);

	long n, tong = 0; double s = 0;

	cout << "P15" << endl;
	cout << "S(n) = 1 + 1/(1 + 2) + 1/(1 + 2 + 3) + ..... + 1/(1 + 2 + 3 + .... + N)" << endl;
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 1; i <= n; i++) {
		tong += i;
		s += 1 / (tong*1.0);
	}

	cout << fixed << "Ket qua la: " << round(s * 100) / 100 << endl;
}

void P19() {
	cout.precision(2);

	long n, tong = 0; double s = 1, x;

	cout << "P19" << endl;
	cout << "S(x,n) = 1 + x + x^3/3! + x^5/5! + … + x^(2n+1)/(2n+1)!" << endl;
	cout << "Moi ban nhap so x: "; cin >> x;
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 1; i <= (2*n+1); i+=2) {
		s += mu(x,i) / giaithua(i);
	}

	cout << fixed << "Ket qua la: " << round(s * 100) / 100 << endl;
}

void P23() {
	long n, count = 0;

	cout << "P23" << endl;
	cout << "So luong uoc cua n" << endl;
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 1; i <= n; i++) {
		if (n%i == 0) count++;
	}

	cout << "So luong uoc cua " << n << ": " << count << endl;
}

void P27() {
	long n, count = 0;

	cout << "P27" << endl;
	cout << "So luong uoc chan cua n" << endl;
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 2; i <= n; i+=2) {
		if (n%i == 0) count++;
	}

	cout << "So luong uoc chan cua " << n << ": " << count << endl;
}

void P31() {
	long n; bool ok = true;

	cout << "P31" << endl;
	cout << "Kiem tra so nguyen to" << endl;
	cout << "Moi ban nhap so n: "; cin >> n;

	if (n < 2) cout << "NO" <<endl;
	else
	{
		for (long i = 2; i < n; i++)
			if (n%i == 0) {
				cout << "NO" << endl;;
				ok = false;
				break;
			}

		if (ok) cout << "YES" << endl;;
	}
}

void P35() {
	cout.precision(2);

	long n; double s = 1;

	cout << "P35" << endl;
	cout << "CanBac2(n + CanBac2(n – 1 + CanBac2( n – 2 + … + CanBac2(2 + CanBac2(1)" << endl;
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 2; i <= n; i++) {
		s =+ i + sqrt(s);
	}

	cout << fixed << "Ket qua la: " << round(sqrt(s) * 100) / 100 << endl;
}

void P39() {
	cout.precision(2);

	long n, tong = 0; double s = 0;

	cout << "P39" << endl;
	cout << "CanBac N + 1(N! + CanBacN((N – 1)! + … + CanBac3(2! + CanBac2(1!)))" << endl;
	
	cout << "Moi ban nhap so n: "; cin >> n;

	for (long i = 1; i <= n; i++) {
		s = pow(s + giaithua(i), 1 / ((i + 1)*1.00));
	}

	//cout << pow(4,1/2) << endl;
	cout << fixed << "Ket qua la: " << round(s * 100) / 100 << endl;
}

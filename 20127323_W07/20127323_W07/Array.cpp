#include <iostream>
#include <algorithm>
#include <iomanip>

#include "Array.h"

using namespace std;

void inMenu() {
	cout << " 1. P02" << endl;
	cout << " 2. P04" << endl;
	cout << " 3. P06" << endl;
	cout << " 4. P12" << endl;
	cout << " 5. P23" << endl;
	cout << " 6. P28" << endl;
	cout << " 7. P09" << endl;
	cout << " 8. P26" << endl;
	cout << " 9. P38" << endl;
	cout << " 10. P01" << endl;
}

void inputArray(int a[maxSize], int& n)
{
	memset(a, 0, sizeof(a));
	cout << "Nhap so n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
}

void outputArray(int a[maxSize], int n)
{
	cout << "Cac phan tu cua mang la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i] <<" ";
	}
	cout << endl;
}

//P02
void averageEvenNumber(int a[maxSize], int n) {
	int sum = 0, d = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			sum += a[i];
			d++;
		}
	}
	cout << "Trung binh cong cac so chan la: " << fixed << setprecision(2) << (d > 0 ? (sum * 1.0 / d) : 0) << endl;
}

//P04
bool isPrimeNumber(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}
void primeNumber(int a[maxSize], int n) {
	bool ok = false;
	for (int i = 0; i < n; i++)
		if (isPrimeNumber(a[i])) {
			if (ok==false) cout << "Cac so nguyen to co trong mang la: ";
			ok = true;
			cout << a[i] << " ";
		}

	if (ok == false) cout << "Khong co so nguyen to" <<endl;

	cout << endl;
}

//P06
bool isIncreasing(int a[maxSize], int n) {
	bool increasing = a[0] < a[1];
	if (increasing) {
		for (int i = 2; i < n; i++) {
			if (a[i-1] > a[i]) return false;
		}
		return true;
	}
	else return false;
}
bool isDecreasing(int a[maxSize], int n) {
	bool decreasing = a[0] > a[1];
	if (decreasing) {
		for (int i = 2; i < n; i++) {
			if (a[i - 1] < a[i]) return false;
		}
		return true;
	}
	else return false;
}
void statusArray(int a[maxSize], int n) {
	if (isIncreasing(a, n)) cout << "Day tang" << endl;
	else
		if (isDecreasing(a, n)) cout << "Day giam" << endl;
		else cout << "Khong tang khong giam" << endl;
	cout << endl;
}

//P12
void sortDesc(int a[maxSize], int n) {
	for (int i = 0; i < n; i++) {
		for (int j=i+1; j<n; j++)
			if (a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	}
}
void secondNumber(int a[maxSize], int n) {
	//sort(a, a + n, greater<int>());
	if (n < 2) cout << "Khong co so lon thu hai"<<endl;
	else {
		sortDesc(a, n);
		outputArray(a, n);
		cout << "Phan tu lon thu nhi trong mang la: " << a[1] << endl;
	}
	
}

//P23
void countPrimeNumber(int a[maxSize], int n) {
	int count = 0;
	for (int i = 0; i < n; i++) 
	  if (isPrimeNumber(a[i])) count++;

	cout << "So luong so nguyen to trong mang la: " << count << endl;
}

//P28
void inputTwoArray(int a[maxSize], int b[maxSize], int &n, int &m)
{
	cout << "Nhap so n,m: ";
	cin >> n >> m;
	cout << "Nhap mang A gom " << n << " phan tu: ";
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Nhap mang B gom " << m << " phan tu: ";
	for (int i = 0; i < m; i++)
	{
		cin >> b[i];
	}
}
void outputTwoArray(int a[maxSize], int b[maxSize], int n, int m)
{
	cout << "Cac phan tu trong mang A la: ";
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<" ";
	}
	cout << "\nCac phan tu trong mang B la: ";
	for (int i = 0; i < m; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
}
void findIndex(int a[maxSize], int b[maxSize], int n, int m) {
	bool isOK = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (b[j] == (0 - a[i])) {
				if (isOK == false) cout << "Cac vi tri thoa man la: ";
				isOK = true;
				cout << "(" << i << "," << j << ")" << " ";
			}
		}
	}
	if (isOK == false) cout << "Khong co cap vi tri thoa man";
	cout << endl;
}

//P09
void countDifferentNumber(int a[maxSize], int n) {
	int count = 0;
	//sort(a, a + n);

	sortDesc(a, n);

	for (int i = 0; i < n-1; i++) {
		if (a[i] != a[i + 1]) count++;
	}
	count++;
	
	cout << "So luong so khac nhau la: " << count << endl;
}

//P26
void numberExist(int a[maxSize], int b[maxSize], int n, int m) {
	bool isOK = false;

	for (int i = 0; i < n ; i++) 
		for (int j = 0; j < m; j++)
			if (a[i] == b[j]) {
				if (isOK == false) cout << "Cac so ton tai trong hai mang la: ";
				isOK = true;
				cout << a[i] << " "; 
			}

	
	if (isOK == false) cout << "Khong co so nao trung";

	cout << endl;
}

//P38
void multiplyTwoMaxNum(int a[maxSize], int n) {

	if (n < 2) {
		cout << "Sai du lieu" << endl;
		return;
	}

	sortDesc(a, n);
	//sort(a, a + n, greater<int>());
	outputArray(a, n);
	cout << "Tich hai so lon nhat la: " << a[0]*a[1] << endl;
}

//P01
void maxEvenMinOdd(int a[maxSize], int n) {
	int maxEven = -9999999, minOdd = 9999999;
	bool hasEven = false; bool hasOdd = false;

	for (int i = 0; i < n; i++)
		if (a[i] % 2 == 0) {
			hasEven = true;
			if (a[i] > maxEven) maxEven = a[i];
		}
		else {
			hasOdd = true;
			if (a[i] < minOdd) minOdd = a[i];
		}

	if (!hasEven || !hasOdd) {
		if (!hasEven) cout << "Khong co so chan"<< endl;
		else cout << "So chan lon nhat la: " << maxEven << endl;
		if (!hasOdd) cout << "Khong co so le" << endl;
		else cout << "So le nho nhat la: " << minOdd << endl;
	}else
	cout <<"So chan lon nhat la: " <<maxEven << "\nSo le nho nhat la: " << minOdd<<endl;
}
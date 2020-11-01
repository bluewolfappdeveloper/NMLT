#include <iostream>
#include <iomanip>  

using namespace std;

int main()
{
	long money;
	cout << "Nhap so tien can doi: ";
	cin >> money;
	const int a[9] = { 500000, 200000, 100000,50000,20000,10000,5000,2000,1000 };

	int count;
	for (int i = 0; i < 9; i++) {
		count = money / a[i];
		cout << setw(7)<< a[i] << " : " << count<<endl;
		money = money - a[i] * count;
	}

	return 0;
}
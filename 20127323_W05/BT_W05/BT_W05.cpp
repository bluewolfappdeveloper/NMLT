#include <iostream>
#include <iomanip>

#include "MyFunction.h"

using namespace std;

int main()
{
    unsigned long n; double x;
    cout << "P43" << endl;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "So luong so cua "<<n<<" la: "<< P43(n) << endl;

    cout << "P47" << endl;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "Tong cac chu so chan cua " << n << " la: " << P47(n) << endl;

    cout << "P51" << endl;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "Chu so lon nhat trong so " << n << " la: " << P51(n) << endl;

    cout << "P55" << endl;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "Cac so "<< n <<" co chua cac so le hay khong: "<< P55(n) << endl;

    cout << "P59" << endl;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "Cac so " << n << " co chua cac so giam dan hay khong: " << P59(n) << endl;

    cout << "P63" << endl;
    cout << "Nhap vao so x: "; cin >> x;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "S(x,n) = x – x^2 + x^3 + … + (-1)x^n+1 * x^n " << " la: " << fixed << setprecision(2) << P63(x,n) << endl;
   
    cout << "P67" << endl;
    cout << "Nhap vao so x: "; cin >> x;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "S(x, n) = -x + x^2/(1 + 2) – x^3/(1 + 2 + 3) + … + (-1)^n * x^n/(1 + 2 +… + n) " << " la: " 
        << fixed << setprecision(2) << P67(x, n) << endl;

    cout << "P71" << endl;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "So " << n << " co phai dang 2^k hay khong: " << P71(n) << endl;

    unsigned long day, month, year;
    cout << "P75" << endl;
    cout << "Nhap vao ngay thang nam: "; cin >> day >> month >> year;
    cout << "So ngay tinh tu 1/1/1970 la: " << P75(day, month, year) << endl;

    cout << "P79" << endl;
    cout << "Nhap vao so n: "; cin >> n;
    cout << "Cac so nguyen to tu 1 den " << n << " la: ";
    for (int i = 1; i <= n; i++)
        if (nguyento(i)) cout << i << " ";
}

// 20127323
// Vo Nhat Tan
// CLC08
/*
P43
// Test case 1
// Input: 456
// Output: 3

// Test case 2
// Input: 1234523
// Output: 7

// Test case 3
// Input: 26783
// Output: 5

P47
// Test case 1
// Input: 456
// Output: 10

// Test case 2
// Input: 223
// Output: 4

// Test case 3
// Input: 123456789
// Output: 20

P51
// Test case 1
// Input: 623
// Output: 6

// Test case 2
// Input: 359867
// Output: 9

// Test case 3
// Input: 123564
// Output: 6

P55
// Test case 1
// Input: 953
// Output: YES

// Test case 2
// Input: 6543
// Output: NO

// Test case 3
// Input: 13597
// Output: YES

P59
// Test case 1
// Input: 1234
// Output: NO

// Test case 2
// Input: 9653
// Output: YES

// Test case 3
// Input: 95643
// Output: NO

P63
// Test case 1
// Input: 3 4
// Output: -60.00

// Test case 2
// Input: 2 4
// Output: -10.00

// Test case 3
// Input: 5 5
// Output: 2605

P67
// Test case 1
// Input: 3 3
// Output: -4.50

// Test case 2
// Input: 2 4
// Output: -0.4

// Test case 3
// Input: 5 5
// Output: -163.33

P71
// Test case 1
// Input: 4
// Output: YES

// Test case 2
// Input: 32
// Output: YES

// Test case 3
// Input: 62
// Output: NO

P75
// Test case 1
// Input: 10 2 1970
// Output: 41

// Test case 2
// Input: 10 9 1970
// Output: 253

// Test case 3
// Input: 10 9 1971
// Output: 618

P79
// Test case 1
// Input: 10
// Output: 2 3 5 7

// Test case 2
// Input: 20
// Output: 2 3 5 7 11 13 17 19

// Test case 3
// Input: 30
// Output: 2 3 5 7 11 13 17 19 23 29
*/


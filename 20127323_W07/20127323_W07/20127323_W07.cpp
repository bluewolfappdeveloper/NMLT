#include <iostream>
#include <iomanip>  
#include <algorithm>    

#include "Array.h"

using namespace std;

int main()
{
	int k = -1; int a[maxSize], b[maxSize], n, m;
	while (true) {
		system("cls");
		inMenu();
		cout << "Moi ban nhap lua chon: ";
		cin >> k;

		//k = 10;
		switch (k)
		{
		case 0:
			return 0;
		case 1:
			cout << "P02" << endl;

			inputArray(a, n);
			outputArray(a, n);

			averageEvenNumber(a, n);

			system("pause");
			break;
		case 2:
			cout << "P04" << endl;

			inputArray(a, n);
			outputArray(a, n);

			primeNumber(a, n);

			system("pause");
			break;

		case 3:
			cout << "P06" << endl;

			inputArray(a, n);
			outputArray(a, n);

			statusArray(a, n);

			system("pause");
			break;

		case 4:
			cout << "P12" << endl;

			inputArray(a, n);
			outputArray(a, n);

			secondNumber(a, n);

			system("pause");
			break;

		case 5:
			cout << "P23" << endl;

			inputArray(a, n);
			outputArray(a, n);

			countPrimeNumber(a, n);

			system("pause");
			break;

		case 6:
			cout << "P28" << endl;

			inputTwoArray(a,b,n,m);
			outputTwoArray(a, b, n, m);

			findIndex(a, b, n, m);

			system("pause");
			break;

		case 7:
			cout << "P09" << endl;

			inputArray(a, n);
			outputArray(a, n);

			countDifferentNumber(a, n);

			system("pause");
			break;

		case 8:
			cout << "P26" << endl;

			inputTwoArray(a, b, n, m);
			outputTwoArray(a, b, n, m);

			numberExist(a, b, n, m);

			system("pause");
			break;

		case 9:
			cout << "P38" << endl;

			inputArray(a, n);
			outputArray(a, n);
			
			multiplyTwoMaxNum(a, n);

			system("pause");
			break;
		case 10:
			cout << "P01" << endl;

			inputArray(a, n);
			outputArray(a, n);

			maxEvenMinOdd(a, n);
			
			system("pause");
			break;
		}
 	}
	return 0;
}

//Vo Nhat Tan - MSSV: 20127323

//P02
//Test Case 1:
//Input: 3
//		 3 4 6 
//Output: 5.00

//Test Case 2:
//Input: 5
//		 2 4 5 8 1 
//Output: 4.67

//Test Case 3:
//Input: 3
//		 3 5 1 
//Output: 0.00

//P04
//Test Case 1:
//Input: 10
//		 1 2 3 4 5 6 7 8 9 10
//Output: 2 3 5 7

//Test Case 2:
//Input: 5
//		 2 4 5 8 1 
//Output: 2 5

//Test Case 3:
//Input: 3
//		 4 6 8
//Output: Khong co so nguyen to

//P06
//Test Case 1:
//Input: 4
//		 100 213 360 452
//Output: Day Tang

//Test Case 2:
//Input: 5
//		 89 56 23 10 0 
//Output: Day Giam

//Test Case 3:
//Input: 6
//		 4 6 8 2 1 3
//Output: Day khong tang khong giam

//P12
//Test Case 1:
//Input: 5
//		 100 28 25 88 94
//Output: 94

//Test Case 2:
//Input: 6
//		 89 44 99 18 30 58 
//Output: 89

//Test Case 3:
//Input: 2
//		 89 37
//Output: 37

//Test Case 4:
//Input: 1
//		 89
//Output: Khong co so lon thu hai

//P23
//Test Case 1:
//Input: 5
//		 94 16 45 93 35
//Output: 0

//Test Case 2:
//Input: 2
//		 17 2
//Output: 2

//Test Case 3:
//Input: 5
//       41 14 59 63 25		 
//Output: 2

//P28
//Test Case 1:
//Input: 6 4
//		 -91 86 39 64 -78 -26
//		 91 -36 39 26
//Output: (0,0) (5,3)

//Test Case 2:
//Input: 2 4
//		 -26 -44
//		 10 26 30 44
//Output: (0,1) (1,3)

//Test Case 3:
//Input: 4 5
//		 70 44 56 -62
//		 -35 -38 50 -12 -89 
//Output: Khong co cap vi tri thoa man

//P09
//Test Case 1:
//Input: 8
//		 1 4 4 1 4 3 3 5
//Output: 4

//Test Case 2:
//Input: 13
//		 12 14 13 19 13 12 20 11 9 17 13 10 13
//Output: 9

//Test Case 3:
//Input: 3
//       5 5 5		 
//Output: 1

//P26
//Test Case 1:
//Input: 4 9
//		 15 3 19 0
//		 10 15 8 7 14 8 20 4 0
//Output: 15 0

//Test Case 2:
//Input: 10 4
//		 22 22 21 25 24 21 24 25 21 25
//		 22 23 23 25
//Output: 22 22 25 25 25

//Test Case 3:
//Input: 3 5
//		 10 30 20
//		 17 1 3 5 7
//Output: Khong co cap vi tri thoa man

//P38
//Test Case 1:
//Input: 8
//		 10 71 50 82 19 40 99 100
//Output: 9900

//Test Case 2:
//Input: 9
//		 40 56 52 35 77 20 54 73 16
//Output: 5621

//Test Case 3:
//Input: 2
//		 20 17
//Output: 340

//Test Case 4:
//Input: 1
//		 89
//Output: Sai du lieu

//P01
//Test Case 1:
//Input: 4
//		 16 12 41 65
//Output: 16 41

//Test Case 2:
//Input: 10
//		 49 99 22 4 42 68 62 82 30 61
//Output: 82 49

//Test Case 3:
//Input: 2
//		 20 30
//Output: 30 Khong co so le

//Test Case 4:
//Input: 2
//		 21 31
//Output: Khong co so chan 31

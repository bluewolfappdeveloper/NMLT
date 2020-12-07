#ifndef ARRAY_H_
#define ARRAY_H_

#define maxSize 300

void inMenu();

//Nhap xuat Mang
void inputArray(int a[maxSize], int& n);
void inputTwoArray(int a[maxSize], int b[maxSize], int& n, int& m);
void outputArray(int a[maxSize], int n);
void outputTwoArray(int a[maxSize], int b[maxSize], int n, int m);

//P02
void averageEvenNumber(int a[maxSize], int n);

//P04
void primeNumber(int a[maxSize], int n);

//P06
void statusArray(int a[maxSize], int n);

//P12
void secondNumber(int a[maxSize], int n);

//P23
void countPrimeNumber(int a[maxSize], int n);

//P28
void findIndex(int a[maxSize], int b[maxSize], int n, int m);

//P09
void countDifferentNumber(int a[maxSize], int n);

//P26
void numberExist(int a[maxSize], int b[maxSize], int n, int m);

//P38
void multiplyTwoMaxNum(int a[maxSize], int n);

//P01
void maxEvenMinOdd(int a[maxSize], int n);
#endif // !ARRAY_H_

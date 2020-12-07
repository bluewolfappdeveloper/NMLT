#include <iostream>

#include "function.h"

using namespace std;

int main()
{
    int day1, month1, year1, day2, month2, year2;
    cout << "Moi nhap ngay thang nam: ";
    cin >> day1 >> month1 >> year1;

    tomorrow(day1, month1, year1, day2, month2, year2);
    cout << "Ngay sau: ";
    cout << day2 <<" "<< month2 << " " << year2;
}
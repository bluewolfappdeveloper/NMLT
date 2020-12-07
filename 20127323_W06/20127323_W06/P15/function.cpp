#include <iostream>

using namespace std;

void tomorrow(int day1, int month1, int year1, int& day2, int& month2, int& year2) {
	
	int dayInMon2 = 28;
	
	switch (month1)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: 
		if (day1 >= 1 && day1<31) { day2 = day1 + 1; month2 = month1; year2 = year1; }
		else
			if (day1 == 31){ day2 = 1; month2 = month1+1; year2 = year1; }
		
		break;
	case 4: case 6: case 9: case 11:
		if (day1 >= 1 && day1 < 30) { day2 = day1 + 1; month2 = month1; year2 = year1; }
		else
			if (day1 == 30) { day2 = 1; month2 = month1 + 1; year2 = year1; }
		break;
	case 2:
		if (year1 % 400 == 0 || (year1 % 4 == 0 && year1 % 100 != 0)) dayInMon2 = 29;
		if (day1 >= 1 && day1 < dayInMon2) { day2 = day1 + 1; month2 = month1; year2 = year1; }
		else
			if (day1 == dayInMon2) { day2 = 1; month2 = month1 + 1; year2 = year1; }
		break;
	case 12:
		if (day1 >= 1 && day1 < 31) { day2 = day1 + 1; month2 = month1; year2 = year1; }
		else
			if (day1 == 31) { day2 = 1; month2 = 1; year2 = year1 + 1; }
		break;
	}
}
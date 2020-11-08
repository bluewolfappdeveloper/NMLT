#pragma region TestCase
// Test case 1
// Input: 150000 2 3
// Output: 159135

// Test case 2
// Input: 200000 6 5
// Output: 268019

// Test case 3
// Input: 450000 5 3
// Output: 521673

// Test case 4
// Input: 3500000 6 5
// Output: 4690335

#pragma endregion
#include <iostream>

using namespace std;

int main()
{
	long long balance, month; double rate;

	cin >> balance >> month >> rate;

	cout.precision(0);
	cout<< fixed << round(balance * pow((1 + (rate/100)), month));
}
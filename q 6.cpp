#include <iostream>
using namespace std;

int main()
{
	int num1, num2;
	cout << "Enter two  numbers (between 2 and 9): ";
	cin >> num1 >> num2;
	if (num1 < 2 || num1 > 9 || num2 < 2 || num2 > 9)
	{
		cout << "invalid input" << endl;
		return 1;
	}
	cout << "Multiples of " << num1 << " or " << num2 << ": ";
	for (int i = 1; ; i++)
	{
		bool isMultipleOfNum1 = (i % num1 == 0);
		bool isMultipleOfNum2 = (i % num2 == 0);
		if (isMultipleOfNum1 || isMultipleOfNum2)
		{
			cout << i << " ";
		}
		if (isMultipleOfNum1 && isMultipleOfNum2)
		{
			break;
		}
	}
	cout << endl;
	return 0;
}

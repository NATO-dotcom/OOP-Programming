#include <iostream>
using namespace std;
int main()
{
	double num;
	string choice;
	do
	{
		cout << "enter the number:";
		cin >> num;
		double square = num * num;
		double cube = num * num * num;
		cout << "the square is: " << square << endl;
		cout << "the cube is: " << cube << endl;
		cout << "do you want to enter another number: (y/n)";
		cin >> choice;
	}
	while(choice == "y"|| choice == "Y");
	cout << "Exiting...Goodbye" << endl;
	return 0;
}

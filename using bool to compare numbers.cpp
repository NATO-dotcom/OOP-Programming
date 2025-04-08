#include <iostream>
using namespace std;

// Recursive function to compare two numbers
bool isLarger(int a, int b) {
    if (a == b) {
        return false; // If the numbers are equal, neither is larger
    }
    else if (a > b) {
        return true; // Return true if 'a' is larger
    }
    else
	{
	 return false;	// Return false if 'b' is larger
	}
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (isLarger(num1, num2)) {
        cout << num1 << " is larger than " << num2 << "." << endl;
    } else if (isLarger(num2, num1)) {
        cout << num2 << " is larger than " << num1 << "." << endl;
    } else {
        cout << "Both numbers are equal." << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Input numbers between 2 and 9
    cout << "Enter two numbers between 2 and 9: ";
    cin >> num1 >> num2;

    // Validate input
    if (num1 < 2 || num1 > 9 || num2 < 2 || num2 > 9) {
        cout << "Invalid input. Numbers must be between 2 and 9." << endl;
        return 1;
    }

    // Display multiples
    cout << "Multiples of " << num1 << " and " << num2 << " between 1 and 100 (skipping common multiples):" << endl;
    for (int i = 1; i <= 100; i++) {
        bool isMultipleOfNum1 = (i % num1 == 0);
        bool isMultipleOfNum2 = (i % num2 == 0);

        if (isMultipleOfNum1 && isMultipleOfNum2) {
            continue; // Skip common multiples
        }
        if (isMultipleOfNum1 || isMultipleOfNum2) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

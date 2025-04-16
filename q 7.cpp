#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Prompt user for input
    cout << "Enter two integer numbers (between 2 and 9): ";
    cin >> num1 >> num2;

    // Validate input
    if (num1 < 2 || num1 > 9 || num2 < 2 || num2 > 9) {
        cout << "Please enter numbers between 2 and 9." << endl;
        return 1; // Exit if invalid input
    }

    cout << "Multiples of " << num1 << " or " << num2 
         << " (skipping multiples of both): ";

    // Iterate through numbers from 1 to 100
    for (int i = 1; i <= 100; i++) {
        bool isMultipleOfNum1 = (i % num1 == 0);
        bool isMultipleOfNum2 = (i % num2 == 0);

        // Print if it's a multiple of either, but not both
        if ((isMultipleOfNum1 || isMultipleOfNum2) && !(isMultipleOfNum1 && isMultipleOfNum2)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

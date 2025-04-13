#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers (between 2 and 9): ";
    cin >> num1 >> num2;
    if (num1 < 2 || num1 > 9 || num2 < 2 || num2 > 9) {
        cout << "Invalid input" << endl;
        return 1;
    }
    cout << "Multiples of " << num1 << " or " << num2 << ": ";
    for (int i = 1; ; i++) {
        if (i % num1 == 0 || i % num2 == 0) { 
            cout << i << " ";
        }
        if (i % num1 == 0 && i % num2 == 0) { 
            break;
        }
    }
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

// Recursive function to check if the number is even
bool isEven(int num) {
    if (num == 0) {
        return true; // Base case: 0 is even
    } else if (num == 1) {
        return false; // Base case: 1 is odd
    } else {
        return isEven(num - 2); // Recursive call
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }

    return 0;
}
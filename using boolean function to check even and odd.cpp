#include <iostream>
using namespace std;

// Function to check if a number is even
bool isEven(int num) {
    return num % 2 == 0;  // Returns true if the number is even
}

// Function to check if a number is odd
bool isOdd(int num) {
    return num % 2 != 0;  // Returns true if the number is odd
}

int main() {
    int num;
    
    // Ask user for input
    cout << "Enter a number: ";
    cin >> num;
    
    // Check if the number is even or odd and display the result
    if (isEven(num)) {
        cout << num << " is even." << endl;
    } else if (isOdd(num)) {
        cout << num << " is odd." << endl;
    }

    return 0;
}

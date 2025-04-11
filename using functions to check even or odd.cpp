#include <iostream>
using namespace std;

// Function to check if a number is even
void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        cout << num << " is even." << endl;
    } else {
        cout << num << " is odd." << endl;
    }
}

int main() {
    int num;
    
    // Ask user for input
    cout << "Enter a number: ";
    cin >> num;
    
    // Call the function to check even or odd
    checkEvenOdd(num);

    return 0;
}

#include <iostream>
using namespace std;

// Function that takes an integer (0-5) and prints its word equivalent
void numberToWords(int num) {
    switch(num) {
        case 0: cout << "Zero"; break;
        case 1: cout << "One"; break;
        case 2: cout << "Two"; break;
        case 3: cout << "Three"; break;
        case 4: cout << "Four"; break;
        case 5: cout << "Five"; break;
        default: cout << "Number is too big!";
    }
}

int main() {
    int input;

    cout << "Enter a number between 0 and 5: ";
    cin >> input;

    numberToWords(input);

    return 0;
}

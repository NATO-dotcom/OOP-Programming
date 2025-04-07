#include <iostream>
using namespace std;

int main() {
    double number;      // Variable to store the user's input
    char choice;        // Variable to store user's choice to continue or not

    do {
        // Asking for the input number
        cout << "Enter a number: ";
        cin >> number;

        // Calculating square and cube
        double square = number * number;
        double cube = number * number * number;

        // Displaying the results
        cout << "The square of " << number << " is: " << square << endl;
        cout << "The cube of " << number << " is: " << cube << endl;

        // Asking the user if they want to repeat the process
        cout << "Do you want to enter another number? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');  // Repeat if user enters 'y' or 'Y'

    cout << "Goodbye!" << endl;

    return 0;
}

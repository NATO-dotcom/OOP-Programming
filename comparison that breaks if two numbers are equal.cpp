#include <iostream>
using namespace std;

int main() {
    int a, b;

    while (true) {  // Infinite loop, exits when numbers are equal
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (a == b) {
            cout << "Numbers are equal. Exiting..." << endl;
            break;  // Exit the loop
        } 
        else if (a > b) {
            cout << "The larger number is: " << a << endl;
        } 
        else {
            cout << "The larger number is: " << b << endl;
        }
    }
    return 0;
}

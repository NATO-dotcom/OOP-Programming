#include <iostream>
using namespace std;

// Function to display a 2D array
void displayArray(int arr[10][4]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int myArray[10][4];

    // Asking the user to input values
    cout << "Enter values for a 10x4 array (10 rows, 4 columns):\n";
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> myArray[i][j];
        }
    }

    // Display the array
    cout << "\nYou entered:\n";
    displayArray(myArray);

    return 0;
}

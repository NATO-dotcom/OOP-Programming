#include <iostream>
using namespace std;
void readProduction(double production[5][7]);
void computeDailyAverage(double production[5][7]);

int main() {
    double production[5][7]; // 5 cows, 7 days

    // Read weekly production data
    readProduction(production);

    // Compute and display daily averages
    computeDailyAverage(production);

    return 0;
}

// Function to read the milk production input for each cow
void readProduction(double production[5][7]) {
    cout << "Enter the weekly milk production for each of the 5 cows (7 days per cow):\n";
    for (int i = 0; i < 5; i++) {
        cout << "Cow " << i + 1 << ":\n";
        for (int j = 0; j < 7; j++) {
            cout << "  Day " << j + 1 << ": ";
            cin >> production[i][j];
        }
    }
}

// Function to compute the average daily production per cow
void computeDailyAverage(double production[5][7]) {
    cout << "\nAverage daily milk production per cow:\n";
    for (int i = 0; i < 5; i++) {
        double total = 0.0;

        // Calculate total production for the week for cow i
        for (int j = 0; j < 7; j++) {
            total += production[i][j];
        }

        // Compute and display average
        double average = total / 7.0;
        cout << "Cow " << i + 1 << ": " << average << " liters/day\n";
    }
}

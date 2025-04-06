#include <iostream>
using namespace std;

class Car {
private:
    string brand;  // Private data member for brand
    int speed;     // Private data member for speed

public:
    // Constructor to initialize private data members
    Car(string b, int s) : brand(b), speed(s) {
        // The constructor is used to set the private data members
    }

    // Method to display car information (accessing private members within the class)
    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h" << endl;
    }
};

int main() {
    // Creating an object of class Car, constructor is called automatically
    Car myCar("Toyota", 120);

    // Accessing private data through a public method (display)
    myCar.display();  // Output: Brand: Toyota, Speed: 120 km/h

    return 0;
}

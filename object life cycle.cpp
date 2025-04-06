#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int speed;

public:
    // Constructor to initialize object
    Car(string b, int s) : brand(b), speed(s) {
        cout << "Object Created: " << brand << " with speed " << speed << " km/h." << endl;
    }

    // Method to display object data
    void display() {
        cout << "Brand: " << brand << ", Speed: " << speed << endl;
    }

    // Destructor to cleanup
    ~Car() {
        cout << "Object Destroyed: " << brand << endl;
    }
};

int main() {
    {
        // Object Creation (Instantiation)
        Car myCar("Toyota", 120);  // Constructor is called here
        
        // Object Usage (During its life)
        myCar.display();  // Display the car's details
        
        // The car object is destroyed when it goes out of scope (end of the block)
    }  // Destructor is automatically called here

    return 0;
}

#include <iostream>
using namespace std;

// This is a class (blueprint)
class Car {
public:
    string brand;
    int year;

    void start() {
        cout << brand << " is starting..." << endl;
    }
};

int main() {
    // These are objects (real cars)
    Car car1;
    Car car2;

    // Setting values for car1
    car1.brand = "Toyota";
    car1.year = 2020;

    // Setting values for car2
    car2.brand = "Honda";
    car2.year = 2022;

    // Using the objects
    car1.start();
    cout << car1.brand  <<" developed in :"<<car1.year << endl;
    car2.start();
    cout <<  car2.brand  <<" developed in :"<<car2.year << endl;

    return 0;
}

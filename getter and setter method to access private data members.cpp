#include <iostream>
using namespace std;

class Car
{
private:
	string brand;
	int speed;

public:
	// Constructor to initialize object
	Car(string b, int s) : brand(b), speed(s)
	{
		cout << "Object Created: " << brand << " with speed " << speed << " km/h." << endl;
	}

	// Getter method for 'brand'
	string getBrand()
	{
		return brand;
	}

	// Setter method for 'brand'
	void setBrand(string b)
	{
		brand = b;
	}

	// Getter method for 'speed'
	int getSpeed()
	{
		return speed;
	}

	// Setter method for 'speed'
	void setSpeed(int s)
	{
		speed = s;
	}

	// Destructor to clean up
	~Car()
	{
		cout << "Object Destroyed: " << brand << endl;
	}
};

int main()
{
	{
		// Object Creation (Instantiation)
		Car myCar("Toyota", 120);  // Constructor is called here

		// Accessing private members using getter methods
		cout << "Getting car details using getter functions:" << endl;
		cout << "Brand: " << myCar.getBrand() << endl;  // Using getter for brand
		cout << "Speed: " << myCar.getSpeed() << " km/h" << endl;  // Using getter for speed

		// Modifying private members using setter methods
		cout << "\nUpdating car details using setter functions..." << endl;
		myCar.setBrand("Honda");  // Changing the brand
		myCar.setSpeed(150);  // Changing the speed

		// Accessing updated private members using getter methods
		cout << "\nAfter update:" << endl;
		cout << "Brand: " << myCar.getBrand() << endl;  // Using getter for updated brand
		cout << "Speed: " << myCar.getSpeed() << " km/h" << endl;  // Using getter for updated speed

		// The car object is destroyed when it goes out of scope (end of the block)
	}  // Destructor is automatically called here

	return 0;
}

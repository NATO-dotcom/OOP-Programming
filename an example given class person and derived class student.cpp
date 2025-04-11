#include <iostream>
using namespace std;

// Base class: Person
class Person {
protected:
    char name[50];
    char gender[20];
    char county[50];
    char phoneNumber[15];

public:
    // Behavior: Get data for Person
    void getData() {
        cout << "Enter name: ";
        cin.getline(name, 50);  // Read a line of text into the name array
        cout << "Enter gender: ";
        cin.getline(gender, 20);  // Read a line of text into the gender array
        cout << "Enter county: ";
        cin.getline(county, 50);  // Read a line of text into the county array
        cout << "Enter phone number: ";
        cin.getline(phoneNumber, 15);  // Read a line of text into the phone number array
    }

    // Behavior: Display data for Person
    void displayData() {
        cout << "\n--- Person Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Gender: " << gender << endl;
        cout << "County: " << county << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

// Derived class: Student inherits from Person
class Student : public Person {
private:
    char studentID[20];
    char grade;

public:
    // Behavior: Get data for Student
    void getStudentData() {
        getData();  // Calling base class method to get Person data
        cout << "Enter student ID: ";
        cin.getline(studentID, 20);  // Read a line of text into the student ID array
        cout << "Enter grade: ";
        cin >> grade;
    }

    // Behavior: Display data for Student
    void displayStudentData() {
        displayData();  // Calling base class method to display Person data
        cout << "Student ID: " << studentID << endl;
        cout << "Grade: " << grade << endl;
    }
};

// Main function to create and use objects
int main() {
    // Creating an object for the Person class
    Person person1;
    person1.getData();    // Get data for the person
    person1.displayData(); // Display the person's data

    // Creating an object for the Student class (which is a Person as well)
    Student student1;
    student1.getStudentData(); // Get data for the student
    student1.displayStudentData(); // Display the student's data

    return 0;
}

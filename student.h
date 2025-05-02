#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int rollNumber;
    float marks;

    // Function to take input
    void getData() {
        cout << "Enter student name: ";
        getline(cin, name);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore(); // To clear newline character after marks input
    }

    // Function to display data
    void displayData() {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};
//#include <iostream>
//using namespace std;
//
//class Employee {
//private:
//    int id;
//    string name;
//    float salary;
//
//public:
//    // Default constructor
//    Employee() {
//        id = 0;
//        name = "Not Assigned";
//        salary = 0.0;
//    }
//
//    // Method to display employee details
//    void displayDetails() {
//        cout << "\n--- Employee Details ---" << endl;
//        cout << "ID: " << id << endl;
//        cout << "Name: " << name << endl;
//        cout << "Salary: $" << salary << endl;
//    }
//};
//
//int main() {
//
//    Employee emp;
//
//    // Display details
//    emp.displayDetails();
//
//    return 0;
//}

// Program 2
//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    string accountNumber;
//    string accountHolder;
//    double balance;
//
//public:
//    // Parameterized constructor
//    BankAccount(string accNum, string holder, double bal) {
//        accountNumber = accNum;
//        accountHolder = holder;
//        balance = bal;
//    }
//
//    // Method to display account details
//    void showAccountDetails() {
//        cout << "\n--- Bank Account Details ---" << endl;
//        cout << "Account Number: " << accountNumber << endl;
//        cout << "Account Holder: " << accountHolder << endl;
//        cout << "Balance: $" << balance << endl;
//    }
//};
//
//int main() {
//    // User-defined values
//    string accNum = "PK0309800780100";
//    string holder = "Muneeba";
//    double bal = 10000;
//
//    // Create object using parameterized constructor
//    BankAccount myAccount(accNum, holder, bal);
//
//    // Display account details
//    myAccount.showAccountDetails();
//
//    return 0;
//}
//

// program 3
#include <iostream>
using namespace std;

class Rectangle {
private:
    float length;
    float width;

public:
    // Default constructor
    Rectangle() {
        length = 1.0;
        width = 1.0;
    }

    // Two-parameter constructor
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    // Single-parameter constructor (for square)
    Rectangle(float side) {
        length = side;
        width = side;
    }

    // Method to calculate area
    float area() {
        return length * width;
    }

    // Method to display details
    void display() {
        cout << "Length: " << length << ", Width: " << width 
             << ", Area: " << area() << endl;
    }
};

int main() {
    // Object using default constructor
    Rectangle rect1;
    cout << "Rectangle 1 (Default Constructor):" << endl;
    rect1.display();

    // Object using two-parameter constructor
    Rectangle rect2(4.5, 2.0);
    cout << "\nRectangle 2 (Two-Parameter Constructor):" << endl;
    rect2.display();

    // Object using single-parameter constructor (square)
    Rectangle rect3(3.5);
    cout << "\nRectangle 3 (Single-Parameter Constructor - Square):" << endl;
    rect3.display();

    return 0;
}



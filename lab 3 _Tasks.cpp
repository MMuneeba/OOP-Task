//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    float* balance;
//
//public:
//
//    BankAccount(float initialBalance) {
//        balance = new float;
//        *balance = initialBalance;
//        cout << "Constructor: Balance initialized to " << *balance << endl;
//    }
//
//    // Display balance
//    void showBalance() {
//        cout << "Balance: " << *balance << endl;
//    }
//
//    // Modify balance
//    void setBalance(float newBalance) {
//        *balance = newBalance;
//    }
//
//    // Destructor
//    ~BankAccount() {
//        cout << "Destructor: Deleting balance memory: " << *balance << endl;
//        delete balance;
//    }
//};
//
//int main() {
//    BankAccount acc1(5000);
//    cout << "\nOriginal Account (acc1): ";
//    acc1.showBalance();
//
//    BankAccount acc2 = acc1;
//    cout << "\nCopied Account (acc2): ";
//    acc2.showBalance();
//
//    // Modify acc2
//    acc2.setBalance(10000);
//    cout << "\nAfter modifying acc2:" << endl;
//    cout << "acc1: ";
//    acc1.showBalance();
//    cout << "acc2: ";
//    acc2.showBalance();
//
//    
//
//    return 0;
//}
// program 2
//#include <iostream>
//using namespace std;
//
//class BankAccount {
//private:
//    float* balance;
//
//public:
//    // Constructor
//    BankAccount(float initialBalance) {
//        balance = new float;
//        *balance = initialBalance;
//        cout << "Constructor: Balance initialized to " << *balance << endl;
//    }
//
//    // Deep Copy Constructor
//    BankAccount(const BankAccount& other) {
//        balance = new float;
//        *balance = *(other.balance);
//        cout << "Copy Constructor (Deep Copy): New balance allocated with value " << *balance << endl;
//    }
//
//    // Method to display balance
//    void showBalance() {
//        cout << "Balance: " << *balance << endl;
//    }
//
//    // Method to set balance
//    void setBalance(float newBalance) {
//        *balance = newBalance;
//    }
//
//    // Destructor
//    ~BankAccount() {
//        cout << "Destructor: Deleting balance memory with value " << *balance << endl;
//        delete balance;
//    }
//};
//
//int main() {
//    BankAccount acc1(5000); 
//    cout << "\nOriginal Account (acc1): ";
//    acc1.showBalance();
//
//    // Deep copy
//    BankAccount acc2 = acc1;
//    cout << "\nCopied Account (acc2): ";
//    acc2.showBalance();
//
//    acc2.setBalance(10000);
//    cout << "\nAfter modifying acc2:" << endl;
//    cout << "acc1: ";
//    acc1.showBalance(); 
//    cout << "acc2: ";
//    acc2.showBalance(); 
//
//    return 0;
//}
//Program 3
//#include <iostream>
//using namespace std;
//
//// Base class
//class Person {
//protected:
//    string name;
//    int age;
//
//public:
//    
//    void setPerson(string n, int a) {
//        name = n;
//        age = a;
//    }
//
//    // Method to display name and age
//    void showPerson() {
//        cout << "Name: " << name << ", Age: " << age << endl;
//    }
//};
//
//// Derived class
//class Student : public Person {
//private:
//    int rollNo;
//
//public:
//    
//    void setStudent(string n, int a, int r) {
//        setPerson(n, a);  
//        rollNo = r;
//    }
//
//    // Method to display student details
//    void showStudent() {
//        showPerson();  
//        cout << "Roll Number: " << rollNo << endl;
//    }
//};
//
//int main() {
//    Student s1;
//
//    // Set and display student information
//    s1.setStudent("Muneeba", 19, 6);
//
//    cout << "--- Student Details ---" << endl;
//    s1.showStudent();
//
//    return 0;
//}
// program 4
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    Shape() {
        cout << "Shape constructor called." << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    Rectangle() {
        cout << "Rectangle constructor called." << endl;
    }
};

int main() {
    cout << "Creating Rectangle object..." << endl;
    Rectangle rect;

    return 0;
}

#include <iostream>
#include"Calculator.h"
using namespace std;
int main() {
    Calculator calc;
    int choice;

    // Get input
    cout << "Enter first number: ";
    cin >> calc.num1;

    cout << "Enter second number: ";
    cin >> calc.num2;

    // Show menu
    cout << "\nChoose operation:\n";
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice (1-4): ";
    cin >> choice;

    // Perform operation
    switch (choice) {
        case 1:
            cout << "Result: " << add(calc) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(calc) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(calc) << endl;
            break;
        case 4:
            cout << "Result: " << divide(calc) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

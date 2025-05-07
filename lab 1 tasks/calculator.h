#include<iostream>
using namespace std;
class Calculator {
public:
    float num1;
    float num2;
};

// Function definitions outside the class

float add(Calculator c) {
    return c.num1 + c.num2;
}

float subtract(Calculator c) {
    return c.num1 - c.num2;
}

float multiply(Calculator c) {
    return c.num1 * c.num2;
}

float divide(Calculator c) {
    if (c.num2 != 0)
        return c.num1 / c.num2;
    else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

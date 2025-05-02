#include <iostream>
#include"Temperature.h"
using namespace std;

int main() {
    Temperature temp;

    // Input from user
    cout << "Enter temperature in Celsius: ";
    cin >> temp.celsius;

    // Display result
    temp.displayFahrenheit();

    return 0;
}

#include<iostream>
using namespace std;
class Temperature {
public:
    float celsius;

    // Function to convert Celsius to Fahrenheit
    float toFahrenheit() {
        return (celsius * 9.0 / 5.0) + 32;
    }

    // Function to display the converted value
    void displayFahrenheit() {
        float fahrenheit = toFahrenheit();
        cout << "Temperature in Fahrenheit: " << fahrenheit << "°F" << endl;
    }
};

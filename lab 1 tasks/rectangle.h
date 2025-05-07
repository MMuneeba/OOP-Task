#include<iostream>
using namespace std;
class Rectangle {
public:
    int length;
    int width;

    // Function declarations
    void setDimensions();
    int area();
    int perimeter();
};

// Function to set dimensions (defined outside the class)
void Rectangle::setDimensions() {
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter width: ";
    cin >> width;
}

// Function to calculate area
int Rectangle::area() {
    return length * width;
}

// Function to calculate perimeter
int Rectangle::perimeter() {
    return 2 * (length + width);
}

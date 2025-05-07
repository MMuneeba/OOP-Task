#include <iostream>
#include"Rectangle.h"
using namespace std;


int main() {
    Rectangle rect;

    // Get input
    rect.setDimensions();

    // Display results
    cout << "\n--- Rectangle Properties ---" << endl;
    cout << "Area: " << rect.area() << endl;
    cout << "Perimeter: " << rect.perimeter() << endl;

    return 0;
}

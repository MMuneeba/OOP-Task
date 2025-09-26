#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    // Constructor to initialize values
    Distance(int f = 0, int i = 0) {
        feet = f;
        inches = i;
    }

    // Overload == operator
    bool operator==(const Distance& d) {
        return (feet == d.feet && inches == d.inches);
    }

    // Display function
    void display() {
        cout << feet << " feet " << inches << " inches" << endl;
    }
};

int main() {
    Distance d1(5, 8);
    Distance d2(5, 8);
    Distance d3(6, 2);

    cout << "Distance 1: "; d1.display();
    cout << "Distance 2: "; d2.display();
    cout << "Distance 3: "; d3.display();

    if (d1 == d2)
        cout << "d1 and d2 are equal." << endl;
    else
        cout << "d1 and d2 are not equal." << endl;

    if (d1 == d3)
        cout << "d1 and d3 are equal." << endl;
    else
        cout << "d1 and d3 are not equal." << endl;

    return 0;
}


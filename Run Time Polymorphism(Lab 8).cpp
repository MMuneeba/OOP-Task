#include <iostream>
#include <cmath>
using namespace std;

// Base class
class Shape {
public:
    virtual double area() {
        return 0;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape {
private:
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override {
        return length * width;
    }
};

// Derived class - Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() override {
        return M_PI * radius * radius;
    }
};

int main() {
    Shape* shape;

    Rectangle rect(5, 4);
    Circle circ(3);

    shape = &rect;
    cout << "Rectangle Area: " << shape->area() << endl;

    shape = &circ;
    cout << "Circle Area: " << shape->area() << endl;

    return 0;
}


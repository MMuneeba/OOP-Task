#include<iostream>
using namespace std;
class Product {
private:
    string name;
    double price;
    int quantity;

public:
    // Setter for name with validation
    void setName(string n) {
        if (n.empty()) {
            cout << "Error: Name cannot be empty." << endl;
        } else {
            name = n;
        }
    }

    // Setter for price with validation
    void setPrice(double p) {
        if (p <= 0) {
            cout << "Error: Price must be greater than 0." << endl;
        } else {
            price = p;
        }
    }

    // Setter for quantity with validation
    void setQuantity(int q) {
        if (q < 0) {
            cout << "Error: Quantity cannot be negative." << endl;
        } else {
            quantity = q;
        }
    }

    // Getters
    string getName() {
        return name;
    }

    double getPrice() {
        return price;
    }

    int getQuantity() {
        return quantity;
    }
};
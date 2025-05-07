#include <iostream>
#include"Product.h"
using namespace std;

int main() {
    Product p;

    string nameInput;
    double priceInput;
    int quantityInput;

    // Input and set values
    cout << "Enter product name: ";
    getline(cin, nameInput);
    p.setName(nameInput);

    cout << "Enter product price: ";
    cin >> priceInput;
    p.setPrice(priceInput);

    cout << "Enter product quantity: ";
    cin >> quantityInput;
    p.setQuantity(quantityInput);

    // Display the product info
    cout << "\n--- Product Details ---" << endl;
    cout << "Name: " << p.getName() << endl;
    cout << "Price: $" << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}

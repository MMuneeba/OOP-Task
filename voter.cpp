#include <iostream>
#include <string>
#include"Voter.h"
using namespace std;

int main() {
    Voter person;

    // Input from user
    cout << "Enter name: ";
    getline(cin, person.name);

    cout << "Enter age: ";
    cin >> person.age;

    // Check and display eligibility
    if (isEligible(person)) {
        cout << person.name << " is eligible to vote." << endl;
    } else {
        cout << person.name << " is NOT eligible to vote." << endl;
    }

    return 0;
}

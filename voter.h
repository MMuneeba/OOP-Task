#include<iostream>
using namespace std;
class Voter {
public:
    string name;
    int age;
};

// Function to check eligibility, defined outside the class
bool isEligible(Voter v) {
    return v.age > 18;
}
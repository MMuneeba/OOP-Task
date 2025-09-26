//#include<iostream>
//using namespace std;
//
//class A {
//    public:
//        // Declaration
//        static int count;
//        A(){
//            count++; // Increment for every object
//        }
//};
//
//// Definition outside class
//int A::count = 0;
//
//int main(){
//    A a;
//    A b;
//    A c;
//    cout << "Total objects of the class created sofar : " << A::count << endl; //calling a static member
//
//    return 0;
//}
//Program 2
//Static Member Function
#include<iostream>
using namespace std;

class A {
    public:
        // Declaration
        static int count;
        A(){
            count++; // Increment for every object
        }

        static void showCount(){
            // can only access static members of the class.
            cout << "Total objects created sofar: " << count << endl;
        }
};

// Definition outside class
int A::count = 0;

int main(){
    A a;
    A b;
    A c;
    A::showCount(); // calling a static member function

    return 0;
}




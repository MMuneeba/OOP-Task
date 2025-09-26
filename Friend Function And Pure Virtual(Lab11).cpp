//#include<iostream>
//using namespace std;
//
//class Rectangle; // forward declaration
//
//class Circle{
//    private:
//        int radius;
//    public:
//        Circle(int r){
//            this->radius = r;
//        }
//        // Declaration of friend function
//        friend double totalArea(Circle, Rectangle);
//};
//
//class Rectangle{
//    private:
//        int length;
//        int width;
//    public:
//        Rectangle(int length, int width){
//            this->length = length;
//            this->width = width;
//        }
//        // Declaration of friend function
//        friend double totalArea(Circle c, Rectangle r);
//};
//
//// Definition of friend function that is friend of multiple classes
//double totalArea(Circle c, Rectangle r){
//    return (3.14 * c.radius * c.radius) + (r.length * r.width);
//}
//
//int main(){
//    Circle c(10);
//    Rectangle r(20, 10);
//    
//    // totalArea is not a member function, so it's called like a regular function
//    cout << "Total area : " << totalArea(c, r) << endl;
//    
//    return 0;
//}

//program 2
//Pure Abstract Function

#include<iostream>
using namespace std;

class Shape{
    public:
        virtual void draw() = 0; // pure abstract function
};

class Circle: public Shape{
    public:
        void draw(){
            cout << "Drawing a circle" << endl;
        }
};

class Rectangle: public Shape{
    public:
        void draw(){
            cout << "Drawing a rectangle" << endl;
        }
};

int main(){
    Circle c;
    Rectangle r;
    c.draw();
    r.draw();

    // Shape s; // cannot create an object of shape as it is abstract.
    // s.draw();

    return 0;
}


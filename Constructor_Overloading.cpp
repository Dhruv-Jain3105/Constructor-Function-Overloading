// Name: Dhruv Jain
// PRN: 24070123042
// Batch: EnTC A2

#include <iostream>
using namespace std;

class Rectangle {
public:
    // No-argument constructor
    Rectangle() {
        cout << "Rectangle not defined yet!" << endl;
    }

    // Constructor with one argument (Square)
    Rectangle(int side) {
        cout << "Area of Square with side " << side << " is " << side * side << endl;
    }

    // Constructor with two arguments (Rectangle)
    Rectangle(int length, int breadth) {
        cout << "Area of Rectangle (" << length << " x " << breadth << ") is " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;             // Calls no-argument constructor
    Rectangle square(5);      // Calls single-argument constructor
    Rectangle rect(10, 20);   // Calls two-argument constructor
    return 0;
}

/*
OUTPUT ::
Rectangle not defined yet!
Area of Square with side 5 is 25
Area of Rectangle (10 x 20) is 200
*/

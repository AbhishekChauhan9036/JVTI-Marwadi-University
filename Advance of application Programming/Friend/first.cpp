#include <iostream>
using namespace std;

class Box {
private:
    double length;

public:
    // Constructor without initialization list
    Box(double l) {
        length = l;
    }

    // Declare a friend function
    friend double calculateArea(Box b);
};

// Friend function definition
double calculateArea(Box b) {
    return b.length * b.length; // Accessing private member
}

int main() {
    Box box(5.0);
    cout << "Area of the box: " << calculateArea(box) << endl;
    return 0;
}

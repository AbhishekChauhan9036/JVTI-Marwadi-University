#include <iostream>
using namespace std;

class Rectangle; // Forward declaration

class Square {
private:
    double side;

public:
    // Constructor without initialization list
    Square(double s) {
        side = s;
    }

    // Declare Rectangle's friend function
    friend double getDiagonal(Square sq, Rectangle rect);
};

class Rectangle {
private:
    double length, breadth;

public:
    // Constructor without initialization list
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    // Declare Square's friend function
    friend double getDiagonal(Square sq, Rectangle rect);
};

// Friend function definition
double getDiagonal(Square sq, Rectangle rect) {
    double squareDiagonal = sq.side * 1.414;
    double rectangleDiagonal = 1.414 * (rect.length + rect.breadth);
    return squareDiagonal + rectangleDiagonal;
}

int main() {
    Square sq(4.0);
    Rectangle rect(6.0, 8.0);
    cout << "Total diagonal length: " << getDiagonal(sq, rect) << endl;
    return 0;
}

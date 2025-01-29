#include <iostream>
using namespace std;

class Demo {
private:
    const int x; // ❌ Value cannot be changed after initialization
    int y;

public:
    Demo(int a, int b) : x(a), y(b) {}

    void showValues() const { // ❌ Cannot modify class members inside this function
        cout << "x (constant): " << x << endl;
        cout << "y: " << y << endl;
    }

    void setY(int val) {
        y = val;
    }

    int getX() const { // ❌ Cannot modify class members inside this function
        return x;
    }
};

void printMessage(const string &message) { // ❌ Cannot modify message inside this function
    cout << message << endl;
}

int main() {
    const int num = 100; // ❌ Value cannot be changed
    cout << "Constant Variable: " << num << endl;

    Demo obj(5, 15);
    obj.showValues();
    obj.setY(25);
    obj.showValues();

    printMessage("Hello, World!");

    return 0;
}

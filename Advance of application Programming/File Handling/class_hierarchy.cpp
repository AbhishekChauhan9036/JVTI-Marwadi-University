#include <iostream>
using namespace std;

class Base {
public:
    void showBase() {
        cout << "Base class function" << endl;
    }
};

class Derived : public Base {
public:
    void showDerived() {
        cout << "Derived class function" << endl;
    }
};

int main() {
    Derived obj;
    obj.showBase();     // Calling base class function
    obj.showDerived();  // Calling derived class function
    return 0;
}

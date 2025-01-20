#include <iostream>
using namespace std;

class A; // Forward declaration

class B {
public:
    void display(A a);
};

class A {
private:
    int value;

public:
    // Constructor without initialization list
    A(int v) {
        value = v;
    }

    // Declare class B as a friend
    friend class B;
};

void B::display(A a) {
    cout << "The value of A is: " << a.value << endl;
}

int main() {
    A objA(42);
    B objB;
    objB.display(objA);
    return 0;
}

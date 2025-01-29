#include <iostream>
class Demo {
    static int count; // Declaration of static variable
public:
    Demo() {
        count++;
    }
    void showCount() {
        std::cout << "Count: " << count << std::endl;
    }
    static void display() {
        std::cout << "Static Count: " << count << std::endl;
    }
};
int Demo::count = 0; // Definition and initialization outside the class

int main() {
    Demo d1, d2, d3;
    d1.showCount();
    Demo::display();
    return 0;
}

#include <iostream>
class Example {
    static int value;
public:
    static void show() {
        std::cout << "Value: " << value << std::endl;
    }
};
int Example::value = 10; // Define static variable

int main() {
    Example::show(); // Calling static function without object
    return 0;
}
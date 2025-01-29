#include <iostream>
void countCalls() {
    static int count = 0; // Retains value across function calls
    count++;
    std::cout << "Function called " << count << " times\n";
}
int main() {
    countCalls();
    countCalls();
    countCalls();
    return 0;
}

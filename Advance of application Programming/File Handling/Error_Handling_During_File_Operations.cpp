#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("nonexistent.txt");  // Try opening a non-existing file

    if (!file) {
        cerr << "Error: File not found!" << endl;
        return 1;
    }

    string data;
    while (getline(file, data)) {
        cout << data << endl;
    }

    file.close();
    return 0;
}

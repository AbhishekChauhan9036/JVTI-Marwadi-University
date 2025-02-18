#include <iostream>
#include <fstream>  // File handling header
using namespace std;

int main() {
    ofstream outFile("example.txt");  // Open file in write mode
    if (!outFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    outFile << "Hello, this is a text file.\n";
    outFile << "C++ File Handling Example.";
    outFile.close();  // Close file after writing

    ifstream inFile("example.txt");  // Open file in read mode
    if (!inFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }
    
    string line;
    cout << "Reading from file:\n";
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();  // Close file after reading

    return 0;
}

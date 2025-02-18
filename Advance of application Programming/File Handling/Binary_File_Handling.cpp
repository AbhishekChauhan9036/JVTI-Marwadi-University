#include <iostream>
#include <fstream>
using namespace std;

class Student {
public:
    char name[50];
    int age;

    void getData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }

    void showData() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s;
    
    // Writing to binary file
    ofstream outFile("student.dat", ios::binary);
    s.getData();
    outFile.write((char*)&s, sizeof(s));
    outFile.close();

    // Reading from binary file
    ifstream inFile("student.dat", ios::binary);
    inFile.read((char*)&s, sizeof(s));
    cout << "\nReading from binary file:\n";
    s.showData();
    inFile.close();

    return 0;
}

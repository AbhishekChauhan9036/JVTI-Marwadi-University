#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;    // private member variable
    int age;        // private member variable
    int rollNumber; // private member variable
public:
    // Setter 
    void setName(string Name)
    {
        name = Name;
    }

    //Setter
    void setAge(int Age)
    {
        age = Age;
    }

    //setter
    void setRollNumber(int RollNumber)
    {
        rollNumber = RollNumber;
    }

    // to print student details
    void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};
int main()
{
    Student obj;
    obj.setName("Mann");
    obj.setAge(19);
    obj.setRollNumber(101);
    obj.Display();
    return 0;
}
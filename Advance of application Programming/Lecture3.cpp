
#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;    // private member variable
    int age;        // private member variable
    int rollNumber; // private member variable
public:
    // parameterize Constructor
    Student(string s,int a, int r){
        name = s;
        age = a;
        rollNumber = r;
    }

    //normal constructor
    Student(){
        //ye kuch nhi kar rha default constructer ke jaise hi hai
    }

    // Destructor
    ~Student(){
        //ye kuch nhi kar rha default constructer ke jaise hi hai
        cout<<"Destructor Is called Here"<<endl;
    }
    // // Setter 
    // void setName(string Name)
    // {
    //     name = Name;
    // }

    // //Setter
    // void setAge(int Age)
    // {
    //     age = Age;
    // }

    // //setter
    // void setRollNumber(int RollNumber)
    // {
    //     rollNumber = RollNumber;
    // }

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
    Student obj("Mann",19,101);
    Student obj2;
    // obj.setName("Mann");
    // obj.setAge(19);
    // obj.setRollNumber(101);
    obj.Display();
    return 0;
}
// Class and Object in C++
#include <iostream>
using namespace std;
class Employee
{
public:
    string name;
    int age;
    double salary;
    string id;
    string address;

    void setValues(string n, int a, double s, string ID, string Add){
        name = n;
        age = a;
        salary = s;
        id = ID;
        address = Add;
    }

    void printValues(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Age: "<<age<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Address: "<<address<<endl;
    }
};

int main(){
    Employee obj;
    obj.setValues("Tejas", 19, 50000.00, "EMP1234", "MU Hostel");
    obj.printValues();
    return 0;
}
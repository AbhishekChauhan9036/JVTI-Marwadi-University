#include"bits/stdc++.h"
using namespace std;

class Employee{
    public:
    string name;
    int EmpID;

    Employee(string str, int id){
        name = str;
        EmpID = id;
    }

    void displayEmployeeInfo(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee ID: "<<EmpID<<endl;
    }
};

class Manager: public Employee{
    public:
    string department;
    Manager(string dept,string str,int id):Employee(str,id){
        department = dept;
    }

    void displayManagerInfo(){
        displayEmployeeInfo();
        cout<<"Department Name: "<<department<<endl;
    }
};

int main(){
    Manager m1("Cloud & App Dev", "Khushi", 2006);
    m1.displayManagerInfo();
    return 0;
}
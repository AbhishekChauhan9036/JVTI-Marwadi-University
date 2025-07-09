// Constructor in C++
#include<iostream>
using namespace std;
class Customer{
private:
    string name;
    double salary;
public:
    Customer(string Name, double Salary){
        name = Name;
        salary = Salary;
        cout<<"Constructer is Called Here"<<endl;
    }

    void printDetails(){
        cout<<"Name of Customer is: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};

int main(){
    Customer c1("Nandani", 7834287.90);
    c1.printDetails();
    // c1->printDetails();
    return 0;
}
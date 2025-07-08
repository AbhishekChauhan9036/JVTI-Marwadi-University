#include <iostream>
using namespace std;
class Student{
private:
    string name;
    int roll_number;
    string address;
    string id;
    string stream;

    void printDetails(){
        cout<<"Strudent Name: "<<name<<endl;
        cout<<"Roll Number: "<<roll_number<<endl;
        cout<<"Address: "<<address<<endl;
        cout<<"Student ID: "<<id<<endl;
        cout<<"Stream Name: "<<stream<<endl;
    }
public:
    void setter(string Name,int Roll_number, string Address,string ID, string Stream){
        name = Name;
        roll_number = Roll_number;
        address = Address;
        id = ID;
        stream = Stream;
    }

    void getter(){
        printDetails();
    }
};

int main(){
    Student obj;
    obj.setter("Krupa",1020,"Rajkot","GR123","Fintech");
    obj.getter();
    return 0;
}
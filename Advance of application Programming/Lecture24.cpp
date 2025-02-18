/**
 * @file Lecture24.cpp
 * Abstract Classes in c++
 */

#include"bits/stdc++.h"
using namespace std;

class Person{
public:
    virtual void showDetails() = 0;
};

class Student: public Person{
public: 
    void showDetails() override{
        cout<<"this function will print Student Details"<<endl;
    }
};

class Employee: public Person{
public: 
    void showDetails() override{
        cout<<"this function will print Employee Details"<<endl;
    }
};

int main(){
    Person* p1 = new Student();
    Person* p2 = new Employee();

    p1->showDetails();
    p2->showDetails();

    delete p1;
    delete p2;

    return 0;
}
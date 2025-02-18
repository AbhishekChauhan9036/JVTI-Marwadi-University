/**
 * @file Lecture23.cpp
 * Run Time Polymorphism
 */

#include"bits/stdc++.h"
using namespace std;
class Base{
public:
    virtual void showMessage(){
        cout<<"Base: Default Message from Base Class"<<endl;
    }
};

class Derived : public Base{
public:
    void showMessage() override {
        cout<<"Derived: Custom Message from Derived Class"<<endl;
    }
};

int main(){
    Base* ptr;
    Derived d;
    ptr = &d;
    ptr->showMessage();
    return 0;
}
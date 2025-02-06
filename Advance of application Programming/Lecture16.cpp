/**
 * @file Lecture16.cpp
 * MultiLevel Inheritence
 */
#include"bits/stdc++.h"
using namespace std;

class A{
    public:
    void displayA(){
        cout<<"Class A"<<endl;
    }
};

class B:public A{
    public:
    void displayB(){
        cout<<"Class B"<<endl;
    }
};

class C:public B{  
    public:
    void displayC(){
        cout<<"Class C"<<endl;
    }
};

int main(){
    C c1;
    c1.displayA();
    c1.displayB();
    c1.displayC();
    return 0;
}
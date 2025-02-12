/**
 * @file Lecture20.cpp
 * Hybrid Inheritance
 */

#include"bits/stdc++.h"
using namespace std;

class A{
public:
    int a;
    void f1(){
        cout<<"this is f1 Function"<<endl;
    }
};

class B1: virtual public A{
public:
    int b1;
    void f2(){
        cout<<"this is f2 Function"<<endl;
    }
};

class B2: virtual public A{
public:
    int b2;
    void f3(){
        cout<<"this is f3 Function"<<endl;
    }
};

class C:public B1, public B2{
public:
    int c;
    void f4(){
        cout<<"this is f4 Function"<<endl;
    }
};

int main(){
    C c1;
    cout<<"Size of c1 is: "<<sizeof(B1)<<endl;
    cout<<"Size of c1 is: "<<sizeof(B2)<<endl;

    // c1.B1::a = 10;
    // c1.B2::a = 20;
    // cout<<endl<<"Value of B1~a is: "<<c1.B1::a<<endl;
    // cout<<endl<<"Value of B2~a is: "<<c1.B2::a<<endl;
    c1.f4();
    c1.f3();
    c1.f2();
    c1.f1();
    return 0;
}
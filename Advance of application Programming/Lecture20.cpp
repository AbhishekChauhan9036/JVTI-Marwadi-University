/**
 * @file Lecture20.cpp
 * Hybrid Inheritance
 */

#include"bits/stdc++.h"
using namespace std;

class A{
public:
    int a;
};

class B1: public A{
public:
    int b1;
};

class B2: public A{
public:
    int b2;
};

class C:public B1, public B2{
public:
    int c;
};

int main(){
    C c1;
    c1.B1::a = 10;
    c1.B2::a = 20;
    cout<<endl<<"Value of B1~a is: "<<c1.B1::a<<endl;
    cout<<endl<<"Value of B2~a is: "<<c1.B2::a<<endl;
    return 0;
}
/**
 * @file Lecture21.cpp
 * Pointer in c++
 */

#include"bits/stdc++.h"
using namespace std;
int main(){
    int a = 10;
    int *ptr = &a;
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value of *ptr is: "<<*ptr<<endl;
    
    cout<<"Value of &a is: "<<&a<<endl;
    cout<<"Value of ptr is: "<<ptr<<endl;

    return 0;
}
#include"bits/stdc++.h"
using namespace std;

class A{
    public:
    int a;
    void setA(int x){
        a = x;
    }
    void display(){
        cout<<"Base Class"<<endl;
    }
};

class B:public A{
    public:
    void showData(){
        cout<<"Value of a is: "<< a <<endl;
    }
};

int main(){
    B b1;
    b1.setA(10);
    b1.display();
    b1.showData();
    return 0;
}
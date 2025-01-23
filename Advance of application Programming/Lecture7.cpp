/**
    Friend Classes in c++
 */
#include"bits/stdc++.h"
using namespace std;

class A;

class B{
    public:
        // B(){}
        void Display(A a);
};

class A{
    private:
        int value;
    public:
        A(int v):value(v){}
    friend class B;
};

void B::Display(A a){
    cout<<"The Value of A is: "<<a.value<<endl;
}

int main(){
    A objA(32);
    B objB;
    objB.Display(objA);
    return 0;
}





/**
 * @brief 
  void showData(){
            cout<<"ShowData Function"<<endl;
        }
        void PrintData(){
            cout<<"PrinData Function"<<endl;
        }
 * 
 */
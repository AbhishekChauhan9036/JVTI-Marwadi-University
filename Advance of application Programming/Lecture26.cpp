/*
Default Constructor
Parameterized Constructor
Copy Constructor
Move Constructor
*/

#include<bits/stdc++.h>
using namespace std;

class A{
private:
    int a,b,c;
    int *ptr;
public:
    // Default Constructor
    A(){
        cout<<"This is Default Constructor"<<endl;
    }
    
    // Parameterized Constructor
    A(int x){
        a = x;
    }

    // Copy Constructor
    A(const A &obj){
        a = obj.a;
    }

    // Move Constructor
    A(A&& obj){
        ptr = obj.ptr;
        obj.ptr = nullptr;
    }

    //Destructor for Delete pointer ptr
    ~A(){
        if(ptr){
            delete ptr;
        }
    }
};

int main(){
    A a; // Default Constructor Call
    A a1(10);// Parameterized Constructor Call
    A a2 = a1;// Copy Constructor Call
    A a3 = move(a1); // Move Constructor Call
    return 0;
}

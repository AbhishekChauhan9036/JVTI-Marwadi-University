/**
 * @file Lecture25.cpp
 * Distructure Overriding
 */

#include<bits/stdc++.h>
using namespace std;
class Base{
public:
    Base(){
        cout<<"Base class Constructor"<<endl;
    }

    virtual ~Base(){
        cout<<"Base class Destructor"<<endl;
    }
};

class Derived: public Base{
public:
    Derived(){
        cout<<"Derived class Constructor"<<endl;
    }

    ~Derived(){
        cout<<"Derived class Destructor"<<endl;
    }
};


int main(){
    Base* ptr = new Derived();

    delete ptr;
    return 0;
}

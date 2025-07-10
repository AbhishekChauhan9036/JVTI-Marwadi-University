// Distructor in C++
#include<iostream>
using namespace std;
class Customer{
public:
    Customer(){
        cout<<"Constructer is Called Here"<<endl;
    }

    ~Customer(){
        cout<<"Distructer is Called Here"<<endl;
    }
};
int main(){
    Customer *p;
    delete p;
    return 0;
}
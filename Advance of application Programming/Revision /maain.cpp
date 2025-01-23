#include"bits/stdc++.h"
using namespace std;
class A{
    private:
    int a;// Data Member

    public:
    A(int num):a(num){}
    ~A(){
        cout<<"Destructor is Called Here"<<endl;
    }    

    void ShowData(){
        cout<<a<<endl;
    }

};

int main(){
    A a1(20);
    a1.ShowData();
    return 0;
}
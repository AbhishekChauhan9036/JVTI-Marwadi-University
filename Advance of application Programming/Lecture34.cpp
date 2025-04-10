#include<bits/stdc++.h>
using namespace std;
class MyClass{
    public:
    static int count;

    MyClass(){
        count++;
    }

    void showCount(){
        cout<<count<<endl;
    }
};
int MyClass::count = 0;
int main(){
   return 0;
}
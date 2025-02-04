#include<bits/stdc++.h>
using namespace std;

void staticFunction(){
    static int count = 0;
    int a = 10;
    ++a;
    ++count;
    cout<<"Value of count: "<<count<<"  Value of a:"<<a<<endl;
}

int main(){
    staticFunction();
    staticFunction();
    staticFunction();
    return 0;
}
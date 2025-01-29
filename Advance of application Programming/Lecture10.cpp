#include"bits/stdc++.h"
using namespace std;

void Display(string name){
    cout<<"User Name is: "<<name<<endl;
}

string Display(string Fname, string Lname){
    cout<<"User Name is: "<<Fname<<" "<<Lname<<endl;
    return (Fname);
}

void Display(double pi){
    cout<<"Pi value is: "<<pi<<endl;
}

int Display(int num1,int num2){
    return (num1+num2);
}

int main(){
    Display("Gautam");
    Display("Gautam","Kumar");
    Display(3.1417);
    int sum = Display(10,20);
    cout<<"Sum is:"<<sum<<endl;
    return 0;
}
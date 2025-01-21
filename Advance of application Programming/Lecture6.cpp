/**
    Friend Function in C++
 */
#include<bits/stdc++.h>
using namespace std;
class Box{
    private:
        double length;
        double width;
    
    public:
        //Constructor Initialization
        Box(double l):length(l){}
    
    //Declare a Friend Function
    friend double calculateArea(Box b);
};

double calculateArea(Box b){
    return (b.length*b.length);
}

int main(){
    Box obj(10.00);
    double area = calculateArea(obj);
    cout<<" Area of the Box: "<<area<<endl;
    return 0;
}
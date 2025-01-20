#include<bits/stdc++.h>
using namespace std;
class Rectangle{
    private:
        int length;
        int width;
    public:
        Rectangle(int l,int w){
            length = l;
            width = w;
        }

        ~Rectangle(){
            cout<<"Destructor is called"<<endl;
        }

        int area(){
            return length*width;
        }
};

int main(){
    Rectangle r1(10,20);
    int Area = r1.area();
    cout<<"Area of Reactangle is:"<<Area<<endl;
    return 0;
}
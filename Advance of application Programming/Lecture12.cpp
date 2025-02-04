#include<bits/stdc++.h>
using namespace std;

class Demo{
    private:
        static int count;
    public:
        Demo(){
            count++;
        }
        void showCount(){
            cout<<"Count Value: "<<count<<endl;
        }
        static void Display(){
            cout<<"Static Count: "<<count<<endl;
        }
};

int Demo::count = 0;

int main(){
    Demo d1;
    d1.showCount();
    Demo::Display();
    return 0;
}

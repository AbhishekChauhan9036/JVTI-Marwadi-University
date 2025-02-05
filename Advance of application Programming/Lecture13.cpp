#include"bits/stdc++.h"
using namespace std;
class Demo{
    private:
        const int x; // we can initlizie value with the help of direct Constructor
        int y;
    public:
        Demo(int a,int b):x(a),y(b){}

        void showValue()const{    // Read Only Function
            cout<<"Value of x is: "<<x<<endl;
            cout<<"Value of y is: "<<y<<endl;
        }

        void setY(int val){
            y = val;
        }

        int getX()const{ // Read Only Function
            return x;
        }

        void printMessage(const string &message){    // Read Only Function
            cout<<endl<<message<<endl;
        }
};

int main(){

    const int num = 10; // Value Cannot be changed
    Demo d1(10,20);
    d1.showValue();
    d1.setY(30);
    cout<<endl<<d1.getX()<<endl;
    d1.printMessage("Gautam");
    
    return 0;
}

/**
 * @brief Inheritance
 * Single Inheritance
 * Multilevel Inheritance
 * Multiple Inheritance
 * Heirarical Inheritance
 * Hybrid Inheritance
 */
#include"bits/stdc++.h"
using namespace std;
class Complex{
    private:
        double real;
        double imag;
    public:
        void setValue(double r, double i){
            real = r;
            imag = i;
        }

        Complex operator+(Complex other){
            Complex temp;
            temp.real = real + other.real;
            temp.imag = imag + other.imag;
            return temp;
        } 

        void Display(){
            cout<< real<< " + "<<imag<<"i"<<endl;
        }
};

int main(){
    Complex c1, c2, c3;
    c1.setValue(3.4,2.1);
    c2.setValue(1.6,3.1);
    // c3 = c1.plus(c2);
    c3 = c1 + c2;
    c1.Display();
    c2.Display();
    c3.Display();
    return 0;
}



// 3.4 + 2.1i = 5.5i
#include"bits/stdc++.h"
using namespace std;
class Point{
    private:
        int x,y;
    public:
    // Point(int a,int b):x(a),y(b){}
    Point(int a, int b){
        x = a;
        y = b;
    }
    Point operator-(Point p){
        return Point(x - p.x, y - p.y);
                 //  5 - 2    2  - 1
    }
    void Display(){
        cout<< "(" << x << "," << y << ")" << endl;
    }
};
int main(){
    Point p1(5,3);
    Point p2(2,1);
    Point p3 = p1-p2;
    // p3 = p1.minus(p2);
    p1.Display();
    p2.Display();
    p3.Display();
    return 0;
}
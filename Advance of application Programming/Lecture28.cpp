/**
 * Exception Handling in c++
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Hello World!"<<endl;
    try{
        throw 10;
        cout<<"Hello World!"<<endl;
    }
    catch(double exp1){
        cout<<exp1<<"\n";
    }
    catch(int exp2){
        cout<<exp2<<"\n";
        cout<<exp2<<"\n";
    }
    return 0;
}
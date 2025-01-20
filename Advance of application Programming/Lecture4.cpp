#include<bits/stdc++.h>
using namespace std;
class BankAccount{
    private:
        double balance;
    public:
        // Default Constructor
        BankAccount(){

        }
        void setBalance(double b){
            balance = b;
        }

        double getBalance(){
            return balance;
        }
};

int main(){
    BankAccount obj;
    cout<<"Enter your Balance:";
    double b;
    cin>>b;
    obj.setBalance(b);
    double ans = obj.getBalance();
    cout<<"Balance is:"<<ans<<"\n";
    return 0;
}
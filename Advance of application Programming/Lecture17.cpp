/**
 * @file Lecture17.cpp
 * MultiLevel Inheritence
 */

#include"bits/stdc++.h"
using namespace std;

class BankAccount{
protected:
    string accountholder;
    double balance;
public:
    BankAccount(string name, double amount){
        accountholder = name;
        balance = amount;
        cout<<"Bank Account Created for "<<accountholder<<" with balance:"<<balance<<endl;
    }

    void deposite(double amount){
        balance += amount;
        cout<<"Deposited: "<<amount<<", New Balance: "<<balance<<endl;
    }

    void withdraw(double amount){
        if(amount<=balance){
            balance-=amount;
            cout<<"Withdraw: "<<amount<<", Remmaming Balance: "<<balance<<endl;
        }else{
            cout<<"Insufficient Balance!"<<endl;
        }
    }
};

class SavingsAccount : public BankAccount{
protected:
    double interestRate;
public:
    SavingsAccount(string name, double amount,double rate):BankAccount(name, amount){
        interestRate = rate;
        cout<<"Saving Account Created with Interest Rate: "<<interestRate<<"%"<<endl;
    }

    void addInterest(){
        double interest = (balance * interestRate) / 100;
        balance += interest;
        cout<<" Intreseted Added: "<< interest <<", New Balance: "<<balance<<endl;
    }
};

class PremiumSavingAccount: public SavingsAccount{
protected:
    double bonus;
public:
    PremiumSavingAccount(string name, double amount, double rate, double bonusAmt):SavingsAccount(name, amount, rate){
        bonus = bonusAmt;
        cout<<" Premium Savings Account Created with Bonus: "<<bonus<<endl;
    }
    void addBonus(){
        balance+=bonus;
        cout<<"Bonus Added: "<<bonus<<", New Balance: "<<balance<<endl;
    }
};

int main(){
    PremiumSavingAccount a1("Krina Khetiya", 5000, 5, 200);
    a1.deposite(1000);
    a1.withdraw(1200);
    a1.addInterest();
    a1.addBonus();
    return 0;
}
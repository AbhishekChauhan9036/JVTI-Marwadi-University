/**
 * @file Lecture18.cpp
 * Multiple Inheritance
 */
#include"bits/stdc++.h"
using namespace std;

class PetrolCar{
protected:
    int Pgear;
public:
    void petrolEngine(){
        cout<<"Petrol Engine is Running..."<<endl;
    }
};

class ElectricCar{
protected:
    int Egear;
public:
    void electricEngine(){
        cout<<"Electric Engine is Running..."<<endl;
    }
};

class HybridCar:public PetrolCar, public ElectricCar{
protected:
    int Hgear;
public:
    void setGear(int pgear, int egear, int hgear){
        Egear = egear;
        Hgear = hgear;
        Pgear = pgear;
    }

    void hybridEngine(){
        cout<<"Hybrid Engine is Running..."<<endl;
    }

    void printGear(){
        cout<<"Pgear: "<<Pgear<<" Egear: "<<Egear<<" Hgear: "<<Egear<<endl;
    }
};

int main(){
    HybridCar h1;
    h1.setGear(4,3,5);
    h1.petrolEngine();
    h1.electricEngine();
    h1.hybridEngine();
    h1.printGear();
    return 0;
}
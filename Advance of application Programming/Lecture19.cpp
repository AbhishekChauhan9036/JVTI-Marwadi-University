/**
 * @file Lecture19.cpp
 * Hierarchical Inheritance
 */

#include"bits/stdc++.h"
using namespace std;

class Animal{
public:
    void eating(){
        cout<<"Animal is Eating"<<endl;
    }
};

class Dog: public Animal{
public:
    void bark(){
        cout<<"Dog is Barking"<<endl;
    }
};

class Cat: public Animal{
public:
    void meow(){
        cout<<"Cat meow"<<endl;
    }
};

int main(){
    Dog d1;
    Cat c1;

    d1.eating();
    d1.bark();

    c1.eating();
    c1.meow();

    return 0;
}
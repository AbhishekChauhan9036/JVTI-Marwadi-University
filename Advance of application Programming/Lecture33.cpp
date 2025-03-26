/**
 * File Handling in c++
 * Exception
 */
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream file("output.txt");

    if(!file){
       cout<<"Exception: File not Found!"<<endl; 
       return 0;
    }

    string data;
    while(getline(file,data)){
        cout<<data<<endl;
    }

    file.close();
    
    return 0;
}
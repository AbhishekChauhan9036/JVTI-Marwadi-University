/**
 * File Handling in c++
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    // ofstream file("Hello.txt");
    // if(file.is_open()){
    //     file<<"Hello this file is opened"<<endl;
    // }
    // file.close();

    ifstream file("Hello.txt");
    string str;
    while(getline(file,str)){
        cout<<str<<endl;
    }
    file.close();
    return 0;
}
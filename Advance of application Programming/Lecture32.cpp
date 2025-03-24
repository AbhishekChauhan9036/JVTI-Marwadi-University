/**
 * File Handling in c++
 * Deleting a File
 */
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    if(remove("output.txt")==0){
        cout<<"File Deleted Successfully";
    }
    return 0;
}
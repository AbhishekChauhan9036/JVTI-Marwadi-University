/**
 * File Handling in c++
 * Appending to a File
 */
#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream file("output.txt", ios::app);
    file<<"Appending new Data";
    file.close();
    return 0;
}

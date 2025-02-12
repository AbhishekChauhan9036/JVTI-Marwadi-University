/**
 * @file Lecture22.cpp
 * New and Delete Keyword in C++
 */

#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}
#include<stdio.h>
int main(){
    int arr[] ={12,17,19,18,31,45,67,78};
    int n=8;
    int target = 78;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
        return -1;
    }

    return 0;
}






// Print first 20 even numbers etc.
// 0 2 4 6 8 10 12 14 16 18 20 22 24 26 28 30 
// 32 34 36 38

#include<stdio.h>
int main(){
    int i =0;
    while(i<=38){
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}
/** 
for Loop
while loop
do while loop
**/


#include<stdio.h>
int main(){
    int i,num=10;
    for(i=1;i<=10;i++){
        if(i==4){
            break;
        }
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}




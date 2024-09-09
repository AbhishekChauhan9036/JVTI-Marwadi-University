#include <stdio.h> 
int stack[50]; 
int top=-1; 
void push(int val){ 
    stack[++top]= val; 
} 
void pop(){ 
   top--; 
} 
int peep(){ 
    if(top<0){ 
        return -1; 
    } 
    else{ 
        return stack[top]; 
} 
} 
int main() { 
    int n; 
    scanf("%d",&n); 
    push(1); 
    for(int i=2; i<=n;i++){ 
        push(peep()*i); 
    } 
    printf("factorial of %d is %d",n, peep()); 
     
    return 0;
}

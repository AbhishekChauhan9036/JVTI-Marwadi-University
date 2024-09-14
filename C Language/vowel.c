// Write a C program that checks if a given character is a vowel or a consonant using an if-else statement.	

#include<stdio.h>
int main(){
    char ch = "a";
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
    || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("It's Vowel\n");
    }
    else{
        printf("It's Contonest\n");
    }

    return 0;
}

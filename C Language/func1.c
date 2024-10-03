#include <stdio.h>

void printMsg(); // function Declaration

int main()
{
    printMsg(); // function Call
    return 0;
}

// function Definition
void printMsg()
{ 
    printf("Hello World!");
}
/*
    Polish Notation
    1) Infix Notation    (A+B)        (A+B)*C       (A+B)/(C-D)
    2) Prefix Notation  +(AB)        *+ABC          /+AB-CD
    3) Postfix Notation  AB+          AB+C*         AB+CD-

    Infix to PostFix Conversion
    A+[(B+C) + (D+E) *F ]/G
    A+[(BC+) + (DE+) *F]/G
    A+[BC+DE+F*+]G/
    ABC+DE+F*+G/+
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int isOperator(char c)
{
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void reverse(char *exp)
{
    int length = strlen(exp);
    for (int i = 0; i < length / 2; i++)
    {
        char temp = exp[i];
        exp[i] = exp[length - i - 1];
        exp[length - i - 1] = temp;
    }
}

void infixToPrefix(char *infix, char *prefix)
{
    int length = strlen(infix);
    reverse(infix);
    char stack[MAX];
    int top = -1;
    int k = 0;
    for (int i = 0; i < length; i++)
    {
        if (isalnum(infix[i]))
        {
            prefix[k++] = infix[i];
        }
        else if (infix[i] == ')')
        {
            stack[++top] = infix[i];
        }
        else if (infix[i] == '(')
        {
            while (top != -1 && stack[top] != ')')
            {
                prefix[k++] = stack[top--];
            }
            top--;
        }
        else
        {
            while (top != -1 && precedence(stack[top]) > precedence(infix[i]))
            {
                prefix[k++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
    }
    while (top != -1)
    {
        prefix[k++] = stack[top--];
    }
    prefix[k] = '\0';
    reverse(prefix);
}

int main()
{
    char infix[MAX], prefix[MAX];
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);
    return 0;
}

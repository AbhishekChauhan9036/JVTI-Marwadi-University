#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

typedef struct {
    int top;
    char items[MAX];
} Stack;

void initStack(Stack *stk) {
    stk->top = -1;
}

int isEmpty(Stack *stk) {
    return stk->top == -1;
}

int isFull(Stack *stk) {
    return stk->top == MAX - 1;
}

void push(Stack *stk, char value) {
    if (isFull(stk)) {
        printf("Stack overflow\n");
        return;
    }
    stk->items[++(stk->top)] = value;
}

char pop(Stack *stk) {
    if (isEmpty(stk)) {
        printf("Stack underflow\n");
        return '\0';
    }
    return stk->items[(stk->top)--];
}

char peek(Stack *stk) {
    if (isEmpty(stk)) {
        return '\0';
    }
    return stk->items[stk->top];
}

int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

int precedence(char c) {
    if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;
    return 0;
}

void infixToPostfix(char* infix, char* postfix) {
    Stack stk;
    initStack(&stk);
    int i, k = 0;

    for (i = 0; infix[i] != '\0'; i++) {
        char c = infix[i];

        if (isalnum(c)) {
            postfix[k++] = c;
        }
        else if (c == '(') {
            push(&stk, c);
        }
        else if (c == ')') {
            while (!isEmpty(&stk) && peek(&stk) != '(') {
                postfix[k++] = pop(&stk);
            }
            pop(&stk);
        }
        else if (isOperator(c)) {
            while (!isEmpty(&stk) && precedence(peek(&stk)) >= precedence(c)) {
                postfix[k++] = pop(&stk);
            }
            push(&stk, c);
        }
    }

    while (!isEmpty(&stk)) {
        postfix[k++] = pop(&stk);
    }

    postfix[k] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter infix expression: ");
    scanf("%s", infix);

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}

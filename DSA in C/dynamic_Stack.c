#include <stdio.h>
#include <stdlib.h>

// Stack structure
typedef struct {
    int *items;
    int top;
    int capacity;
} Stack;

// Function to initialize the stack
void initStack(Stack *s, int capacity) {
    s->capacity = capacity;
    s->top = -1;
    s->items = (int *)malloc(s->capacity * sizeof(int));
    if (s->items == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == s->capacity - 1;
}

// Function to resize the stack when it is full
void resizeStack(Stack *s) {
    s->capacity *= 2;
    s->items = (int *)realloc(s->items, s->capacity * sizeof(int));
    if (s->items == NULL) {
        printf("Memory reallocation failed\n");
        exit(1);
    }
    printf("Stack resized to capacity %d\n", s->capacity);
}

// Function to push an element onto the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        resizeStack(s);
    }
    s->items[++(s->top)] = value;
    printf("%d pushed to stack\n", value);
}

// Function to pop an element from the stack
int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1;
    }
    int poppedValue = s->items[(s->top)--];
    printf("%d popped from stack\n", poppedValue);
    return poppedValue;
}

// Function to display the elements of the stack
void display(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements: ");
    for (int i = 0; i <= s->top; i++) {
        printf("%d ", s->items[i]);
    }
    printf("\n");
}

// Function to free the dynamically allocated memory for the stack
void freeStack(Stack *s) {
    free(s->items);
    s->items = NULL;
}

int main() {
    Stack stack;
    int initialCapacity = 2;
    initStack(&stack, initialCapacity);

    int choice, value;

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(&stack, value);
                break;
            case 2:
                pop(&stack);
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    freeStack(&stack); // Free the allocated memory

    return 0;
}

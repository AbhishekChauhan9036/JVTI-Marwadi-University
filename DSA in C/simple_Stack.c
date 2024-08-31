#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Stack structure
typedef struct {
    int items[MAX];
    int top;
} Stack;

// Function to initialize the stack
void initStack(Stack *s) {
    s->top = -1;
}

// Function to check if the stack is empty
int isEmpty(Stack *s) {
    return s->top == -1;
}

// Function to check if the stack is full
int isFull(Stack *s) {
    return s->top == MAX - 1;
}

// Function to push an element onto the stack
void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        return;
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

// Function to peep at a specific position in the stack (1-based index from top)
int peep(Stack *s, int position) {
    int index = s->top - position + 1;
    if (index < 0 || index > s->top) {
        printf("Invalid position\n");
        return -1;
    }
    return s->items[index];
}

// Function to update a specific position in the stack (1-based index from top)
void update(Stack *s, int position, int value) {
    int index = s->top - position + 1;
    if (index < 0 || index > s->top) {
        printf("Invalid position\n");
        return;
    }
    s->items[index] = value;
    printf("Stack updated at position %d with value %d\n", position, value);
}

int main() {
    Stack stack;
    initStack(&stack);

    int choice, value, position;

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peep\n");
        printf("4. Update\n");
        printf("5. Exit\n");
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
                printf("Enter position to peep (1-based index): ");
                scanf("%d", &position);
                value = peep(&stack, position);
                if (value != -1) {
                    printf("Value at position %d is %d\n", position, value);
                }
                break;
            case 4:
                printf("Enter position to update (1-based index): ");
                scanf("%d", &position);
                printf("Enter new value: ");
                scanf("%d", &value);
                update(&stack, position, value);
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 5);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(struct Node **top, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = *top;
    *top = newNode;
    printf("Element %d pushed into stack\n", data);
}

void pop(struct Node **top)
{
    if (*top == NULL)
    {
        printf("Stack is empty. Cannot pop.\n");
        return;
    }
    struct Node *temp = *top;
    printf("Element %d popped from stack\n", temp->data);
    *top = (*top)->next;
    free(temp);
}

int peek(struct Node *top)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return -1;
    }
    return top->data;
}

void update(struct Node *top, int pos, int data)
{
    struct Node *temp = top;
    int count = 1;

    while (temp != NULL && count < pos)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        printf("Position out of bounds.\n");
    }
    else
    {
        temp->data = data;
        printf("Element at position %d updated to %d\n", pos, data);
    }
}

void display(struct Node *top)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }
    struct Node *temp = top;
    printf("Stack elements:\n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *top = NULL;
    int choice, data, pos;

    do
    {
        printf("\nStack Operations Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Update\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to push: ");
            scanf("%d", &data);
            push(&top, data);
            break;

        case 2:
            pop(&top);
            break;

        case 3:
            data = peek(top);
            if (data != -1)
                printf("Top element is %d\n", data);
            break;

        case 4:
            printf("Enter position to update: ");
            scanf("%d", &pos);
            printf("Enter new data: ");
            scanf("%d", &data);
            update(top, pos, data);
            break;

        case 5:
            display(top);
            break;

        case 6:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front, *rear;
};

struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void enqueue(struct Queue *q, int data)
{
    struct Node *newNode = createNode(data);
    if (q->rear == NULL)
    {
        q->front = q->rear = newNode;
        printf("Element %d enqueued\n", data);
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
    printf("Element %d enqueued\n", data);
}

void dequeue(struct Queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue is empty. Cannot dequeue.\n");
        return;
    }
    struct Node *temp = q->front;
    printf("Element %d dequeued\n", temp->data);
    q->front = q->front->next;
    if (q->front == NULL)
        q->rear = NULL;
    free(temp);
}

int peek(struct Queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue is empty.\n");
        return -1;
    }
    return q->front->data;
}

void display(struct Queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }
    struct Node *temp = q->front;
    printf("Queue elements:\n");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Queue *q = createQueue();
    int choice, data;

    do
    {
        printf("\nQueue Operations Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to enqueue: ");
            scanf("%d", &data);
            enqueue(q, data);
            break;

        case 2:
            dequeue(q);
            break;

        case 3:
            data = peek(q);
            if (data != -1)
                printf("Front element is %d\n", data);
            break;

        case 4:
            display(q);
            break;

        case 5:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

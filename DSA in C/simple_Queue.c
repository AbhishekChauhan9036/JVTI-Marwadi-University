#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Queue structure
typedef struct {
    int items[MAX];
    int front, rear;
} Queue;

// Function to initialize the queue
void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Function to check if the queue is empty
int isEmpty(Queue *q) {
    return q->front == -1;
}

// Function to check if the queue is full
int isFull(Queue *q) {
    return q->rear == MAX - 1;
}

// Function to insert an element into the queue
void insert(Queue *q, int value) {
    if (isFull(q)) {
        printf("Queue overflow\n");
        return;
    }
    if (q->front == -1) {
        q->front = 0; // If inserting the first element, set front to 0
    }
    q->items[++(q->rear)] = value;
    printf("%d inserted into the queue\n", value);
}

// Function to delete an element from the queue
int delete(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue underflow\n");
        return -1;
    }
    int deletedValue = q->items[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1; // Reset the queue after the last element is deleted
    } else {
        q->front++;
    }
    printf("%d deleted from the queue\n", deletedValue);
    return deletedValue;
}

// Function to display the elements of the queue
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = q->front; i <= q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int main() {
    Queue queue;
    initQueue(&queue);

    int choice, value;

    do {
        printf("\nQueue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(&queue, value);
                break;
            case 2:
                delete(&queue);
                break;
            case 3:
                display(&queue);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}

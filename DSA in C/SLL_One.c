#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

void create(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    *head = newNode;
}

void display(struct Node *head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertFirst(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void insertLast(struct Node **head, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertBefore(struct Node **head, int target, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node *temp = *head;
    struct Node *prev = NULL;

    while (temp != NULL && temp->data != target) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;

    if (prev == NULL) {
        newNode->next = *head;
        *head = newNode;
    } else {
        prev->next = newNode;
        newNode->next = temp;
    }
}

void insertAfter(struct Node **head, int target, int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    struct Node *temp = *head;

    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }
    if (temp == NULL) return;

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteFirst(struct Node **head) {
    if (*head == NULL) return;
    struct Node *temp = *head;
    *head = (*head)->next;
    free(temp);
}

void deleteLast(struct Node **head) {
    if (*head == NULL) return;
    struct Node *temp = *head;
    struct Node *prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL) {
        free(*head);
        *head = NULL;
    } else {
        prev->next = NULL;
        free(temp);
    }
}

void deleteBefore(struct Node **head, int target) {
    struct Node *temp = *head;
    struct Node *prev = NULL;
    struct Node *beforePrev = NULL;

    while (temp != NULL && temp->data != target) {
        beforePrev = prev;
        prev = temp;
        temp = temp->next;
    }
    if (prev == NULL || beforePrev == NULL) return;

    if (beforePrev == *head) {
        *head = temp;
    } else {
        beforePrev->next = temp;
    }
    free(prev);
}

void deleteAfter(struct Node **head, int target) {
    struct Node *temp = *head;

    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) return;

    struct Node *toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
}

int search(struct Node *head, int data) {
    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->data == data) return 1;
        temp = temp->next;
    }
    return 0;
}

void sort(struct Node **head) {
    struct Node *i, *j;
    int tempData;

    for (i = *head; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (i->data > j->data) {
                tempData = i->data;
                i->data = j->data;
                j->data = tempData;
            }
        }
    }
}

void update(struct Node *head, int oldData, int newData) {
    struct Node *temp = head;
    while (temp != NULL) {
        if (temp->data == oldData) {
            temp->data = newData;
            return;
        }
        temp = temp->next;
    }
}

int countNodes(struct Node *head) {
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

int main() {
    struct Node *head = NULL;

    create(&head, 10);
    insertLast(&head, 20);
    insertLast(&head, 30);
    insertFirst(&head, 5);
    insertBefore(&head, 20, 15);
    insertAfter(&head, 20, 25);

    printf("List: ");
    display(head);

    deleteFirst(&head);
    printf("After deleting first: ");
    display(head);

    deleteLast(&head);
    printf("After deleting last: ");
    display(head);

    deleteBefore(&head, 20);
    printf("After deleting before 20: ");
    display(head);

    deleteAfter(&head, 20);
    printf("After deleting after 20: ");
    display(head);

    printf("Element 15 found: %d\n", search(head, 15));
    printf("Element 25 found: %d\n", search(head, 25));

    sort(&head);
    printf("After sorting: ");
    display(head);

    update(head, 15, 17);
    printf("After updating 15 to 17: ");
    display(head);

    printf("Number of nodes: %d\n", countNodes(head));

    return 0;
}

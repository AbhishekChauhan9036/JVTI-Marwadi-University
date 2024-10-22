#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

struct Node {
    int data;
    struct Node* next;
};

struct Node* hashTable[SIZE];

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = key;
    newNode->next = hashTable[index];
    hashTable[index] = newNode;
}

int search(int key) {
    int index = hashFunction(key);
    struct Node* temp = hashTable[index];
    while (temp) {
        if (temp->data == key)
            return 1;
        temp = temp->next;
    }
    return 0;
}

int main() {
    insert(12);
    insert(25);
    insert(35);
    insert(26);
    if (search(35))
        printf("Element found");
    else
        printf("Element not found");
    return 0;
}

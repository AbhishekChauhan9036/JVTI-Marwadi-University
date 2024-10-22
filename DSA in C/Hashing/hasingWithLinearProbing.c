#include <stdio.h>
#define SIZE 10

int hashTable[SIZE];

int hashFunction(int key) {
    return key % SIZE;
}

void insert(int key) {
    int index = hashFunction(key);
    while (hashTable[index] != 0)
        index = (index + 1) % SIZE;
    hashTable[index] = key;
}

int search(int key) {
    int index = hashFunction(key);
    while (hashTable[index] != 0) {
        if (hashTable[index] == key)
            return index;
        index = (index + 1) % SIZE;
    }
    return -1;
}

int main() {
    insert(12);
    insert(25);
    insert(35);
    insert(26);
    int index = search(25);
    if (index != -1)
        printf("Element found at index %d", index);
    else
        printf("Element not found");
    return 0;
}

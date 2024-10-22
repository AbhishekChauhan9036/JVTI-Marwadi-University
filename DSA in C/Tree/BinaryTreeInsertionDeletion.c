#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct Node* insertNode(struct Node* node, int data) {
    if (node == NULL) return createNode(data);
    if (data < node->data) node->left = insertNode(node->left, data);
    else if (data > node->data) node->right = insertNode(node->right, data);
    return node;
}

struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) return root;
    if (data < root->data) root->left = deleteNode(root->left, data);
    else if (data > root->data) root->right = deleteNode(root->right, data);
    else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }
        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void updateNode(struct Node* root, int oldVal, int newVal) {
    root = deleteNode(root, oldVal);
    insertNode(root, newVal);
}

void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

int main() {
    struct Node* root = NULL;
    root = insertNode(root, 50);
    insertNode(root, 30);
    insertNode(root, 20);
    insertNode(root, 40);
    insertNode(root, 70);
    insertNode(root, 60);
    insertNode(root, 80);
    printf("Inorder traversal: ");
    inorder(root);
    root = deleteNode(root, 20);
    printf("\nInorder traversal after deletion: ");
    inorder(root);
    updateNode(root, 40, 45);
    printf("\nInorder traversal after update: ");
    inorder(root);
    return 0;
}

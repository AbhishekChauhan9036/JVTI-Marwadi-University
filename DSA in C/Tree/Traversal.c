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

void preorder(struct Node* node) {
    if (node == NULL) return;
    printf("%d ", node->data);
    preorder(node->left);
    preorder(node->right);
}

void inorder(struct Node* node) {
    if (node == NULL) return;
    inorder(node->left);
    printf("%d ", node->data);
    inorder(node->right);
}

void postorder(struct Node* node) {
    if (node == NULL) return;
    postorder(node->left);
    postorder(node->right);
    printf("%d ", node->data);
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    printf("Preorder traversal: ");
    preorder(root);
    printf("\nInorder traversal: ");
    inorder(root);
    printf("\nPostorder traversal: ");
    postorder(root);
    return 0;
}

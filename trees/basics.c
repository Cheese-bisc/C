#include <stdio.h>
#include <stdlib.h>

// Define node structure
typedef struct Node {
  int data;
  struct Node* left;
  struct Node* right;
} Node;

// Create a new node
Node* createNode(int value) {
  Node* newNode = malloc(sizeof(Node));
  if (!newNode) {
    printf("Memory error\n");
    return NULL;
  }
  newNode->data = value;
  newNode->left = newNode->right = NULL;
  return newNode;
}

// Example insertion (manual linking)
Node* createTree() {
  Node* root = createNode(1);

  root->left = createNode(2);
  root->right = createNode(3);

  root->left->left = createNode(4);
  root->left->right = createNode(5);

  root->right->left = createNode(6);
  root->right->right = createNode(7);

  return root;
}

// Traversals
void inorder(Node* root) {
  if (root == NULL)
    return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

void preorder(Node* root) {
  if (root == NULL)
    return;
  printf("%d ", root->data);
  preorder(root->left);
  preorder(root->right);
}

void postorder(Node* root) {
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  printf("%d ", root->data);
}

int main() {
  Node* root = createTree();

  printf("Inorder: ");
  inorder(root);
  printf("\n");

  printf("Preorder: ");
  preorder(root);
  printf("\n");

  printf("Postorder: ");
  postorder(root);
  printf("\n");

  return 0;
}


#include <stdio.h>
#include <stdlib.h>

// Define node structure
typedef struct node {
  int data;
  struct node* left;
  struct node* right;
} node;

// Create a new node
node* createnode(int value) {
  node* newnode = malloc(sizeof(node));
  if (!newnode) {
    printf("Memory error\n");
    return NULL;
  }
  newnode->data = value;
  newnode->left = newnode->right = NULL;
  return newnode;
}

// Example insertion (manual linking)
node* createTree() {
  node* root = createnode(1);

  root->left = createnode(2);
  root->right = createnode(3);

  root->left->left = createnode(4);
  root->left->right = createnode(5);

  root->right->left = createnode(6);
  root->right->right = createnode(7);

  return root;
}

// Traversals
void inorder(node* root) {
  if (root == NULL)
    return;
  inorder(root->left);
  printf("%d ", root->data);
  inorder(root->right);
}

void preorder(node* root) {
  if (root == NULL)
    return;
  printf("%d ", root->data);
  preorder(root->left);
  preorder(root->right);
}

void postorder(node* root) {
  if (root == NULL)
    return;
  postorder(root->left);
  postorder(root->right);
  printf("%d ", root->data);
}

int main() {
  node* root = createTree();

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

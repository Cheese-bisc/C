#include <stdio.h>
#include <stdlib.h>

// Define node structure
typedef struct node {
  int data;
  struct node* left;
  struct node* right;
} node;

// Create a new node
node* createnode(int value);
node* createTree();

int main() {
  node* root = createTree();

  return 0;
}

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

node* createTree() {
  node* root = createnode(5);

  root->left = createnode(3);
  root->right = createnode(7);

  root->left->left = createnode(1);
  root->left->right = createnode(4);

  root->right->left = createnode(6);
  root->right->right = createnode(10);

  root->right->right->left = createnode(9);

  return root;
}
node* reverse(node* root) {
  if (root == NULL)
    return NULL;
  if (root->right == NULL && root->left == NULL) {
    return root;
  }
  root->left = reverse(root->left);
  root->right = reverse(root->right);
  node* temp = root->right;
  root->right = root->left;
  root->left = temp;

  return root;
}
